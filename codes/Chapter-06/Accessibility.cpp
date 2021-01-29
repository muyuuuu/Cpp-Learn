#include <iostream>

using std::endl;
using std::cout;

class A{
private:
    int i = 1;
public:
    int j = 1;
protected:
    int k = 1;
};

class pub : public A{
public:
    void foo(){
        // 不可访问
        // i++; 
        j++;
        k++;
        cout << j << " " << k << endl;
    }
};

class pro : protected A{
public:
    void foo(){
        // 不能访问
        // i ++;
        j ++;
        k ++;
        cout << j << " " << k << endl;
    }
};

class pri : private A{
public:
    void foo(){
        // i++;
        j++;
        k++;
        cout << j << " " << k << endl;
    }
};

int main(){

    pub a;
    pro b;
    pri c;

    a.foo();
    b.foo();
    c.foo();

    a.j++;
    cout << a.j << endl;
    
    // 类外不能访问 protected 成员
    // a.k++;

    // 类外不能访问
    // b.j++;
    // cout << b.j << endl;

    // 私有不能访问
    // c.j++;

    return 0;
}