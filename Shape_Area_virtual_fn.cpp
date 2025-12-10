#include<iostream>
#include<cmath>
using namespace std;
class Shape{
    public:
    virtual double area() const =0;
    virtual ~Shape(){}
};
class Circle:public Shape{
    double r;
    public:
    Circle(double r):r(r){}
    double area () const override{
        return 3.14*r*r;
    }

};
class Rectangle:public Shape{
    double l,b;
    public:
    Rectangle(double l,double b):l(l),b(b){}
    double area()const override {
        return l*b;
    }
};
int main(){
    Circle c(2);
    Rectangle r(3,4);
    cout<<c.area()<<"\n"<<r.area()<<endl;
    return 0;
}


