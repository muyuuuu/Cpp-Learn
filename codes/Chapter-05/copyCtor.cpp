#include <iostream>

using std::endl;
using std::cout;

class Square {
private:
    double side = 1.0;
    static int counter;
public:
    Square(){
        counter ++;
    };
    Square(double side){
        this->side = side;
        counter++;
    };
    Square(const Square& s){
        this->side = s.side;
        counter++;
    };
    ~Square(){
        counter--;
    };
    double getArea(){
        return (this->side * this->side);
    }
    static int getCounter(){
        return counter;
    }
};

int Square::counter = 0;

int main(){
    Square s1{10};
    cout << s1.getCounter() << endl;

    // 拷贝构造
    Square s2{s1};
    cout << s1.getCounter() << endl;
    
    // 堆上创建
    // 拷贝构造创建匿名对象，将对象放在堆区，匿名对象的地址存到 s3 指针中
    Square* s3 = new Square{s2};
    cout << s1.getCounter() << endl;
    cout << s3->getArea() << endl;

    delete s3;
    cout << s1.getCounter() << endl;

    return 0;
}