#include <iostream>

using std::endl;
using std::cout;

class X{
public:
    int a{12};
    int* p = &a;
    // 只拷贝指针所指的内容
    // 返回可以是引用也可以不是
    // X operator = (const X& tmp){
    X& operator = (const X& tmp){
        this->a = tmp.a;
        *this->p = *(tmp.p);
        return *this;
    }
};

int main(){

    X a, b;
    a = b;

    int tmp{32};

    *(a.p) = tmp;

    std::cout << *(a.p) << " " << *(b.p) << std::endl;

    return 0;
}