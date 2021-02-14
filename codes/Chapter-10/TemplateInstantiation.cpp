#include <iostream>
#include <string>

using std::endl;
using std::cout;

// 不要定义和标准库名字可能产生冲突的函数
template <typename T>
T max_(T x, T y){
    return (x > y ? x : y);
}

// 显式实例化 (指定返回值类型)
template <int> int max_(int, int);

int main(){
    using namespace std::string_literals;

    cout << max_(1, 2) << endl;

    // 浮点数实例化
    cout << max_(1.1, 1.11) << endl;

    // 字符实例化
    cout << max_('A', 'D') << endl;

    // 字符串字面量实例化
    // const char* 类型，比较指针地址的大小，前面的参数高地址
    // cout << max_("abc", "abd") << endl;

    // 字符串类型
    cout << max_("abc"s, "abd"s) << endl;

    return 0;
}