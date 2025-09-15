#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter the number of elements: ";
    cin>>N;
    int num,smallest,largest;
    double sum =0;
    cout<<"Enter "<<N<<" numbers: ";
    for(int i =0;i<N;i++){
        cin>>num;
        sum += num;
        if(i==0){
            smallest = num;
            largest = num;
        }
        else{
            if(num<smallest){
                smallest=num;
            }
            if(num>largest){
                largest = num;
            }
        }
    }  
    cout<<"Smallest number: "<<smallest<<endl;
    cout<<"Largest number: "<<largest<<endl;
    cout<<"Avg: "<<sum/N<<endl;  

}