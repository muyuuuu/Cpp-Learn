// 标准库头文件, 没有扩展名
#include <iostream>

// 并不推荐，std 所有内容都可以被使用
// 潜在的导致不同空间内 内容冲突
// using namespace std;

using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    // 运算符重载 << 流输出操作符
    // 推荐写法
    std::cout << "Hello World" << std::endl; // end line
    // 列出返回值，不写返回值，默认返回 int
    return 0;
}
