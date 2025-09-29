#include<iostream>
using namespace std;
int main(){
    double income,tax=0;
    cout<<"Enter your income: ";
    cin>>income;

    if(income<=250000){
        tax = 0;
    }else if(income<=500000){
        tax = (income-250000)*0.05;
    }else if(income<=1000000){
        tax = 0.05*250000 + (income-500000)*0.20;
    }else{
        tax = 0.05*250000 + 0.20*500000 + (income-1000000)*0.30;
    }
    cout<<"Your income tax is: "<<tax<<endl;
    cout<<"Your net income is: "<<(income-tax)<<endl;
    cout<<"Taxable income is: "<<(income)<<endl;
    return 0;
}