#include "Circle.h"
#include <iostream>
// #include "Circle.cpp"
// 类的实现不能重复添加

using std::cout;
using std::endl;

int main(){
    Circle c1;
    cout << c1.getArea() << endl;

    Circle c2{ 3.2 };
    cout << c2.getArea() << endl;
}
