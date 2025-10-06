#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a string ";
    cin>>str;

    //length

    int count = 0;
    for(int i = 0;str[i]!= '\0';i++){
        count++;
    }
    cout<<"\nLength of string is: "<<count<<endl;


    //Reverse

    cout<<"\nReverse of string is: ";
    for(int i = count-1;i>=0;i--){
        cout<<str[i];
    }

    //frequency

    char ch;
    cout<<"\nEnter the character to find frequency of: ";
    cin>>ch;
    int freq =0;
    for(int i =0;i<count;i++){
        if(str[i]==ch){
            freq++;
        }
    }
    cout<<"\nFrequency of the entered character is : "<<freq<<endl;

    //Substring

    int start,end;

    cout<<"\nenter substring beginning and last index";
    cin>>start>>end;

    cout<<"\nSubstring is : ";
    for(int i = start;i<=end && i<count;i++){
        cout<<str[i];
    }

    //concatenation

    cout<<"\nenter 2nd string";
    char str2[100];
    cin>>str2;
    cout<<"\nConcatenated string is: ";
    for(int i =0;str[i]!='\0';i++){
        cout<<str[i];
    }
    for(int i =0;str2[i]!='\0';i++){
        cout<<str2[i];
    }

    return 0;




}