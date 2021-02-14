#include <iostream>

using std::endl;
using std::cout;

template <typename T, typename S>
// 隐式转换
auto add(T x, S y){
    return (x + y);
}

int main(){

    cout << add(2.2, 3) << endl;
    cout << add(2, 3.3) << endl;

    return 0;
}