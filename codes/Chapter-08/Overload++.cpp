#include <iostream>

using std::endl;
using std::cout;

class Vec{
private:
    double x{1.0}, y{1.0};
public:
    Vec(double x_, double y_) : x{x_}, y{y_}{

    }
    Vec& operator ++(){
        this->x += 1;
        this->y += 1;
        return *this;
    }
    Vec operator ++(int dummy){
        Vec tmp{this->x, this->y};
        this->x += 1;
        this->y += 1;
        return tmp;
    }
    void toString(){
        cout << this->x << " " << this->y << endl;
    }
};


int main(){

    Vec v{1.0, 1.0};
    Vec b = ++v;

    v.toString();
    // v 的引用作用给自己，修改 b 不会影响 v
    ++b;
    v.toString();

    // 返回一个临时对象
    // 所以不是左值，取不到地址
    (v++).toString();
    v.toString();

    return 0;
}