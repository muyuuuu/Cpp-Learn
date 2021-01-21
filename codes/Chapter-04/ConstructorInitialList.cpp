#include <iostream>

using std::cout;
using std::endl;

class T{
private:
    double a, b;
public:
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
    X(double a, double b, double x):t{a, b}{
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
    X x{1.2, 2.3, 3.4};
    x.setter(1.2);
    cout << x.getter() << endl;
    cout << x.getterT() << endl;
    return 0;
}