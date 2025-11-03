#include<iostream>
using namespace std;
void findMinMax(int * arr,int n,int &max,int &min){
    min = max = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }

    }
}
int main(){
    int arr[]={1,4,6,8,10,12};
    int n = 6;
    int min,max;
    findMinMax(arr,n,max,min);

    cout<<"Maximum : "<<max<<endl;
    cout<<"Minimum : "<<min<<endl;



}