#include<iostream>
using namespace std;
float simple_interest(float p,float r= 5.0,float t =2.0){
    return (p*r*t)/100;
}
int main(){
    cout<<"Simple interest with all arguments ";
    cout<<simple_interest(1000,4,3)<<endl;

    cout<<"Simple interest with dafault t: ";
    cout<<simple_interest(1000,4)<<endl;

    cout<<"Simple interest with dafault r and t: ";
    cout<<simple_interest(1000)<<endl;

}