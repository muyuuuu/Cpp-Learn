#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;

int main(){
    double b = 13;
    cout << b << endl;

    cout << std::setw(4) << std::setfill('$') << "aaa" << endl;

    double a = 1.2345678;

    cout << std::setprecision(2) << a << endl;
    // 小数点后四位，会影响后面的精度
    cout << std::setprecision(4) << std::fixed << a << endl;

    cout << std::showpoint << b << endl;

    cout << std::setw(10) << std::left << b << endl;
    cout << std::setw(10) << std::right << b << endl;

    return 0;
}