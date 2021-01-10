#include <iostream>

void swap_refer(int& tmp1, int& tmp2){
    int tmp3 = 0;
    tmp3 = tmp1;
    tmp1 = tmp2;
    tmp2 = tmp3;
}

void swap(int c, int d){
    int a = 0;
    a = c;
    c = d;
    d = a;
}

int main(){
    int x = 2, y = 3;
    // & 靠近类型，编程规范
    // float* a;
    int& rx = x;
    rx = 10;
    std::cout << x << std::endl;
    rx = y;
    rx = 16;
    // 不能作为另一个变量的引用
    std::cout << y << std::endl;
    int a = 1, b = 2;
    swap(a, b);  // 1 2
    std::cout << a << " " << b << std::endl;
    swap_refer(a, b); // 2 1
    std::cout << a << " " << b << std::endl;
    return 0;
}