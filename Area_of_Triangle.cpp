#include<iostream>
using namespace std;
int main(){
    double length,breadth;
    cout<<"Enter length and breadth ";
    cin>>length>>breadth;
    double area = length*breadth;
    double perimeter = 2*(length + breadth);
    cout<<"area :"<<area<<endl;
    cout<<"perimeter :"<<perimeter<<endl;

}
