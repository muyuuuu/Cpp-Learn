#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main(){
    string s1{"Welcome"};

    // 全部追加
    cout << s1.append(" to here") << endl;

    // 从 3 开始，追加 2 个
    cout << s1.append(" to C and C++", 3, 2) << endl;

    // 从 0 开始，追加 5 个
    cout << s1.append(" to C and C++", 5) << endl;

    // 重复 4 次
    cout << s1.append(4, '!') << endl;

    // 赋值
    cout << s1.assign("string") << endl;

    // 从 1 开始，赋值 2 个
    cout << s1.assign("hello", 1, 2) << endl;

    // 从 0 开始，赋值 6 个
    cout << s1.assign("abcdefghijklmn", 6) << endl;

    // 赋值 4 次
    cout << s1.assign(4, 'a') << endl;

    // 按照索引取值
    s1.assign("abcdefghijklmnopqrst");
    // 从 0 开始的索引，取 3 号索引
    cout << s1.at(3) << endl;

    // 从 1 开始，删除 3 个
    cout << s1.erase(1, 3) << endl;

    if (!s1.empty()){
        s1.clear();
        cout << "--" << s1 << endl;
    }

    // 字符串比较
    string s2{"Welcoma"}, s3{"Welcomi"}, s4{"Welcoma"};

    // 负数 小于
    cout << s2.compare(s3) << endl;
    // 正数 大于
    cout << s3.compare(s2) << endl;
    // 0 等于
    cout << s2.compare(s4) << endl;

    // 获取子串

    // 从 0 开始，获取 1 个
    cout << s2.substr(0, 1) << endl;

    // 从 3 开始，直到结尾
    cout << s2.substr(3) << endl;

    // 搜索子串或字符
    s2 = {"Welcomama"};
    
    // 第一次出现的地方
    cout << s2.find("ma") << endl;
    
    // 从 6 开始搜索
    cout << s2.find("ma", 6) << endl;

    // 搜索不到 无穷大
    cout << s2.find('w') << endl;

    // 插入
    // 第 2 个字符前面插入
    s2.insert(2, "--");
    cout << s2 << endl;

    // 第 1 个前面插入 4 个相同字符 不能是子串
    s2.insert(1, 4, '+');
    cout << s2 << endl;

    // 替换 1 号开始，向后的 4 个字符替换掉
    s2.replace(1, 4, "A");
    cout << s2 << endl;

    // 字符串运算符

    // 加法 进行连接
    cout << s3 + s4 << endl;

    // 比较
    cout << (s3 < s4) << endl;

    return 0;
}