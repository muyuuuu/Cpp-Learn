#include <iostream>
#include <cmath>
#include <array>
#include <limits>
#include <exception>

using std::array;
using std::endl;
using std::cout;

bool AreSame(double a, double b){
    return std::fabs(a - b) < 
           std::numeric_limits<double>::epsilon();
}

class ZeroException : public std::runtime_error{
public:
    ZeroException() : runtime_error("Divide zero"){}
    ZeroException(const char* msg) : runtime_error(msg){}
};

class RangeException : public std::out_of_range{
private:
    int dimension{3};
    int index{0};
public:
    RangeException() : out_of_range("Out of Range"){}
    RangeException(int dimension, const int index) : out_of_range("Out of Range"){
        this->dimension = dimension;
        this->index = index;
    }
    const int getDimension(){
        return this->dimension;
    }
    const int getIndex(){
        return this->index;
    }
    virtual const char* what(){
        return "Index out of range";
    }
};

class Vec3D{
private:
    array<double, 3> v{1, 1, 1};
public:
    constexpr static int DIMENSION = 3;
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
    // 重载除法
    Vec3D& operator / (const double value){
        Vec3D tmp{*this};
        if (AreSame(value, 0.0)){
            throw ZeroException("Divisor is zero");
        }
        else{
            for (auto& i : tmp.v){
                i /= value;
            }
            return tmp;
        }
    }
};

int main(){

    Vec3D v{2, 3, 4};
    
    try{
        // 两个异常，遇到一个直接退出，不执行下一个
        cout << v[5] << endl; 
        v = v / 0.0;
    } catch (RangeException& e) {
        cout << e.getDimension() << endl;
        cout << e.what() << endl;
    } catch (ZeroException& e) {
        cout << e.what() << endl;
    }

    return 0;
}