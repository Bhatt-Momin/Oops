#include<iostream>
using namespace std;
class Transport{
    public:
    virtual double fare(int km)const =0;
    virtual ~Transport(){}
};
class Bus:public Transport{
    public:
    double fare(int km)const override{
        return 10+0.5*km;
    }
};
class Train:public Transport{
    public:
    double fare(int km)const override{
        return 20+0.3*km;
    }
};
int main(){
    Bus b;
    Train t;
    cout<<b.fare(50)<<"\n"<<t.fare(50)<<"\n";
    return 0;
}