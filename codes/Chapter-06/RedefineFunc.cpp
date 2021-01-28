#include <iostream>

using std::cout;
using std::endl;

class Shape{
public:
    void Show(){
        cout << "Now is Shape" << endl;
    }
};

class Circle : Shape{
private:
    double radius = 1.0;
public:
    Circle(double r){
        this->radius = r;
    }
    void Show(){
        cout << "Now is Cricle " << radius << endl;
    }
};

int main(){

    Shape s;
    s.Show();

    Circle c{2.2};
    c.Show();

    return 0;
}