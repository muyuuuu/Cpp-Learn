#include <iostream>
#include <deque>

using namespace std;

int main(){

    double values[] {1, 2, 3, 4, 5, 6, 7};
    // values 是数组首地址的指针，这里用作迭代器
    deque<double> q(values, values + 7);

    // 其他和 vector 类似
    // insert, erase 等改变元素数量的操作可能会导致迭代器失效
    // 所以要重新赋值

    // 队首操作
    q.push_front(0);
    for (auto i : q){
        cout << i << " ";
    } cout << endl;

    q.pop_front();
    q.pop_back();
    for (auto i : q){
        cout << i << " ";
    } cout << endl;
    
    return 0;
}