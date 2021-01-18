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
/*
void print(Circle c){
    cout << c.getArea() << endl;
}
*/

void print(Circle& c){
    cout << c.getArea() << endl;
}

void print(Circle* c){
    cout << c->getArea() << endl;
}

int main(){
    Circle ca[]{1.0, 2.0, 3.0};
    print(ca[0]);
    print(ca[1]);
    print(ca + 2);
}