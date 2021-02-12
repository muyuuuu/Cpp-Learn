// 侧向转换异常

#include <iostream>

using std::endl;
using std::cout;

class Student{
public:
    Student()=default;
    // 多态
    virtual void foo(){};
};
class UnderGraduate : public Student{};
class Graduate : public Student{};

int main(){

    UnderGraduate u;
    Graduate g;

    // 转化为基类类型的指针
    Student* s1 =  &u;
    Student* s2 =  &g;

    Graduate* p = dynamic_cast<Graduate*>(s2);

    // 转化为长整型，p非空，有效
    // long x = reinterpret_cast<long>(p);

    // u 对象转化为 g 对象
    // Graduate* p2 = dynamic_cast<Graduate*>(s1);
    // 转化失败为 ptr

    // dynamic_cast做引用类型转化的时候失败才会抛出异常
    try{
        Graduate& r1 = dynamic_cast<Graduate&>(u);
    } catch (std::bad_cast& e) {
        cout << "Exception : " << e.what() << endl;
    }

    return 0;
}