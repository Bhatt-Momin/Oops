#include<iostream>
using namespace std;
class Employee{
    protected:
    string name,id;
    float salary;

    public:
    void input(){
        cout<<"Enter name ,id,salary\n";
        cin>>name>>id>>salary;
    }
};
class Salary:public Employee{
    float  hra,da,pf,net;
    public:
    void slip(){
        input();
        hra = 0.20*salary;
        da = 0.10*salary;
        pf = 0.05*salary;
        net = salary+hra+da-pf;

        cout<<"Name: "<<name<<"\nID: "<<id;
        cout<<"\nnet salary: "<<net;
    }
};
int main(){
    Salary s;
    s.slip();
}