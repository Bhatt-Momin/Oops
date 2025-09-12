#include<iostream>
using namespace std;
int main(){
    int year,count =0;
    cout<<"Enter any year\n";
    cin>>year;
    if((year%4 == 0) || (year%400 == 0) && (year%100 != 0)){
        cout<<"Leap year\n";
    }else{
        cout<<"Not a leap year\n";
    }while (count < 5){
        year++;
        if((year%4 == 0) || (year%400 == 0) && (year%100 != 0)){
            cout<<year<<" is a leap year\n";
            count++;
        }
    }
    return 0;
}

        