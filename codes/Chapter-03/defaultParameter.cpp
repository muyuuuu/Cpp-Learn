#include <iostream>

using std::cout;
using std::endl;

int max(int, int y = 12);

void f(int a, int b = 1, int c = 2){
    cout << "yes";
}

void f(int a, int b = 1){
    cout << "no";
}

int main(){
    cout << max(1, 2) << endl;
    // f(1, , 3); 错误 
    f(1, 1, 3);
}

int max(int x, int y){
    return x > y ? x : y;
}