#include<iostream>

using std::cout;
using std::endl;

class X{
private:
    int a, b;
public:
    X():X(1){};
    X(int i): X(i, 12){};
    X(int a, int b){
        this->a = a;
        this->b = b;
    }
    int getSum(){
        return (a + b);
    }
};

int main(){
    X x;
    // 委托顺序
    // A() -> A(int) -> A(int, int)
    cout << x.getSum() << endl;
    return 0;
}