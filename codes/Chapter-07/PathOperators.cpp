#include <iostream>
#include <filesystem>

using std::endl;
using std::cout;

int main(){
    namespace fs = std::filesystem;

    // 定义路径对象
    fs::path p{ R"(D:\Github\Cpp-Notes\codes)" };
    
    // append 和 /=
    p.append(R"(Chapter-07)");
    p /= R"(demo.txt)";
    
    cout << p << endl;

    //不自动添加分隔符 
    fs::path p2{ R"(D:\Github\Cpp-Notes\codes)" };
    p2.concat(R"(Chapter-07)");
    p2 += R"(demo.txt)";

    cout << p2 << endl;

    // 运算符 / 拼凑路径 第一个得是 path 对象
    fs::path p3{""};
    p3 = p3 / R"(D:\Github\Cpp-Notes\codes)" / R"(Chapter-07)" / R"(demo.txt)";
    
    cout << p3 << endl;
    return 0;
}