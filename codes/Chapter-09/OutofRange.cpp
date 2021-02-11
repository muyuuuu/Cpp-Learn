#include <iostream>
#include <vector>

using std::endl;
using std::cout;
using std::vector;

int main(){

    vector v{'a', 'b', 'c', 'd', 'e'};
    // 没有抛出异常
    // [] 不会检查，at 会检查
    // for (int i = 0; i < 60; i++){
    //     cout << v.at(i) << " ";
    // }

    try {
        for (int i = 0; i < 60; i++){
           cout << v.at(i) << " ";
        }

    } catch(std::out_of_range& e) {
        cout << e.what() << endl;
    }

    return 0;
}