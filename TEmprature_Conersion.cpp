#include<iostream>
using namespace std;

class Temperature{
    float celsius,farenheit;
    public:
    void C_to_F(){
        
        cout<<"Enter Temperature in celsius ";
        cin>>celsius;
        farenheit = (celsius*9/5)+32;
        cout<<"in farenheit :"<<farenheit<<endl;

    }
    void F_to_C(){
        cout<<"Enter Temperature in farenheit ";
        cin>>farenheit;
        celsius = (farenheit - 32)*5/9;
        cout<<"in celsius :"<<celsius<<endl;
        
    }

};



int main(){
    Temperature t;
    t.C_to_F();
    t.F_to_C();
    return 0;
}