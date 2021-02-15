#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <stack>
#include <queue>

using namespace std;

int main(){

    vector<int> v1;
    v1.push_back(1);
    v1.push_back(30);
    cout << v1.size() << endl;
    cout << v1.max_size() << endl;

    list<int> l1;
    l1.push_back(1);
    l1.push_front(0);
    cout << l1.size() << endl;

    return 0;
}