#include <iostream>
#include <vector>

using namespace std;

int main(){

    double values[] {1, 2, 3, 4, 5, 6, 7};
    // values 是数组首地址的指针，这里用作迭代器
    vector<double> v(values, values + 7);

    // 支持随机访问
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    } cout << endl;

    // assign 用法
    v.assign(3, 11.8);
    for (auto i : v){
        cout << i << " ";
    } cout << endl;

    v.at(0) = 22.4;
    for (auto i : v){
        cout << i << " ";
    } cout << endl;

    vector<double>::iterator itr = v.begin();
    // 1 号元素之前
    v.insert(itr + 1, 321);
    for (auto i : v){
        cout << i << " ";
    } cout << endl;

    // insert 之后，itr可能指歪了，所以重新复制
    itr = v.begin();

    // 左闭又开
    v.erase(itr, itr + 2);
    for (auto i : v){
        cout << i << " ";
    } cout << endl;

    v.clear();
    if (v.empty()){
        cout << "True";
    }

    return 0;
}