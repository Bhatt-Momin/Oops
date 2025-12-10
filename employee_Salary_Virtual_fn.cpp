#include<iostream>
using namespace std;
class Employee{
    public:
    virtual double calculateSalary() const =0;
    virtual ~Employee(){}
};
class Fulltime:public Employee{
    double salary;
    public:
    Fulltime(double s):salary(s){}
    double calculateSalary() const override{
        return salary;
    }
};
class PartTime:public Employee{
    double rate,hours;
    public:
    PartTime(double r,double h):rate(r),hours(h){}
    double calculateSalary ()const override {
        return rate*hours;

    }
};
int main(){
    Fulltime f(12311);
    PartTime P(300,7);
    cout<<f.calculateSalary()<<"\n"<<P.calculateSalary()<<endl;
    return 0;
}