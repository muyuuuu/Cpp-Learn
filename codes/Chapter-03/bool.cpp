#include <iostream>

int main(){
    bool isAlpha = false;
    if (!isAlpha){
        std::cout << isAlpha << std::endl;
        // 以字符形式输出，而非数字
        // 断行要明显，在逗号或运算符后换行，新行要对齐
        std::cout << std::boolalpha << isAlpha << std::endl;
    }
    return 0;
}