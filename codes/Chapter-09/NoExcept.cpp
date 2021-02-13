#include <iostream>

using std::endl;
using std::cout;

void foo() noexcept(true) {}
void boo() noexcept(false) {}

int main(){

    cout << std::boolalpha << noexcept(foo()) << endl;
    cout << std::boolalpha << noexcept(boo()) << endl;

    return 0;
}