/*demontrate floating point errors by comparing a*b/c with a/c*b analyze rounding issues with float vs double 
also find smallest detectable difference (epsilon)*/  
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    float a=1.0e20f;
    float b=1.0f;
    float c=1.0e20f;
    cout<<setprecision(10);
    cout<<"a*b/c="<<a*b/c<<endl;
    cout<<"a/c*b="<<a/c*b<<endl;
    double d=1.0e20;
    double e=1.0;
    double f=1.0e20;
    cout<<"d*e/f="<<d*e/f<<endl;
    cout<<"d/f*e="<<d/f*e<<endl;
    float eps=1.0f;
    while((1.0f+eps)!=1.0f){
        eps/=2.0f;
    }
    cout<<"float epsilon="<<eps*2.0f<<endl;
    double epsd=1.0;
    while((1.0+epsd)!=1.0){
        epsd/=2.0;
    }
    cout<<"double epsilon="<<epsd*2.0<<endl;
    return 0;
}
