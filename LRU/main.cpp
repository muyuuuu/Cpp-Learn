#include <iostream>
#include <array>
#include <list>
#include <map>
#include <stdlib.h>

template <typename T, long long unsigned int N>
void generatePage(std::array<T, N>& x){
    constexpr unsigned int nPage{N};
    for (int i = 0; i < nPage; i++){
        int tmp;
        int lower = rand() % 100;
        // 偶数是小写
        if (lower % 2 == 0){
            tmp = rand() % 26 + 97;
        }
        // 奇数是大写
        else if (lower % 2 == 1){
            tmp = rand() % 26 + 65;
        }
        x[i] = tmp;
    }
}

template <typename T, long long unsigned int N>
void LRU(std::array<T, N>& x, std::list<T>& l, const unsigned int size){
    l.assign(size, '-');
    // isIn 表示节点是否在
    std::map<T, bool> isIn;
    // 记录置换次数
    int count{0};
    for (int i = 0; i < N; i++){
        // 链表满了，删除头部元素
        if (l.size() >= size){
            // 取出首元素
            auto tmp = l.front();
            isIn[tmp] = false;
            l.pop_front();
            count ++;
        }
        // 如果元素在列表中
        if (isIn[x[i]] == true){
            // 开始移动
            l.remove(x[i]);
            l.push_back(x[i]);
        }
        // 不在列表中
        else if (isIn[x[i]] == false){
            l.push_back(x[i]);
            isIn[x[i]] = true;
        }
    }
    std::cout << "LRU number is " << count << std::endl;
}

int main(){

    // list 的容量
    const unsigned int size{30};
    // 页面数量
    const unsigned int nPage{1000};
    // 用大小写的单个字符表示页面 ID
    std::array<char, nPage> page;

    // 随机数生成页面
    generatePage(page);

    // 实现页面置换的链表
    std::list<char> l;
    // 开始 LRU 算法
    LRU(page, l, size);

    // 展示
    std::list<char>::iterator itr;
    for (itr = l.begin(); itr != l.end(); itr++){
        std::cout << *itr << " ";
    }

    return 0;
}