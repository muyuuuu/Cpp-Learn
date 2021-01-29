#include <iostream>
// #include <string>

using std::endl;
using std::cout;
using std::string;

class A{
public:
    virtual string show(){
        return "A";
    }
};

class B : public A{
public:
    // 可写可不写 
    // 指明覆写，函数内容一致，避免语法错误
    virtual string show() override{
        return "B";
    }
};

class C : public A{
public:
    virtual string show(){
        return "C";
    }
};

// 引用传参
void print(A& p){
    cout << p.show() << endl;
}

int main(){

    A a; B b; C c;
    print(a);
    print(b);
    print(c);

    return 0;
}