#include <array>
#include <fstream>
#include <iostream>
#include <filesystem>

using std::cin;
using std::endl;
using std::cout;
using std::array;
using std::string;
using std::ifstream;

namespace fs = std::filesystem;

int main(){
    cin.sync_with_stdio(false);

    fs::path p{"data.txt"};

    ifstream in{p};

    if (in.fail()){
        cout << "Can't open file : " << p << endl;
        std::abort();
    }

    in.close();
    in.open(p);

    // 读取数据的大小
    constexpr int SIZE{1024};

    array<char, SIZE> buf;

    while (!in.eof()){
        // &buf 会取出对象地址，不会取出对象缓冲区内存的地址
        in.getline(&buf[0], SIZE, '#');
        cout << &buf[0] << endl;
    }

    return 0;
}