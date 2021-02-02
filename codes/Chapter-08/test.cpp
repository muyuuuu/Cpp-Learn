#include <iostream>

int add(int& tmp1, int tmp2){
    return tmp1 + tmp2;
}

int main(){
    int a{1}, b{2};
    a = add(a, 6);
    std::cout << a << std::endl;
}

// class Vec{
// private:
//     double x{0}, y{0};
// public:
//     Vec(double x, double y){
//         this->x = x;
//         this->y = y;
//     };
//     void add(double& v){
//         this->x += v;
//         this->y += v;
//     }
// };

// int main(){

//     Vec v1{1, 2};
//     v1.add(3.2);

//     double va{3.2};
//     v1.add(va);

//     return 0;
// }