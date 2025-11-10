#include<iostream>
using namespace std;

class Avg{
    float a,b,c;
    public:
    void input(){
        cout<<"Enter 3 numbers:  ";
        cin>>a>>b>>c;
    }
    void display(){
        float avg = (a+b+c)/3;
        cout<<"avg :"<<avg<<endl;
    }

};



int main(){
    Avg c;
    c.input();
    c.display();
}