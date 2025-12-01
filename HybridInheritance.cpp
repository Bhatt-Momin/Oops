#include<iostream>
using namespace std;
class Student{
    protected:
    string name;
    int roll;
    public:
    void input(){
        cout<<"name,roll";
        cin>>name>>roll;
    }
};
class Sports:public Student{
    protected:
    int sp;
    public:
    void inputS(){
        input();
        cout<<"Sports score";
        cin>>sp;
    }
};
class Academics:public Student{
    protected:
    int ac;
    public:
    void inputA(){
        cout<<"Academic score: ";
        cin>>ac;
    }
};
class Result:public Sports,public Academics{
    public:
    void finalScore(){
        inputS();
        inputA();
        cout<<"\nFinal: "<<sp+ac;
    }
};
int main(){
    Result r;
    r.finalScore();
}
