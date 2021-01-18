#include <iostream>

int main(){
    int* p = nullptr;
    int* q = nullptr;
    // 变量
    p = new int(10);
    // 数组
    q = new int[4];

    std::cout << sizeof(p) << " " << sizeof(q) << std::endl;

    std::cout << *p << std::endl;
    *p = 15;
    std::cout << *p << std::endl;

    for (int i = 0; i < 4; i++){
        *(q + i) = 1 + i;
        std::cout << *(q+i) << std::endl;
    }

    delete p;
    delete[] q;
}