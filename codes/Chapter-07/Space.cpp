#include <iostream>
#include <filesystem>

int main(){
    // 名字空间不会污染外部函数
    using std::endl;
    using std::cout;
    namespace fs = std::filesystem;

    fs::path p = {"C:\\"};

    // 获取磁盘总大小和剩余大小
    cout << "C total space is " << static_cast<double>(fs::space(p).capacity / 1024 / 1024 / 1024) << "GB" << endl
         << "C free space is " << static_cast<double>(fs::space(p).free / 1024 / 1024 / 1024) << "GB" << endl;

    return 0;
}