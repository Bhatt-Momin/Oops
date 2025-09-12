#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter any two numbers\n";
    cin>>a>>b;
    cout<<"Enter operator(+,-,*,/,%)\n";
    cin>>op;

    (op == '+') ? cout << "Result : "<<a+b<<endl :
    (op == '-') ? cout << "Result : "<<a-b<<endl :
    (op == '*') ? cout << "Result : "<<a*b<<endl :
    (op == '/') ? cout << "Result : "<<a/b<<endl :
    (op == '%') ? cout << "Result : "<<a%b<<endl :
    cout << "Invalid operator"<<endl;

    return 0;
}