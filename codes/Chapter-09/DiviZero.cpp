#include <iostream>

using std::cin;
using std::endl;
using std::cout;

int main(){

    int x{0}, y{0};
    cin >> x >> y;

    try{
        if (y == 0){
            throw y;
        }
        cout << x/y << endl;
    } catch (int& e){
        cout << "the second number is " << e << endl;
    }

    return 0;
}