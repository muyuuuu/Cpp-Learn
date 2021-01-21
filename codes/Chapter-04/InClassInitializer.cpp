#include <iostream>

using std::cout;
using std::endl;

class  X
{
private:
    int a = 1;
    int b = {2};
    int c{3};
    std::string s{"hello", "world"};
    int d[3]{1, 2, 3};
    // 不能用 auto 做类型推断
    // auto e[3]{1, 2, 3};
public:
    X()=default;
};

int main(){

    return 0;
}