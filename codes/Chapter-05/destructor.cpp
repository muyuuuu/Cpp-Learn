#include <iostream>

using std::endl;
using std::cout;

class X
{
private:
    static int counter;
public:
    X(){
        counter ++;
    };
    ~X(){
        cout << "Now destruct" << endl;
        counter --;
    };
    static int getter(){
        return counter;
    }
};

int X::counter = 0;

int main(){
    // 限制变量作用域，观察析构执行
    {
        X x1, x2, x3;
        cout << X::getter() << endl;
    }
    cout << X::getter() << endl;
    return 0;
}