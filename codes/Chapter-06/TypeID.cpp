#include <iostream>
#include <typeinfo>

using std::endl;
using std::cout;

class A{
private:
    int i = 0;
};

int main(){
    A a{};
    // 引用
    auto& t1 = typeid(a);
    if (typeid(A) == t1){
        cout << "yes" << endl;
        cout << t1.name() << endl;
    }
    return 0;
}