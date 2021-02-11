#include <iostream>

using std::cout;
using std::endl;

class Vec2D{
private:
    double x{1.0}, y{1.0};
public:
    Vec2D(double x_, double y_):x{x_}, y{y_}{

    }
    Vec2D& operator -(){
        // double x_{-this->x};
        // double y_{-this->y};
        this->x = -this->x;
        this->y = -this->y;
        return (*this);
    }
    void toString() const{
        cout << this->x << " " << this->y << endl;
    }
};

int main(){

    Vec2D v{2.3, 3.2};

    // 拷贝初始化，并非引用
    Vec2D a{-v};

    a.toString();
    v.toString();

    // 此时为引用，修改 a 就会修改 v
    a = -v;
    a.toString();
    v.toString();

    return 0;
}