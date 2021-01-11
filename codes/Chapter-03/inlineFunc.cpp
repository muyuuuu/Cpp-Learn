#include <iostream>

using std::cout;
using std::endl;

inline int max(int a, int b){
    return a > b ? a : b;
}

int main(){
    cout << max(15, 2) << endl;
}