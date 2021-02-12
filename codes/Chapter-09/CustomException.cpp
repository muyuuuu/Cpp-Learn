#include <iostream>
#include <array>
#include <exception>
#include <string>

using std::endl;
using std::cout;
using std::array;
using std::string;

class RangeException : public std::exception{
private:
    int dimension{3};
    int index{0};
public:
    RangeException(int dimension, const int index){
        this->dimension = dimension;
        this->index = index;
    }
    const int getDimension(){
        return this->dimension;
    }
    const int getIndex(){
        return this->index;
    }
    // ref https://en.cppreference.com/w/cpp/error/exception/what
    virtual const char* what() const noexcept override {
        return "Index out of range";
    }
};

class Vec3D{
private:
    array<double, 3> v{1, 1, 1};
public:
    Vec3D()=default;
    Vec3D(double x_, double y_, double z_){
        v[0] = x_;
        v[1] = y_;
        v[2] = z_;
    };
    // 当作左值使用，否则纯右值
    double& operator [] (const int index) {
        if (index >= 0 && index <= 2){
            return v[index];
        }
        else{
            throw RangeException(3, index);
        }
    }
};

int main(){

    Vec3D a{2, 3, 4};
    try{
        cout << a[5];
    }
    // 捕获基类异常
    catch (std::exception& e) {
        cout << e.what() << endl;
        if (typeid(e) == typeid(RangeException)){
            auto r = dynamic_cast<RangeException&>(e);
            cout << r.getDimension() << endl;
            cout << r.what() << endl;
        }
    }

    return 0;
}