#include<iostream>
using namespace std;

class LibraryItem{
    public:
    virtual void displayInfo()const =0;
    virtual ~LibraryItem(){}
};
class Book:public LibraryItem{
    string title;
    public:
    Book(const string& t):title(t){}
    void displayInfo()const override{
        cout<<"Book"<<title<<"\n";
    }
};
class DVD:public LibraryItem{
    string title;
    int duration;
    public:
    DVD(const string& t,int d):title(t),duration(d){}
    void displayInfo()const override{
        cout<<"DVD:"<<title<<"("<<duration<<"mins)\n";
    }
};
int main(){
    LibraryItem *ptr;

    Book b("C++ pointer");
    DVD d("Inception",150);

    ptr=&b;
    ptr->displayInfo();

    ptr=&d;
    ptr->displayInfo();


}