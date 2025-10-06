#include<iostream>
using namespace std;
void truth_table();
int main(){
    int a,b;
    cout<<"Enter three numbers ";
    cin>>a>>b;
    cout<<"AND:"<<(a&&b)<<endl;
    cout<<"OR:"<<(a||b)<<endl;
    cout<<"NOT:"<<(!a)<<endl;
    cout<<"XOR:"<<(a^b)<<endl;

    truth_table();
    return 0;
}
void truth_table(){
    cout<<"\n Truth table for A,B,C(AND,OR,NOT,XOR) \n";
    cout<<"A B C AND OR NOT(A) XOR \n";
    for(int i =0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                cout<<i<<" "<<j<<" "<<k<<"  "<<(i&&j&&k)<<"   "<<(i||j||k)<<"   "<<(!i)<<"    "<<(i^j^k)<<"\n";
            }
        }
    }       
}