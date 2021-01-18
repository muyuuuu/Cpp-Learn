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
};

Circle::Circle(){
}

Circle::Circle(double r){
    radius = r;
}

double Circle::getArea(){
    return (3.14 * radius * radius);
}

int main(){
    // 对象指针 对象在堆区
    auto* c1 = new Circle();
    // 添加小括号，星优先级低
    cout << c1->getArea() << " " << (*c1).getArea() << endl;
    
    // 这里不能 auto
    Circle c2{3.8};
    auto* c3 = &c2;
    cout << c3->getArea() << endl;

    // 创建对象数组
    auto c4 = new Circle[3]{1.2, 2.3, 3.4};
    for (int i = 0; i < 3; i++){
        cout << c4[i].getArea() << endl;
    }

    // 基于范围的 for 循环
    // 一种集合或容器，指针是不行的
    // for (auto x : c4){
    //     cout << x.getArea() << endl;
    // }

    // 只删除自己手动创建的
    delete c1;
    delete[] c4;
    c1 = c4 = nullptr;
}