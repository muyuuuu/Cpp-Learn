#include <iostream>

using std::cout;
using std::endl;

int main(){
    int a[]{1, 2, 3, 4, 5};
    // 访问集合中的变量
    // 不关心循环变量
    // 取出元素，操作，保证所有元素被遍历
    // 必须引用，不然无法修改数值
    for (auto& i:a){
        i *= 2;
    }
    for (auto i:a){
        cout << i << " ";
    }
    return 0;
}