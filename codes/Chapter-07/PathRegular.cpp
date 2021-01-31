#include <iostream>
#include <filesystem>

using std::endl;
using std::cout;
using namespace std::string_literals;

int main() {
    namespace fs = std::filesystem;
    // 路径对象与值
    fs::path p1{ "demo.txt" };
    // 绝对路径
    //fs::path p{ R"(D:\Github\Cpp-Notes\codes\Chapter-07\demo.txt)" };
    fs::path p{ R"(D:\Github\Cpp-Notes\codes\Chapter-07)" };

    // 输出文件分隔符
    cout << "Separator is " << fs::path::preferred_separator << endl;

    // 是否是常规文件 输出文件大小
    if (fs::is_regular_file(p)) {
        cout << "File size is " << fs::file_size(p) << endl;
    }
    // 目录
    else if (fs::is_directory(p)) {
        // 输出子目录
        cout << "P is a directionary, includes: " << endl;
        for (auto i : fs::directory_iterator(p)) {
            cout << "sub directionary " << i.path() << endl;
        }
    }
    // 判断路径是否存在
    else if (fs::exists(p)) {
        cout << p << "is a special file" << endl;
    }
    else {
        cout << p << "doesn't exist" << endl;
    }

    return 0;
}