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
    //rowwise sorting
    for(int i=0;i<r;i++){
        for(int j=0;j<c-1;j++){
            for(int k=j+1;k<c;k++){
                if(a[i][j]>a[i][k]){
                    swap(a[i][j],a[i][k]);
                }
            }
        }
    }

    //columnwise sorting
    for(int j=0;j<c;j++){
        for(int i=0;i<r-1;i++){
            for(int k=i+1;k<r;k++){
                if(a[i][j]>a[k][j]){
                    swap(a[i][j],a[k][j]);
                }
            }
        }
    }
    cout<<"Row and Column wise sorted matrix is: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
    }
    cout<<endl;
}