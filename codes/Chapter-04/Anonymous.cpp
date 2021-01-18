#include <iostream>

using std::cout;
using std::endl;

class Account
{
public:
    // 不能使用 auto 
    double balance{0.0};
    Account() = default;
    Account(double now){
        balance = now;
    }
    void deposit(double amount){
        cout << "Before depositting, amount is " << balance << endl;
        cout << "You deposit " << amount << endl;
        balance += amount;
        cout << "After deppositting, amount is " << balance << endl;
    }
    double withdraw(double amount){
        auto temp = 0.0;
        if (balance < amount){
            temp = balance;
            balance = 0.0;
            return temp;
        }
        else{
            balance -= amount;
            return amount;
        }
    }
    double query(){
        return balance;
    }
};


int main(){
    Account a1{10};
    cout << a1.withdraw(7.6) << " " << a1.query() << endl;

    Account a2{10};
    a2.deposit(0.52);
    cout << a2.withdraw(11) << " " << a2.query() << endl;

    // 匿名对象，用一次就扔
    cout << Account(1236).withdraw(112.3) << endl;
}