#include <iostream>
// 键盘输入，回车，进入缓冲区的是两个字符
// cin输入信息后，换行字符存留在缓冲区
// 使 return 前的 cin.get() 不起作用

using std::cin;
using std::cout;
using std::endl;

int main(){
    // 禁用C和C++标准流之间的同步，则C++流将具有其自己的独立缓冲区
    // 宇宙第一 IDE 不需要这个
    cin.sync_with_stdio(false);

    // cin对象缓冲区指针
    auto p = cin.rdbuf();
    
    // 读入字符到缓冲区
    // 打开控制台，输入信息保存在缓冲区
    // peek返回，存到 x 
    auto x = cin.peek();
    cout << "x = " << x << endl;
    
    auto num = p->in_avail();
    // 显示缓冲区字符数量
    cout << "There are " << p->in_avail() << " characters in buffer" 
         << endl;

    // 显示缓冲区的字符并显示
    for(int i = 0; i < num; i++){
        // p->in_avail() 会变化
        cout << i + 1 << " : " << cin.get() << endl;
    }
    
    std::cin.get();
    return 0;
}