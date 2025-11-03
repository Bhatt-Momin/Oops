#include<iostream>
using namespace std;

float area(float radius){
    return 3.14*radius*radius;
}

float area(float length,float breadth){
    return length*breadth;
}

float areatriangle(float base,float height){
    return 0.5*base*height;
}

int main(){
    cout<<"Area of Circle "<<area(5)<<endl;
    cout<<"Area of rectangle "<<area(5,6)<<endl;
    cout<<"Area of Triangle "<<areatriangle(5,8)<<endl;
}



