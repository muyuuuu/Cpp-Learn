#include <iostream>

using std::cout;
using std::endl;

class Vec{
private:
    double x{1.0}, y{1.0};
public:
    Vec(double x_, double y_):x{x_}, y{y_}{

    }
    Vec operator += (const Vec& SecVec){
        this->x += SecVec.x;
        this->y += SecVec.y;
        // 涉及对象拷贝 建议用引用
        return Vec{this->x, this->y};
    }
    void ShowVec() const {
        cout << '(' << this->x << ", " << this->y << ')' << endl;
    }
};

int main(){

    Vec a{1.2, 1.1}, b{1.3, 1.2};

    a += b;

    a.ShowVec();

    return 0;
}