#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number between 0-99: ";
    cin>>num;

    if(num<0 || num>99){
        cout<<"Number out of range"<<endl;
        return 0;
    }

    int tens = num/10;
    int ones = num%10;

    switch(num){
        case 0: cout<<"Zero"<<endl; break;
        case 1: cout<<"One"<<endl; break;
        case 2: cout<<"Two"<<endl; break;
        case 3: cout<<"Three"<<endl; break;
        case 4: cout<<"Four"<<endl; break;
        case 5: cout<<"Five"<<endl; break;
        case 6: cout<<"Six"<<endl; break;
        case 7: cout<<"Seven"<<endl; break;
        case 8: cout<<"Eight"<<endl; break;
        case 9: cout<<"Nine"<<endl; break;
        default:
            if(tens==1){

                switch(num){
                    case 10: cout<<"Ten"<<endl; break;
                    case 11: cout<<"Eleven"<<endl; break;
                    case 12: cout<<"Twelve"<<endl; break;
                    case 13: cout<<"Thirteen"<<endl; break;
                    case 14: cout<<"Fourteen"<<endl; break;
                    case 15: cout<<"Fifteen"<<endl; break;
                    case 16: cout<<"Sixteen"<<endl; break;
                    case 17: cout<<"Seventeen"<<endl; break;
                    case 18: cout<<"Eighteen"<<endl; break;
                    case 19: cout<<"Nineteen"<<endl; break;
                }
                
            }else{
                switch(tens){
                    case 2: cout<<"Twenty "; break;
                    case 3: cout<<"Thirty "; break;
                    case 4: cout<<"Forty "; break;
                    case 5: cout<<"Fifty "; break;
                    case 6: cout<<"Sixty "; break;
                    case 7: cout<<"Seventy "; break;
                    case 8: cout<<"Eighty "; break;
                    case 9: cout<<"Ninety "; break;
                }
                switch(ones){
                    case 1: cout<<"One"<<endl; break;
                    case 2: cout<<"Two"<<endl; break;
                    case 3: cout<<"Three"<<endl; break;
                    case 4: cout<<"Four"<<endl; break;
                    case 5: cout<<"Five"<<endl; break;
                    case 6: cout<<"Six"<<endl; break;
                    case 7: cout<<"Seven"<<endl; break;
                    case 8: cout<<"Eight"<<endl; break;
                    case 9: cout<<"Nine"<<endl; break;
                }
            }
    }
    return 0;
    
       
}