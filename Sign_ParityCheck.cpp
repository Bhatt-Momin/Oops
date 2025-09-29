#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    if(n==0){
        cout<<"Zero"<<endl;
    }else if(n>0){
        (n%2 ==0)?cout<<"Positive Even"<<endl :cout<<"Positive odd"<<endl;
    }else{
        (n%2 ==0 )?cout<<"Negative Even"<<endl :cout<<"Negative odd"<<endl;
    }
    return 0;
}