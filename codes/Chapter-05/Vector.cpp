#include <iostream>
#include <vector>

using std::endl;
using std::cout;
using std::vector;
using std::string;

void print(const vector<string>& a){
    for (auto i:a){
        cout << i << " ";
    }cout << endl;
}

int main(){

    vector<string> words1{"hello", "world", "welcome", "to", "C", "."};
    print(words1);

    // 删除最后元素 传入迭代器 指明元素位置
    words1.erase(words1.end()-1);
    print(words1);

    // 尾部追加
    words1.push_back("!");
    print(words1);

    // 迭代器拷贝 words1 的内容到 words2
    vector<string> words2{words1.begin() + 2, words1.end()};
    print(words2);

    // words2 中插入元素
    words2.insert(words2.begin(), "Em");
    print(words2);

    // words1 不受影响
    print(words1);

    // 拷贝构造函数
    auto words3{words2};
    print(words3);

    // 多个相同
    vector<string> words4(5, "Fucking C++");
    print(words4);

    return 0;
}