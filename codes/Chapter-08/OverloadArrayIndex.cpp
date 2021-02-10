#include <iostream>

using std::endl;
using std::cout;

class Vec{
private:
    double x{1.0}, y{1.0};
public:
    Vec(double x_, double y_):x{x_}, y{y_}{

    }
    double& operator [] (const int index){
        if (index == 0)
            return this->x;
        else if (index == 1)
            return this->y;
        else
            cout << "index out of range" << endl;
    }
    void ShowVec() const {
        cout << '(' << this->x << ", " << this->y << ')' << endl;
    }
};

int main(){

    Vec v{1.2, 2.3};
    cout << v[1] << endl;

    // v[1] 应该是左值类型的表达式
    // 将函数变为左值
    // [] 即是下标运算符，也是运算符函数
    v[1] = 3.2;
    cout << v[1] << endl;

    return 0;
}