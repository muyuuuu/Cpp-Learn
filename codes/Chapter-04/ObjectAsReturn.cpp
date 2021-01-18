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
    Circle& setRadius(double r);
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

Circle& Circle::setRadius(double r){
    radius = r;
    // 匿名对象 
    // return (Circle{radius});
    // c.setRadius(2.6) 后不再是 c
    // this 指针 当前对象
    return (*this);
}


int main(){
    Circle c{1.3};
    cout << c.setRadius(2.6).setRadius(3.2).getArea() << endl;
}