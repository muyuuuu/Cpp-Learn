#include <iostream>
#include <cassert>  // 断言头文件
#include <array>

using std::cout;
using std::endl;

// 常量表达式 仍然可以在运行期计算结果
constexpr int factorial(int n){
    if (n == 0){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

int main(){
    int x = 3;
    auto f = factorial(x);
    // 断言失败，程序退出
    // assert (f == 6);
    // 静态断言
    static_assert(factorial(3) == 6, "3! should equal to 6");
    // 编译时期就知道的整数
    std::array<int, factorial(3)> a;
    for (auto& i:a){
        i = 1;
    }
    for (auto i:a){
        cout << i << endl;
    }
    return 0;
}