#include <iostream>

using std::cout;
using std::endl;

class T{
private:
    double a, b;
public:
    // X 不显式初始化 t 时，调用这里 
    T() = default;
    T(double a, double b){
        this->a = a;
        this->b = b;
    }
    double getSum(){
        return (this->a + this->b);
    }
};

class X{
private:
    double x;
    T t;
public:
    // 不再生成默认的无参构造函数
    X(double a, double b, double x):t{a, b}{
        // t{a, b}; 错误写法
        this->x = x;
    }
    void setter(double x){
        this->x = x;
    }
    double getter(){
        return x;
    }
    double getterT(){
        return t.getSum();
    }
};

int main(){
    // 错误
    // X x1{};
    X x{1.2, 2.3, 3.4};
    x.setter(1.2);
    cout << x.getter() << endl;
    cout << x.getterT() << endl;
    return 0;
}