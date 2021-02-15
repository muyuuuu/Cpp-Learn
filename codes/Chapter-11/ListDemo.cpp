#include <iostream>
#include <list>

using namespace std;

int main(){

    int values[] = {1, 2, 3, 4};
    list<int> l(values, values + 4);

    // 不支持随机访问
    list<int>::iterator p;
    for (p = l.begin(); p != l.end(); p++){
        cout << *p << " ";
    } cout << endl;

    // list 插入后，迭代器所指内容不受影响，仍然指向上次所指的内容
    list<int>::iterator itr = l.begin();
    itr ++;
    l.insert(itr, 90);
    for (p = l.begin(); p != l.end(); p++){
        cout << *p << " ";
    } cout << endl;
    cout << *itr << endl;

    // push_front, pop_back, pop_front 一样

    // list 特有，升序反转
    l.sort();
    l.reverse();
    for (p = l.begin(); p != l.end(); p++){
        cout << *p << " ";
    } cout << endl;

    // list 特有，链表合并
    int values1[] = {6, 7, 8, 9};
    list<int> l1(values1, values1 + 4);

    l.sort();
    // merge 后 l1 被清空
    l.merge(l1);
    for (p = l.begin(); p != l.end(); p++){
        cout << *p << " ";
    } cout << endl;

    // 删除所有和 90 相等的元素
    l.remove(90);

    p = l.end();
    l1.push_back(32);
    // 列表插入到指定位置 同样 l1 被清空
    l.splice(p, l1);
    for (p = l.begin(); p != l.end(); p++){
        cout << *p << " ";
    } cout << endl;

    return 0;
}