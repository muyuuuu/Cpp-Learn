#include <iostream>

using std::cout;
using std::endl;

int v1{12};

int main(){
    int v1{2};
    cout << v1 << endl;
    cout << ::v1 << endl;
    return 0;
}