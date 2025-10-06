#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter matrix size ";
    cin>>n;
    int a[n][n];
    cout<<"Enter elements of matrix \n";
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    float b[n][n];
    double c[n][n];
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            b[i][j]=(float)a[i][j];
            c[i][j]=(double)a[i][j];
        }
    }
    double res[n][n];
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                res[i][j]+=b[i][k]*c[k][j];
            }
        }
    }
    cout<<"Resultant matrix is \n";
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
    