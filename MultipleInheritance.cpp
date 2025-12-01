#include<iostream>
using namespace std;
class Teacher{
    protected:
    string tname,subject;
    public:
    void inputT(){
        cout<<"enter teacher name & subject ";
        cin>>tname>>subject;
    }
};
class Researcher{
    protected:
    string paper;
    public:
    void inputR(){
        cout<<"\nenter paper ";
        cin>>paper;
    }

};
class Faculty:public Teacher,public Researcher{
    public:
    void profile(){
        inputT();
        inputR();
        cout<<"\n Faculty "<<tname<<"\nSubject: "<<subject;
        cout<<"\n paper: "<<paper;
    }
};
int main(){
    Faculty f;
    f.profile();
}