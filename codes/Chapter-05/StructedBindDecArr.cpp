#include <iostream>
#include <array>

using std::endl;
using std::cout;
using std::array;

int main(){

    // 原声数组
    int arr[]{2, 3, 4};

    auto [a1, a2, a3] = arr;

    const auto [b1, b2, b3] (arr);

    // 左值引用
    auto& [c1, c2, c3] {arr};

    c3 = 12;
    cout << arr[2] << endl;

    // std::array
    array<char, 3> arr1 {'a', 'b', 'c'};
    auto [d1, d2, d3] {arr1};
    

    return 0;
}