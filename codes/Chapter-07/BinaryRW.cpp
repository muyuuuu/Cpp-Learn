#include <fstream>
#include <iostream>
#include <filesystem>
#include <array>

using std::endl;
using std::cout;
using std::array;

int main(){

    namespace fs = std::filesystem;
    using io = std::ios;

    fs::path p{"data.dat"};
    std::ofstream out{p, io::out|io::trunc};
    std::ifstream in{p, io::in|io::binary};

    array a{12, 23, 34, 45};
    std::streamsize size = a.size() * sizeof(a[0]);

    out.write(reinterpret_cast<char*>(&a[0]), size);
    out.close();

    auto x = a[0];
    while (!in.read(reinterpret_cast<char*>(&x), sizeof(x)).eof()){
        cout << x << endl;
    }
    
    // in.read(reinterpret_cast<char*>(&x), sizeof(x));
    // cout << x << endl;

    return 0;
}