#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
string sum(string s1,string s2){
    return s1 + s2;
}

int main(){
    cout<<"sum of 2 integers "<<sum(3,4)<<endl;
    cout<<"sum of r integers "<<sum(3,4,7)<<endl;
    cout<<"sum of 2 strings "<<sum(string("Hello "),string("world"))<<endl;
}
