#include <iostream>

using std::cout;
using std::endl;

// 只能处理一个类型
int max(int a, int b){
    return a > b ? a : b;
}

double max(double a, double b){
    return a > b ? a : b;
}

int main(){
    cout << max(1, 2) << endl;
    cout << max(1.2, 3.4) << endl;
}