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
    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                mainDiagonalSum += a[i][j];
            }
            if((i+j) == (c-1)){
                secondaryDiagonalSum += a[i][j];
            }
        }
    }
    cout<<"Sum of main diagonal elements is: "<<mainDiagonalSum<<endl;
    cout<<"Sum of secondary diagonal elements is: "<<secondaryDiagonalSum<<endl;
}