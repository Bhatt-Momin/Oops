#include<iostream>
using namespace std;
class Account{
    protected:
    float balance = 0;
};
class SavingAccount:public Account{
    public:
    void deposit(float x){
        balance += x;
    }
    void withdraw(float x){
        if(x<=balance){
            balance -= x;
        }
    }
    void show(){
        cout<<"balance = "<<balance;
    }
};
int main(){
    SavingAccount S;
    S.deposit(7800);
    S.withdraw(800);
    S.show();
}