#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle
{
private:
    double radius{ 1.0 };
public:
    // 声明
    Circle();
    Circle(double r);
    double getArea();
};

#endif