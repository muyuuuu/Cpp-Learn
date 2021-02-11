#include <iostream>
#include <istream>
#include <ostream>

using std::cin;
using std::endl;
using std::cout;
using std::ostream;
using std::istream;

class Vec{
private:
    double x{1.0}, y{1.0};
public:
    Vec()=default;
    Vec(double x_, double y_) : x{x_}, y{y_}{

    }
    void toString(){
        cout << this->x << " " << this->y << endl;
    }
    friend ostream& operator << (ostream& os, const Vec& vec);
    friend istream& operator >> (istream& os, Vec& vec);
};

ostream& operator << (ostream& os, const Vec& vec){
    os << vec.x << " " << vec.y;
    return os;
}

istream& operator >> (istream& is, Vec& vec){
    is >> vec.x >> vec.y;
    return is;
}

int main(){

    Vec a, b;
    cin >> a;
    // 将信息输出到 cout 中
    cout << a;

    return 0;
}