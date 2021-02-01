#include <fstream>
#include <iostream>
#include <filesystem>

using std::endl;
using std::cout;

int main(){

    namespace fs = std::filesystem;
    using io = std::ios;

    fs::path p{"test.dat"};

    std::fstream file{p, io::in|io::out|io::trunc};

    long long int a{12}, b{23};
    const char str[]{"hello world"};

    file.write(reinterpret_cast<char*>(&a), sizeof(a));
    file.write(reinterpret_cast<char*>(&b), sizeof(b));
    file.write(str, sizeof(str));

    // 读取 hello
    char buf[100]{0};
    file.seekp(2 * sizeof(long long int), io::beg);

    file.read(buf, 5);
    cout << buf;

    return 0;
}