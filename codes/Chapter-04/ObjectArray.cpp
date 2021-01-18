#include <iostream>

using std::cout;
using std::endl;

class Circle
{
private:
    double radius = 1.3;
public:
    Circle();
    Circle(double r);
    double getArea();
    double getRadius() const;
    void setRadius(double r);
};

Circle::Circle(){
}

Circle::Circle(double r){
    radius = r;
}

double Circle::getArea(){
    return (3.14 * radius * radius);
}

// 常函数 不改变对象的状态
double Circle::getRadius() const{
    return radius;
}

void Circle::setRadius(double r){
    radius = r;
}

int main(){
    // 声明原生数组类型不能做自动类型推断
    // auto c1[]{Circle{10.}};

    Circle c[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    c[2].setRadius(0.0);
    for (int i = 0; i < static_cast<int>(sizeof(c) / sizeof(c[0])); i++){
        cout << c[i].getArea() << "  ";
    }

    return 0;
}