#include <iostream>

using std::cout;
using std::endl;

int main(){
    // 都可以改变
    int x{5};
    int*p = &x;
    x = 6;
    cout << *p << endl;

    // 常量声明时初始化
    // x1 不能改变
    const int x1{5};
    // p 指向地址中的值不能改变 即 x1 不能变
    // 但 p 能指向任意地址
    // p1 是指针变量 指向常量 所以类型为 const int
    const int* p1 = &x1;
    p1 = &x;
    cout << *p1 << endl;

    int x2{1};
    // p2 不能指向的地址不能改变
    // 但 x2 随意改变
    // p2 = &x1; 错误
    // p2 是一个指针常量
    int* const p2 = &x2;
    x2 = 10;
    cout << *p2 << endl;

    // 都不能改变
    const int x3{2};
    const int* const p3 = &x3;
    cout << *p3 << endl;

    int x4{-1};
    int const* p4 = &x4;
    *p4 = 16;
    x4 = -2;
    p4 = &x1;
    cout << *p4 << endl;

    // char* s = "Hello"; // 错误
    // “Hello” 是常量
    const char* s = "Hello";

    return 0;
}
