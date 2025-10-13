#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter number of rows and columns:";
    cin>>r>>c;
    int a[r][c],transpose[c][r];
    cout<<"Enter elements of matrix: ";
    for(int i =0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        int rowSum = 0;
        for(int j=0;j<c;j++){
            rowSum += a[i][j];
        }
        cout<<"Sum of elements of row "<<i+1<<" is: "<<rowSum<<endl;
    }
    for(int j=0;j<c;j++){
        int colSum = 0;
        for(int i=0;i<r;i++){
            colSum += a[i][j];
        }
        cout<<"Sum of elements of column "<<j+1<<" is: "<<colSum<<endl;
    }

}