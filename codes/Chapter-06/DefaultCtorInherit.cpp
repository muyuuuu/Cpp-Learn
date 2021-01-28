#include <iostream>

using std::endl;
using std::cout;

class A{
public:
    A(){
        cout << "A()" << endl;
    }
    A(int i){
        cout << "A(" << i << ")" << endl;
    }
};

class B : public A{
public:
    B(){
        cout << "B()" << endl;
    }
    B(int i){
        cout << "B(" << i << ")" << endl;
    }
};

int main(){
    
    B b0;
    B b1{2};

    return 0;
}