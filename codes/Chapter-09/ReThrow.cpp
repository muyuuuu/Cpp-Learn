#include <iostream>

using std::endl;
using std::cout;

void f();

int main(){

    try{
        f();
    } catch (const std::exception& e){
        cout << "catched exception : " << e.what() << endl;
    }
    return 0;
}

void f(){
    try{
        throw std::logic_error("Throw in f()");
    } catch (const std::exception& e) {
        cout << "catched in f()" << endl;
        cout << "Exception : " << e.what() << endl;
        // 再次抛出
        throw;
    }
}