#include<iostream>
using namespace std;
class Notification{
    public:
    virtual void send(const string & to ,const string & msg)const =0;
    virtual ~Notification(){}
};
class Email:public Notification{
    public:
    void send(const string & to ,const string& msg)const override{
        cout<<"Email to"<<to<<":"<<msg<<"\n";
    }

};
class SMS:public Notification{
    public:
    void send(const string& to ,const string& msg)const override{
        cout<<"SMS to"<<to<<":"<<msg<<"\n";
    }
};
int main(){
    Notification *ptr;
    Email e;
    SMS s;

    ptr=&e;
    ptr->send("Momin","Hello");

    ptr =&s;
    ptr->send("Momin","Hello");
    return 0;

}