#include <iostream>

using std::endl;
using std::cout;

class X{
public:
    int x{1};
    // 防止 烫烫烫烫烫
    char y[3] {'a', 'b', '\0'};
};

int main(){

    X x;

    auto [a1, a2] {x};
    cout << a1 << " " << a2 << endl;

    auto& [b1, b2] {x};
    b1 = 12;
    b2[0] = 'c';

    cout << x.x << " " << x.y << endl;

    return 0;
}