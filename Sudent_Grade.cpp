#include<iostream>
using namespace std;
int main(){
    int marks[5],fail =0,total =0;
    float percentage;
    for(int  i =0;i<5;i++){
        cout<<"Enter marks of Subject"<<i+1<<":";
        cin>>marks[i];
        total += marks[i];
        if(marks[i]<33){
            fail++;
    }
    percentage = (total/500.0)*100;
    }
    if(fail>1){
        cout<<"repeat year\n";
    }else{
        if(percentage>=60){
            cout<<"First Division\n";
        }else if(percentage>=50){
            cout<<"Second Division\n";
        }else if(percentage>=33){
            cout<<"Third Division\n";
        }else{
            cout<<"Fail\n";
        }
    }
    return 0;
}