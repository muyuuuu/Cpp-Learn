#include <iostream>

using std::endl;
using std::cout;

class Shape{
public:
    virtual double getArea() const = 0;
    virtual void show() const = 0;
};

class Circle : public Shape{
private:
    double radius = 1.0;
public:
    Circle()=default;
    Circle(double r){
        this->radius = r;
    }
    double getArea() const override{
        return this->radius * this->radius * 3.14; 
    }
    void show() const override{
        cout << "Circle" << endl;
    }
};

class Rectangle : public Shape{
private:
    double side = 1.0;
public:
    Rectangle()=default;
    Rectangle(double s){
        this->side = s;
    }
    double getArea() const override{
        return this->side * this->side; 
    }
    void show() const override{
        cout << "Rectangle" << endl;
    }
};

void print(Shape& p){
    p.show();
}

int main(){

    // 错误 抽象类不能实例化
    // Shape s;

    Circle c{3.2};
    cout << c.getArea() << endl;

    // Shape* p = &c;
    Circle* p = &c;
    cout << p->getArea() << endl;

    Rectangle r{2.0};
    cout << r.getArea() << endl;

    print(c);
    print(r);

    return 0;
}