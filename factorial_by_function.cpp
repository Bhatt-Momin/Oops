#include<iostream>
using namespace std;
long long factorial(int n){
    if(n==0 || n ==1){
        return 1;
    }
    long long factorialN = n*factorial(n-1);
    return factorialN;
}
int main(){
    int x;
    cout<<"enter any number";
    cin>>x;
    cout<<"\nfactorial of "<<x<<" is "<<factorial(x);
}