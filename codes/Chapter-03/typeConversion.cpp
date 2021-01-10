#include <iostream>

int main(){
    // 0.5
    std::cout << static_cast<double>(1) / 2 << std::endl;
    // 0
    std::cout << static_cast<double>(1 / 2) << std::endl;
    
    std::cout << 1.0f / 2.f << std::endl;
}