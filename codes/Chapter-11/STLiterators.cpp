#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){

    vector<int> v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);

    // 类型参数
    vector<int>::iterator p1;
    for (p1 = v.begin(); p1 != v.end(); p1++){
        cout << *p1 << " ";
    }
    cout << endl;

    cout << *(--p1) << endl;
    // 左移一个
    cout << p1[-1] << endl;
    // --p1 后指向最后一个元素
    *p1 = 1234;
    for (p1 = v.begin(); p1 != v.end(); p1++){
        cout << *p1 << " ";
    }
    cout << endl;

    set<int> s;
    // 存储的内容称为 key
    // 集合会对元素按照某种规则进行排序
    s.insert(2);
    s.insert(1);
    s.insert(3);

    for(set<int>::iterator p1 = s.begin(); p1 != s.end(); p1++){
        cout << *p1 << " ";
    }

    return 0;
}