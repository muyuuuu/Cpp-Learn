#include <iostream>
#include <set>

using namespace std;

int main(){

    int values[] = {3, 5, 1, 7, 2, 2};
    multiset<int> s(values, values + 6);

    multiset<int>::iterator p;
    for (p = s.begin(); p != s.end(); p++){
        cout << *p << " ";
    } cout << endl;

    s.insert(12);
    s.insert(11);
    for (p = s.begin(); p != s.end(); p++){
        cout << *p << " ";
    } cout << endl;

    // 降序
    // nultiset<int, greater<int> >

    p = s.lower_bound(2);
    p = s.upper_bound(2);
    cout << *p << endl;

    p = s.find(13);
    if (p == s.end()){
        cout << "not found" << endl;
    } else {
        cout << "found" << endl;
    }

    cout << s.count(2) << endl;

    // 删除所有的 2
    s.erase(2);
    for (p = s.begin(); p != s.end(); p++){
        cout << *p << " ";
    } cout << endl;

    return 0;
}