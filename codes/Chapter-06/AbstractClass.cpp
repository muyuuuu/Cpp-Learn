#include <iostream>

using std::endl;
using std::cout;

class Shape{
public:
    virtual double getArea() const = 0;
};

class Circle : protected Shape{
private:
    double radius = 1.0;
public:
    Circle()=default;
    Circle(double r){
        this->radius = r;
    }
    double getCircleArea() const{
        return this->getArea();
    }
protected:
    double getArea() const override{
        return this->radius * this->radius * 3.14; 
    }
};

int main(){

    // 错误 抽象类不能实例化
    // Shape s;

    Circle c{3.2};
    cout << c.getCircleArea() << endl;

    // Shape* p = &c;
    Circle* p = &c;
    cout << p->getCircleArea() << endl;

    return 0;
}