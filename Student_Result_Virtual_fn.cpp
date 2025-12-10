#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
class Student{
    public:
    virtual string calculateResult() const =0;
    virtual ~Student(){}
};
class UG:public Student{
    vector<int> marks;
    public:
    UG(const vector<int> & m):marks(m){}
    string calculateResult() const override{
        double avg=accumulate(marks.begin(),marks.end(),0.0)/marks.size();
        return avg>=50?"pass":"Fail";
    }
};
int main(){
    UG s({55,80,79});
    cout<<s.calculateResult()<<"\n";
    return 0;
}
