#include <iostream>
#include <filesystem>

using std::endl;
using std::cout;

int main(){
    // 名字空间起别名
    namespace fs = std::filesystem;

    // 定义路径
    fs::path p{ R"(D:\Github\Cpp-Notes\codes\Chapter-07\demo.txt)" };

    // 先判断路径是否为空
    if (p.empty()){
        cout << p << " is empty" << endl;
    }

    // 在判断是否存在
    if (!fs::exists(p)){
        cout << p << " exists" << endl;
        // 不存在就退出
        std::exit(0);
    }

    // 根路径 相对路径
    cout << "root name is " << p.root_name() << endl
         << "root path is " << p.root_path() << endl
         << "relative path is " << p.relative_path() << endl
         << "paraent path is " << p.parent_path() << endl
         << "file name is " << p.filename() << endl
         << "stem is " << p.stem() << endl
         << "extension is " << p.extension() << endl;

    return 0;
}

// root name is "D:"
// root path is "D:\\"
// relative path is "Github\\Cpp-Notes\\codes\\Chapter-07\\demo.txt"
// paraent path is "D:\\Github\\Cpp-Notes\\codes\\Chapter-07"
// file name is "demo.txt"
// stem is "demo"
// extension is ".txt"