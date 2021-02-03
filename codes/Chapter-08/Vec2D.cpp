#include <iostream>
#include <typeinfo>
#include <string>
#include <cmath>

using std::cout;
using std::endl;
using std::string;

class Vec2D{
private:
    double x{0}, y{0};
public:
    Vec2D()=default;
    // 直接初始化
    // 如果类成员是 const T 类型，就只能：要么在声明时给初始值；
    // 要么在构造函数初始化列表中给初始值。
    // 构造函数体里不能修改 const T 类型的成员。
    Vec2D(double xx, double yy) : x{xx}, y{yy} {}
    // 默认初始化以后赋值
    // Vec2D(double x, double y){
    //     this->x = x;
    //     this->y = y;
    // }
    string toString(){
        string s{""};
        s += "x = ";
        s += std::to_string(x);
        s += ", y = ";
        s += std::to_string(y);
        return s;
    }
    Vec2D add(Vec2D& vec2d){
        double x_ = this->x + vec2d.x;
        double y_ = this->y + vec2d.y;
        return Vec2D(x_, y_);
    }
    Vec2D add(double& v){
        double x_ = this->x + v;
        double y_ = this->y + v;
        return Vec2D(x_, y_);
    }
    Vec2D substract(Vec2D& vec2d) const {
        double x_ = this->x - vec2d.x;
        double y_ = this->y - vec2d.y;
        return Vec2D(x_, y_);
    }
    double dot(Vec2D& vec2d) const{
        return (this->x * vec2d.x + this->y * vec2d.y);
    }
    // 不返回匿名对象，对象就会就地操作
    Vec2D dot(double& v){
        double x_ = this->x * v;
        double y_ = this->y * v;
        return Vec2D(x_, y_);
    }
    Vec2D negative() const {
        return Vec2D(-this->x, -this->y);
    }
    double magnitude() const {
        return (sqrt(this->x * this->x + this->y * this->y));
    }
    int compare(Vec2D& vec2d) const {
        if (this->x > vec2d.x){
            return 1;
        }
        else if (this->x < vec2d.x){
            return -1;
        }
        if ((this->x == vec2d.x) && (this->y > vec2d.y)){
            return 1;
        }
        else if ((this->x == vec2d.x) && (this->y < vec2d.y)){
            return -1;
        }
        else{
            return 0;
        }
    }
    double at(const int i){
        return i == 0 ? this->x : this->y;
    }
};

void printVec2D(Vec2D& vec2d){
    cout << vec2d.toString() << endl;
}

int main(){

    // 创建向量对象
    Vec2D v1{1, 2}, v2{2, 3};
    
    // 向量转字符串
    cout << "v1 : ";
    printVec2D(v1);

    // 向量加向量
    Vec2D v4 = v1.add(v2);
    cout << "v4 : ";
    printVec2D(v4);

    // 向量加数字
    double value{0.6};
    Vec2D v5 = v2.add(value);
    cout << "v5 : ";
    printVec2D(v5);

    // 向量减法
    Vec2D v6 = v2.substract(v1);
    cout << "v6 : ";
    printVec2D(v6);

    // 向量点积
    double v7 = v1.dot(v2);
    cout << "v1 dot v2 = " << v7 << endl;

    // 向量数乘
    value = 2.2;
    Vec2D v8 = v1.dot(value);
    cout << "v1 * 2.2 : ";
    printVec2D(v8);

    // 向量负值
    Vec2D v9 = v1.negative();
    cout << "-v1 : ";
    printVec2D(v9);

    // 读取元素
    cout << "v1[1] = ";
    cout << v1.at(1) << endl;

    // 长度
    cout << "v2's length = ";
    cout << v2.magnitude() << endl;

    // 比较两个向量 大于1 等于0 小于-1
    cout << "v1 compare v2 = " << v1.compare(v2) << endl;

    return 0;
}