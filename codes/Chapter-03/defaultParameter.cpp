#include <iostream>

using std::cout;
using std::endl;

int max(int, int y = 12);

int main(){
    cout << max(1, 2) << endl;
}

int max(int x, int y){
    return x > y ? x : y;
}