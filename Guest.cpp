#include<iostream>
using namespace std;
int main(){
    int guests,chairs;
    cout<<"Enter the number of guests & chairs: ";
    cin>>guests>>chairs;
    double arrangement =1;
    for(int i=0;i<guests;i++){
        arrangement *= (chairs - i);
    }
    cout<<"Number of arrangements possible: "<<arrangement<<endl;
    return 0;
}