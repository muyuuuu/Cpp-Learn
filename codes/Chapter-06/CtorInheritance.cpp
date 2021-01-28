#include <iostream>

using std::endl;
using std::cout;

class A{
private:
    int i;
    double d;
public:
    A(){
        cout << "here" << endl;
    };
    A(int i){
        this->i = i;
        cout << this->i << endl;
    };
    A(int i, double d){
        this->d = d;
        this->i = i;
        cout << this->d << endl;
    };
};

class B: public A{
private:
    int d;
public:
    // 不写的话，会调用默认的基类构造函数
    // B():A(){}
    using A::A;
    // 错误，不能在继承的构造函数中做出任何修改
    // B(int i){
    //     this->a = i;
    // };
    // A(int i) 没有被继承
    // 初始化基类（先）和本类的成员（后）
    B(int i) : A{3}, d{i}{
        cout << d << endl;
    };
    // B(int i, double d) : A(int i, double d){}
};

int main(){

    // 无参默认构造函数，需要显示声明
    B b0;
    B b{2};
    B b1{1, 1.2};

    return 0;
}