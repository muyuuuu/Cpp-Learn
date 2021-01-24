#include <iostream>

using std::endl;
using std::cout;

class Date{
private:
    int year{1998};
    int month{6};
    int day{1};
public:
    Date()=default;
    Date(int year, int month, int day){
        this->year = year;
        this->month = month;
        this->day = day;
    }
    void changeMonth(int month){
        this->month = month;
    }
    void getBirth(){
        cout << this->year << " " << this->month << " "
             << this->day;
    }
};

class People{
private:
    int age;
    Date* date;
public:
    // 默认构造函数
    People()=default;
    People(int age, Date* date){
        this->age = age;
        this->date = date;
    };
    // 浅拷贝
    // People(const People& s){
    //     this->age = s.age;
    //     this->date = s.date;
    // };
    // 深拷贝
    People(const People& s){
        this->age = s.age;
        this->date = new Date{*(s.date)};
    }
    void setter(int month){
        this->date->changeMonth(month);
    }
    void getInfo(){
        cout << this->age << " ";
        this->date->getBirth();
        cout << endl;
    }
};

int main(){
    Date* d;
    Date d1{1993, 13, 32};
    d = &d1;
    People p1{12, d};
    // 浅拷贝
    People p2{p1};
    p2.getInfo();
    p2.setter(14);
    p1.getInfo();
    p2.getInfo();
    return 0;
}