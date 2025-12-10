#include<iostream>
using namespace std;
class Vehicle{
    public:
    virtual double maintenanceCost(int months) const =0;
    virtual ~Vehicle(){}
};
class Car:public Vehicle{
    double maintenanceCost(int m)const override{
        return 100+10.0*m;
    }
};
class Bike:public Vehicle{
    double maintenanceCost(int m)const override{
        return 50+5.0*m;
    }
};
int main(){
    Vehicle *ptr;

    Car c;
    Bike b;

    ptr=&c;
    cout<<ptr->maintenanceCost(67)<<"\n";

    ptr=&b;
    cout<<ptr->maintenanceCost(56)<<"\n";

    return 0;


}
