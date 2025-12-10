#include<iostream>
using namespace std;
class Media{
    public:
    virtual void play() const =0;
    virtual ~Media(){}
};
class Audio:public Media{
    public:
    void play() const override{
        cout<<"playing audio\n";
    }
};
class Video: public Media{
    public:
    void play() const override{
        cout<<"Playing video";
    }
};
int main(){
    Audio a;
    Video v;
    a.play();
    v.play();
    return 0;
}
