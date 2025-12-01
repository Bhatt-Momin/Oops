#include<iostream>
using namespace std;
class Person{
    protected:
    string name;
    public:
    void input(){
        cout<<"Enter name";
        cin>>name;
    }
};
class Student:public Person{
    protected:
    int roll;
    public:
    void inputSt(){
        input();
        cout<<"\nEnter roll: ";
        cin>>roll;
    }
};
class Result:public Student{
    int m1,m2,m3;
    public:
    void inputRE(){
        inputSt();

        cout<<"\nEnter marks : ";
        cin>>m1>>m2>>m3;
    }
    void Summary(){
        cout<<"\nName "<<name<<"\nroll "<<roll;
        cout<<"\nTotal marks "<<m1+m2+m3;
    }
};
int main(){
    Result R;
    R.inputRE();
    R.Summary();
}