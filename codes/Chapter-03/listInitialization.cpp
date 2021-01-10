#include <iostream>

using std::cout;
using std::endl;

int main(){
    // 直接列表初始化
    int x{};
    int y{1};
    int arr[]{1, 2, 3, 4};
    char s[3]{'O', 'K', '\0'};
    char s1[]{"hello"};

    cout << x << endl;
    cout << y << endl;
    for(int i = 0; i < 4; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << s << endl;
    cout << s1 << endl;

    // 间接列表初始化
    // 多一个赋值
    int z = {2};
    int arr1[] = {1, 2, 3, 4};
    char s2[3] = {'O', 'K'};
    char s3[] = {"world"};

    std::cout << z << std::endl;
    std::cout << s2 << std::endl;

    // 在特殊情况下有区别
    return 0;
}
