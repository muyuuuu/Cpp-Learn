#include <iostream>
#include <array>

using std::endl;
using std::cout;
using std::array;
using std::string;
using namespace std::string_literals;

enum class Color{
    white, black, red, green, blue, yellow,
};

class Shape{
private:
    Color color{Color::black};
    bool filled{false};
public:
    Shape()=default;
    Shape(Color c, bool b){
        this->color = c;
        this->filled = b;
    };
    void setFilled(bool b){
        this->filled = b;
    }
    string toString(){
        array<string , 6> c{"white"s, "black"s, "red"s, "green"s, "blue"s, "yellow"s};
        return "Color is " + c[static_cast<int>(this->color)] + (this->filled ? " Filled"s : " Not Filled"s);
    }
};

class Circle : public Shape{
private:
    double radius = 1.0;
public:
    Circle() = default;
    Circle(double r){
        this->radius = r;
    }
    // 方法不会修改类中的私有属性 
    double getArea() const{
        return radius * radius * 3.14;
    }
};

class Rectangle : public Shape{
private:
    double height = 1.0, width = 1.0;
public:
    Rectangle()=default;
    Rectangle(double height, double width, Color c, bool b) : Shape{c, b}{
        this->height = height;
        this->width = width;
    }
    double getArea() const{
        return width * height;
    }
};

int main(){
    Shape s{Color::black, true};
    cout << s.toString() << endl;

    Circle c{2.0};
    cout << c.getArea() << endl;
    cout << c.toString() << endl;

    c.setFilled(true);
    cout << c.toString() << endl;

    Rectangle r{2.3, 4.6, Color::blue, true};
    cout << r.getArea() << " " << r.toString() << endl;
    return 0;
}