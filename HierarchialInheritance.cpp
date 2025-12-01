#include<iostream>
using namespace std;

class Shape{
    public:
    virtual void area()=0;
};
class Circle:public Shape{
    float r;
    public:
    void area(){
        cout<<"Enter radius: ";
        cin>>r;
        cout<<"\nArea: "<<3.14*r*r;
    }
};
class Rectangle:public Shape{
    float l,b;
    public:
    void area(){
        cout<<"Enter length & breadth ";
        cin>>l>>b;
        cout<<"\nArea: "<<l*b;
    }
};
class Triangle:public Shape{
    float h,b;
    public:
    void area(){
        cout<<"Enter height & base";
        cin>>h>>b;
        cout<<"\narea: "<<0.5*b*h;
    }
};
int main(){
    Shape *s;
    Circle c;
    Rectangle r;
    Triangle t;
    s=&c;
    s->area();
    cout<<endl;
    s=&r;
    s->area();
    cout<<endl;
    s=&t;
    s->area();

}
