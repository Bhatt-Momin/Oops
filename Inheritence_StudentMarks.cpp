#include<iostream>
using namespace std;
class Student{
    protected: // can't use private bcz then it won't be accesible to another class
    string name;
    int roll;

    public:
    void input(){
        cout<<"enter name and roll";
        cin>>name>>roll;
    }
};
class marks:public Student{
    int m1,m2,m3;
    public:
    void inputMarks(){
        input();
        cout<<"Enter marks of 3 subjects";
        cin>>m1>>m2>>m3;
    }
    void report(){
        int total = m1+m2+m3;
        float percentage = total/3.0;
        cout<<"\n Academic report \n";
        cout<<"Name: "<< name <<"\n Roll"<<roll;
        cout<<"\n Total"<<total<<"\npercentage: "<<percentage<<"%";
    }

};
int main(){
    marks m;
    m.inputMarks();
    m.report();
}
