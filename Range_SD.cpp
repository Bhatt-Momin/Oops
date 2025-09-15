#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int N;
    cout<<"Enter number of elements: ";
    cin>>N;
    int num,smallest,largest;
    double sum =0, sum_sq =0;
    cout<<"Enter "<<N<<" numbers: ";
    for(int i = 0;i<N;i++){
        cin>>num;
        sum +=num;
        sum_sq += num*num;
        if(i==0){
            smallest = num;
            largest = num;  
        }
        else{
            if(num<smallest){
                smallest = num;
            }
            if(num>largest){
                largest = num;
            }
        }

    }
    double avg= sum/N;
    double Stddev = sqrt((sum_sq/N) - (avg*avg));
    cout<<"Range: "<<largest-smallest<<endl;
    cout<<"Standard Deviation: "<<Stddev<<endl; 
    return 0;
}
