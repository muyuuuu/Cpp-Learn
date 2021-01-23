#include<iostream>

using std::endl;
using std::cout;

constexpr int max(int a, int b){
    return a > b ? a : b;
}

int main(){
    // 变量
    int m = 1;
    // 运行期常量
    const int m1 = m + 3;
    // 编译期常量
    const int m2 = 6;
    constexpr int m3 = 10;
    
    // 调用
    int a = max(m, m1);
    cout << a << endl;
    return 0;
}