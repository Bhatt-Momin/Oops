#include<iostream>
using namespace std;

class Interest{
    float principle,rate,time;
    public:
    void input(){
        cout<<"Enter principle,rate,time: ";
        cin>>principle>>rate>>time;
    }
    void display(){
        float SI = principle*rate*time;
        cout<<"SI :"<<SI<<endl;
    }

};



int main(){
    Interest c;
    c.input();
    c.display();
}