#include<iostream>
using namespace std;

class Distance{
    float meters;
    public:
    void input(){
        cout<<"Enter distance in meters: ";
        cin>>meters;
    }
    void display(){
        cout<<"in KM :"<<meters/1000<<endl;
        cout<<"in cm :"<<meters*100<<endl;
        cout<<"in mm :"<<meters*1000<<endl;
    }

};



int main(){
    Distance c;
    c.input();
    c.display();
}