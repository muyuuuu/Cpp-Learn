// 内存分配失败

#include <iostream>
#include <new> // 头文件

using std::endl;
using std::cout;

int main(){

    try{
        for(int i = 0; i < 10000; i++){
            auto* p = new long long int[7000000];
        }
    } catch (std::bad_alloc& e){
        cout << "exception : " << e.what() << endl;
    }

    return 0;
}