#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

int foo(int arg){
    return arg;
}

int main(){
    auto x{foo(31)};
    // 不含初试化器
    if (x > 40){
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    // 不能重复定义
    // auto x{12}

    // 含有初始化器
    // 在 if 内，作用域为 if 块内部
    // C++17
    if (auto y{90}; y > 40){
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    auto y{12};

    switch (int i = rand() % 100; i){
        case 1: cout << "1" << endl; break;
        default: cout << "2" << endl; break;
    }
}