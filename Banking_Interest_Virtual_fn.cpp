#include<iostream>
using namespace std;
class BankAccount{
    public:
    virtual double interest(double principal,int years) const =0;
    virtual ~BankAccount(){}
};
class Savings:public BankAccount{
    public:
    double interest(double p,int y)const override{
        return p*y*0.04;
    }
};
class FixedDeposit:public BankAccount{
    public:
    double interest(double p,int y)const override{
        return p*(pow(1.06,y)-1);
    }
};
int main(){
    Savings s;
    FixedDeposit f;
    cout<<s.interest(1000,3)<<"\n"<<f.interest(10000,2)<<"\n";
    return 0;
}