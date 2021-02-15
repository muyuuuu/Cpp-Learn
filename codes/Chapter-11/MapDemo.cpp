#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){

    // key:int, value:string
    map<int, string> m;
    // 域分隔符 value_type 函数
    m.insert(map<int, string>::value_type(100, "zhangsan"));
    m.insert(map<int, string>::value_type(97, "lisi"));
    m.insert(map<int, string>::value_type(98, "lilei"));
    m.insert(map<int, string>::value_type(99, "hanmeimei"));

    map<int, string>::iterator itr;
    // 按 key 升序
    for (itr = m.begin(); itr != m.end(); itr++){
        cout << itr->first << " : " << itr->second << endl;
    }

    cout << m[100] << endl;

    // find, erase 和集合一样

    

    return 0;
}