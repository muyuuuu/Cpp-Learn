// 尖括号 系统提供
// 双引号 自己写的
#include "Circle.h"

Circle::Circle(){
    // 空
}

Circle::Circle(double r){
    radius = r;
}

double Circle::getArea(){
    return (3.14 * radius * radius);
}