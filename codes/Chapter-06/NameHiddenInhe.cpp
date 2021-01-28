#include <iostream>

using std::endl;
using std::cout;

class A{
public:
    void f(){
        cout << "Here" << endl;
    }
};

class B : A{
public:
    void f(int i){
        cout << i << endl;
    }
    // using 声明语句，将基类成员引入到派生类的定义中，重载
    using A::f;
};

int main(){
    B b;
    b.f();
    b.f(2);
    return 0;
}