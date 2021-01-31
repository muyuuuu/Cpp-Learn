#include <fstream>
#include <iostream>
#include <filesystem>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
namespace fs = std::filesystem;

int main(){
    fs::path p{R"(Scores.txt)"};

    ifstream input{p};

    string name{""};
    double score = 0.0;

    // 判断是否打开
    if (input.fail()){
        cout << "open file failed" << endl;
    }

    // 原始文件最后不要有换行
    // while(!input.eof()){
    //     input >> name >> score;
    //     cout << "name is " << name << ", score is " << score << endl;
    // }

    // 不知道文件内容，一直读
    char x;
    while (!input.get(x).eof()){
        cout << x;
    }
    
    return 0;
}