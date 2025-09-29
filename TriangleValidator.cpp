#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three sides of Triangle: \n";
    cin>>a>>b>>c;

    if(a+b>c && a+c>b && b+c>a){
        cout<<"VAlid Triangle"<<endl;

        if(a==b && b==c){
            cout<<"Equilateral Triangle"<<endl;
        }else if(a==b || b==c || c==a){
            cout<<"Isoceles Triangle"<<endl;
        }else{
            cout<<"Scalene Triangle"<<endl;
        }

    }else{
        cout<<"not a Vlaid Triangle"<<endl;
    }

    return 0;
}