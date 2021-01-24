#include<iostream>

using std::cout;
using std::endl;

class Date{
private: 
    int year{2021};
    int month{1};
    int day{24};
public:
    friend class Kid;
    friend void set(Date& tmp);
    void getDate(){
        cout << year << "-" << month <<  "-" << day << endl;
    }
};

// void set(Date tmp){
//     tmp.month = 2;
//     tmp.getDate();
// }

void set(Date& tmp){
    tmp.month = 2;
    tmp.getDate();
}

int main(){
    Date d;
    // 传递值
    // 传引用
    set(d);
    d.getDate();
    // set(d);
    return 0;
}