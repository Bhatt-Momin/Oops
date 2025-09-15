#include<iostream>
using namespace std;
int main(){
    int height = 20;
    for(int i=1;i<=height;i++){
        for(int k=1;k<=(2*i-1);k++){ //for odd in each row
            cout<<"X";
        }
        cout<<endl;
    }
    return 0;
}