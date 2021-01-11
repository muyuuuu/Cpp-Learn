#include<iostream>

using std::cout;
using std::endl;

auto max(int x, int y){
    return x > y ? x : y;
}

int fun1(){
    return 12;
}

auto fun2(){
    return 'H';
}

int main(){
    int a{10};
    // 定义时初始化
    auto c = a + 5;
    // 显示类型的信息
    cout << c << " " << typeid(c).name() << endl;

    // 去除引用的语义
    int& b{ a };
    auto d{ b };
    // int 类型
    cout << d << " " << typeid(d).name() << endl;

    const int a1{13};
    auto b1{ a1 };
    cout << b1 << " " << typeid(b1).name() << endl;

    auto& c1 = b;
    c1 = -9;
    // typeid 会默认省去 引用 的类型
    cout << a << " " << typeid(c1).name() << endl;

    int arr[4]{1, 2, 3, 4};
    auto arr1{ arr };
    // 类型为指针 数组的名字是指针
    cout << typeid(arr1).name() << endl;
    for (int i = 0; i < 4; i++){
        cout << arr1[i] << " "; 
    }
    cout << endl;

    int arr2[]{1, 2, 3, 4};
    // 数组的引用
    auto& arr3{arr2};
    // 类型为数组
    cout << typeid(arr3).name() << endl;
    for (int i = 0; i < 4; i++){
        cout << *(arr3 + i) << " "; 
    }
    cout << endl;
    // 函数
    cout << max(c1, c) << endl;

    // 字符串 C++14 支持
    // auto s = "123456"s;

    decltype(max(1, 2)) x;
    decltype(fun1()) y = fun1();
    decltype(fun2()) z;

    cout << typeid(x).name() << endl;
    cout << y << " " << typeid(y).name() << endl;
    cout << typeid(z).name() << endl;
}