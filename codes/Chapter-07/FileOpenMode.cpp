#include <iostream>
#include <fstream>
#include <filesystem>

using std::cout;
using std::endl;

namespace fs = std::filesystem;

int main(){

    // 类起别名
    using fo = std::ios;

    fs::path p1{"city1.txt"}, p2{"city2.txt"};

    std::ofstream out1{p1, fo::out|fo::app};
    std::ofstream out2{p2, fo::out|fo::trunc};

    // 键盘读入
    char c;
    while (!std::cin.get(c).eof()){
        out1.put(c);
        out2.put(c);
    }
    
    // 关闭文件流
    out1.close();
    out2.close();

    // 打开并读入
    std::ifstream in1{p1, fo::in};
    std::ifstream in2{p2, fo::ate}; // 读不到内容，光标在最后

    // 输出两个文件内容
    cout << p1 << endl;
    while (!in1.get(c).eof()){
        cout << c;
    }
    
    cout << p2 << endl;
    while (!in2.get(c).eof()){
        cout << c;
    }

    in1.close();
    in2.close();
    
    return 0;
}