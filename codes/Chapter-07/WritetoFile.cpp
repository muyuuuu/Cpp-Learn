#include <fstream>
#include <iostream>
#include <filesystem>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
namespace fs = std::filesystem;

int main(){

    // 输出流和具体文件关联在一起
    fs::path p{R"(Scores.txt)"};
    // 流输出对象
    ofstream output{p};

    output << "lili " << 93.6 << endl;
    output << "lan " << 32 << endl;

    // 关闭文件输出流
    output.close();

    // 检测文件大小
    cout << "size of " << p << "is : " << fs::file_size(p) << endl;

    return 0;
}