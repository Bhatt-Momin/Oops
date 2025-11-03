#include<iostream>
using namespace std;
void display(int a){
    cout<<"integer: "<<a<<endl;
}
void display(float b){
    cout<<"float: "<<b<<endl;
}
void display(string s){
    cout<<"string: "<<s<<endl;
}
int main(){
    display(10);
    display(10.8f);
    display("Hello World");
}