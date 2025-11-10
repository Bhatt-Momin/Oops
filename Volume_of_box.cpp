#include<iostream>
using namespace std;

class Box{
    float length,breadth,height;
    public:
    void input(){
        cout<<"Enter length,breadth,height:  ";
        cin>>length>>breadth>>height;
    }
    void display(){
        float volume = length*breadth*height;
        cout<<"volume :"<<volume<<endl;
    }

};



int main(){
    Box c;
    c.input();
    c.display();
}