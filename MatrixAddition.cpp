#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter number of rows and columns: ";
    cin>>r>>c;
    int a[r][c],b[r][c],sum[r][c],diff[r][c];
    cout<<"Enter elements of first matrix: ";
    for(int i =0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }

    cout<<"Enter elements of second matrix: ";
    for(int i =0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>b[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i][j]=a[i][j]+b[i][j];
            diff[i][j]=a[i][j]-b[i][j];
        }
    }

    cout<<"Sum of two matrices is: "<<endl;
    for(int i =0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<sum[i][j]<<" ";
        }
    }
    cout<<endl;
    cout<<"Difference of two matrices is: "<<endl;
    for(int i =0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<diff[i][j]<<" ";
        }
    }        
}

