#include <iostream>

using std::cout;
using std::endl;

// 创建对象
class Circle {
    // 不加声明属性，全部私有 外部不能访问
    public:
    int radius;
    Circle(){
        radius = 1;
    }
    Circle(double r){
        radius = r;
    }
    double getArea(){
        return (3.14 * radius * radius);
    }
};

int main(){
    // 调用无参的构造函数
    Circle c1;
    // 实例变量
    cout << c1.radius << endl;
    // 调用有参的构造函数
    // 带有窄化检查，避免隐式转换
    Circle c2{3.2};
    cout << c2.radius << endl;
    // 实例函数
    double a = c1.getArea();
    cout << a << endl;
    a = c2.getArea();
    cout << a << endl;
    return 0;
}
