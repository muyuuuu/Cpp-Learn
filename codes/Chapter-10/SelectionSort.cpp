#include <iostream>
#include <array>

using std::endl;
using std::cout;
using std::array;

// 选择排序
void selectsort(double x[], int size){
    int tmp{0};
    for (int i = 0; i < size; i++){
        double min{x[i]};
        int index{i};
        for (int j = i + 1; j < size; j++){
            if (x[j] < min){
                min = x[j];
                index = j;
            }
        }
        if (index != i){
            tmp = x[i];
            x[i] = min;
            x[index] = tmp;
        }
    }
}

// 函数模板的声明和实现放到一起
// 模板 传入整数
template <long long unsigned int N>
void selectsort(array<double, N>& x){
    constexpr int size{N};
    int tmp{0};
    for (int i = 0; i < size; i++){
        double min{x[i]};
        int index{i};
        for (int j = i + 1; j < size; j++){
            if (x[j] < min){
                min = x[j];
                index = j;
            }
        }
        if (index != i){
            tmp = x[i];
            x[i] = min;
            x[index] = tmp;
        }
    }
}
 
int main(){

    double x[]{3, 2, 8, 4, 9, 1, 5, 6};
    for (auto i : x){
        cout << i << " ";
    }
    cout << endl;

    selectsort(x, sizeof(x)/sizeof(x[0]));

    for (auto i : x){
        cout << i << " ";
    }
    cout << endl;

    // 类型一致
    const long long unsigned int size = 8;
    array<double, size> x1 {3.0, 2.0, 8.0, 4.0, 9.0, 1.0, 5.0, 6.0};
    for (auto i : x1){
        cout << i << " ";
    }
    cout << endl;

    selectsort(x1);

    for (auto i : x1){
        cout << i << " ";
    }

    return 0;
}