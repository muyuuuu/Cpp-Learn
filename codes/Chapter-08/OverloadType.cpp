#include <iostream>
#include <cmath>

using std::endl;
using std::cout;

class Vec{
private:
    double x{1.0}, y{1.0};
public:
    Vec(double x_, double y_) : x{x_}, y{y_}{

    }
    operator double(){
        double t = sqrt(x*x + y*y);
        return t;
    }
};

int main(){

    Vec v{3, 4};
    cout << static_cast<double>(v) << endl;

    return 0;
}