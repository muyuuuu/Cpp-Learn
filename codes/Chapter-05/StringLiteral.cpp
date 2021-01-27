#include <iostream>

using std::endl;
using std::cout;
using namespace std::string_literals; // ""s 运算符

int main(){
    
    const char* s1 = R"(hello\n world)";

    const char* s2 = R"Nouse(hello\a world)Nouse";

    cout << s1 << endl;
    cout << s2 << endl;

    // std::string 类型
    auto s3 = "hell0o"s;  // 等价
    // auto s3 = std::string{"hello"};

    // const char* 类型
    // \0 字符串内表示结束符号，不输出后面的
    auto s4 = "hell\0o";

    cout << s3 << endl;
    cout << s4 << endl;


    return 0;
}