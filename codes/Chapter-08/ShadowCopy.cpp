#include <iostream>

class X {
public:
    int x{ 2 };
    int* p = &x;
    X() = default;
};

int main() {

    X x, y;
    x = y;

    int a{ 32 };

    *(x.p) = a;

    std::cout << *(x.p) << " " << *(y.p) << std::endl;

    return 0;
}