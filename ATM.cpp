#include<iostream>
using namespace std;
int main(){
    int choice;
    double balance=1000,amount;
    cout<<"Welcome to the ATM Machine\n";
    cout<<"1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Your current balance is: "<<balance<<endl;
            break;
        case 2:
            cout<<"Enter amount to deposit: ";
            cin>>amount;
            if(amount>0){
                balance += amount;
                cout<<"Deposited: "<<amount<<endl;
                cout<<"New balance: "<<balance<<endl;
            }else{
                cout<<"Invalid amount"<<endl;
            }
            break;
        case 3:
            cout<<"Enter amount to withdraw: ";
            cin>>amount;
            if(amount>0 && amount<=balance){
                balance -= amount;
                cout<<"Withdrawn: "<<amount<<endl;
                cout<<"New balance: "<<balance<<endl;
            }else if(amount>balance){
                cout<<"Insufficient balance"<<endl;
            }else{
                cout<<"Invalid amount"<<endl;
            }
            break;
        case 4:
            cout<<"Thank you for using the ATM. Goodbye!"<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
}