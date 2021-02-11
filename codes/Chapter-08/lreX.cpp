#include <iostream>

int& temp(){
    int x = 10;
    int*p = &x;
    return *p;
}

int main(){

    // 左值引用不能饮用纯右值
    // int& a = temp();

    int& a = temp();

    return 0;
}