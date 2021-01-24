#include <iostream>

using std::endl;
using std::cout;

class Square {
private:
    double side;
    // 定义
    static int numberofObjects;
public:
    // 委托
    Square(): Square(2.0){};
    Square(double side){
        this->side = side;
        numberofObjects ++;
    }
    static int getNum(){
        return numberofObjects;
    }
    double getter(){
        return this->side;
    }
};

int Square::numberofObjects = 0;

int main(){
    Square s1[10];
    cout << s1[2].getNum() << endl;
    // 不能直接访问类内的私有成员
    // 可以用类直接调用静态函数
    cout << Square::getNum() << endl;
    // 错误
    // cout << Square::getter() << endl;

    Square s{2.3};
    cout << s.getter() << endl;
    return 0;
}