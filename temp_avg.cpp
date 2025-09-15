#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter the number of temperature readings: ";
    cin>>N;
    int hot=0,pleasant=0,cold=0,sum=0;
    double temp[N];
    for(int i=0;i<N;i++){
        cout<<"Enter temperature reading "<<i+1<<": ";
        cin>>temp[i];
        if(temp[i]>30){
            hot++;
            cout<<temp[i]<<" is hot"<<endl;
            sum+=temp[i];
        }
        else if(temp[i]>=20 && temp[i]<=30){
            pleasant++;
            cout<<temp[i]<<" is pleasant"<<endl;
            sum+=temp[i];
        }
        else{
            cold++;
            cout<<temp[i]<<" is cold"<<endl;
            sum+=temp[i];
        }

    }    
    cout<<"Number of hot days: "<<hot<<endl;
    cout<<"Number of pleasant days: "<<pleasant<<endl;
    cout<<"Number of cold days: "<<cold<<endl;
    cout<<"Average temperature: "<<sum/N<<endl;
    return 0;
}    