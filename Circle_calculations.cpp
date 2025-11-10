#include<iostream>
using namespace std;

class Circle{
    float radius;
    public:
    void input(){
        cout<<"Enter radius: ";
        cin>>radius;
    }
    void display(){
        float area = 3.1416*radius*radius;
        float circumference = 2*3.1416*radius;
        cout<<"area :"<<area<<endl;
        cout<<"circumference :"<<circumference<<endl;
    }

};



int main(){
    Circle c;
    c.input();
    c.display();
}