#include <iostream>

using std::endl;
using std::cout;

class Exception1 {};
class Exception2 {};
class Exception3 {};

void f1();
void f2();
void f3();

int main(){
    try{
        f1();
        cout << "main was called" << endl;
    } catch (std::exception& e){
        cout << "catch f1()" << endl;
    }

    return 0;
}

void f1(){
    try{
        f2();
        cout << "f1 was called" << endl;
    } catch (Exception1& e1) {
        cout << "catch exception2" << endl;
    }
}

void f2(){
    try{
        f3();
        cout << "f2 was called" << endl;
    } catch (Exception2& e1) {
        cout << "catch exception3" << endl;
    }
}

void f3(){
    // 直接抛到操作系统
    // throw Exception3();

    // throw Exception2();

    throw Exception1();
}