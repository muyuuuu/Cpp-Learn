#include <iostream>
#include <array>

using std::endl;
using std::cout;
using std::array;

int main(){
    // int 类型 10 个元素
    array<int, 10> x, x1;
    // char 类型 5 个元素
    array<char, 5> a{'a', 'b', 'c', 'd', 'e'};

    // 自动推导 C++17 支持
    // array a1 {1, 2, 3, 4};
    // array a2 {'1', '2', '3', '4'};

    // 访问指定元素 做越界检查
    cout << a.at(2) << endl;
    // cout << a.at(10) << endl;

    // 访问第一个元素
    cout << a.front() << endl;

    // 访问最后一个元素
    cout << a.back() << endl;

    // 返回指向数组第一个元素的指针
    cout << *(a.data()) << endl;

    // 容量
    // 当前容量
    cout << x.size() << endl;

    // 返回容纳的最大元素数
    cout << x.max_size() << endl;

    // 以指定值填充容器
    x.fill(12);
    x1.fill(13);

    // 交换内容
    x.swap(x1);

    // 二维数组
    array<array<int , 3>, 4> a1; 

    return 0;
}