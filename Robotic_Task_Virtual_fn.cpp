#include<iostream>
using namespace std;
class Robot{
    public:
    virtual void performTask() const =0;
    virtual ~Robot(){}
};
class Cleaner : public Robot{
    public:
    void performTask()const override{
        cout<<"Vacumming\n";
    }
};
class Delivery:public Robot{
    public:
    void performTask() const override{
        cout<<"Delivering package\n";
    }
};
int main(){
    Robot *ptr;
    Cleaner c;
    Delivery d;
    ptr =&c;
    ptr->performTask();
    ptr = &d;
    ptr->performTask();
    return 0;
}