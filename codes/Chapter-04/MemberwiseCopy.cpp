#include<iostream>

using std::cout;
using std::endl;

class Square
{
private:
    double side = 1;
public:
    // 强制编译器生成默认构造函数
    Square() = default;
    Square(double r){
        this->side = r;
    }
    double getArea(){
        return (side * side);
    }
};


int main(){
    Square s1, s2{2.5};
    cout << s1.getArea() << endl;
    cout << s2.getArea() << endl;

    s1 = s2;
    cout << s1.getArea() << endl;
}