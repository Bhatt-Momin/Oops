#include<iostream>
using namespace std;
int main(){
    int marks[5],total=0;
    float percentage;
    cout<<"Enter marks of 5 subjects: \n";
    for(int i=0;i<5;i++){
        cin>>marks[i];
        total += marks[i];
    }
    percentage = (total/500.0)*100;
    if(percentage>=90)
        cout<<"Grade A"<<endl;
    else if(percentage>=80)
        cout<<"Grade B"<<endl;
    else if(percentage>=70)
        cout<<"Grade C"<<endl;
    else if(percentage>=60)
        cout<<"Grade D"<<endl;
    else if(percentage>=40)
        cout<<"Grade E"<<endl;
    else
        cout<<"Grade F"<<endl;
    return 0;
}