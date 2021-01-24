#include <iostream>

using std::endl;
using std::cout;

class X{
private:
    double x;
public:
    X(){
        x = 12.0;
    };
    double* getter(){
        return &x;
    }
};

int main(){
    X x;
    auto p = x.getter();
    // 指针强行修改
    *p = 14;
    cout << *(x.getter()) << endl;
    return 0;
}