#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Base contructor";
    }
    ~Base(){
        cout<<"\nBase destructor";
    }
};
class Derived:public Base{
    public:
    Derived(){
        cout<<"\nDerived Constructor";
    }
    ~Derived(){
        cout<<"\nDerived destructor";
    }
};
int main(){
    Derived d;
}