#include <iostream>

using std::endl;
using std::cout;
using std::string;

class Vec2D{
private:
    double x{1.0}, y{1.0};
public:
    Vec2D(double x_, double y_):x{x_}, y{y_}{
        cout << "Receive Parameters to Construct" << endl;
    }
    // 向量加法运算符重载
    Vec2D operator+ (const Vec2D& SecVec){
        double x_ = this->x + SecVec.x;
        double y_ = this->y + SecVec.y;
        return Vec2D{x_, y_};
    }
    Vec2D operator+ (const double& number){
        double x_ = this->x + number;
        double y_ = this->y + number;
        return Vec2D{x_, y_};
    }
    friend Vec2D operator+ (const double& number, const Vec2D& Vec);
    void ShowVec() const {
        cout << '(' << this->x << ", " << this->y << ')' << endl;
    }
};

Vec2D operator+ (const double& number, const Vec2D& Vec){
    double x_ = number + Vec.x;
    double y_ = number + Vec.y;
    return Vec2D{x_, y_};
}

int main(){

    Vec2D a{1.2, 2.3}, b{3.4, 4.5};
    double c = 3.6;

    a = a + b;
    a.ShowVec();

    a = a + c;
    a.ShowVec();

    c = -3.6;
    a = a + c;
    a.ShowVec();

    return 0;
}