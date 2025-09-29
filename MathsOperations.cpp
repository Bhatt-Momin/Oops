#include<iostream>
using namespace std;
int factoria(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}

bool isprime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}

bool isArmstrong(int n){
    int sum=0,original=n;
    while(n){
        int digit = n%10;
        sum += digit*digit*digit;
        n /= 10;
    }
    return sum == original;
}

bool isPalindrome(int n){
    int reversed=0,original=n;
    while(n){
        int digit = n%10;
        reversed = reversed*10 + digit;
        n /= 10;
    }
    return reversed == original;
}

int main(){
    int choice,num;
    cout<<"Choose an operation:\n1. Factorial\n2. Prime Check\n3. Armstrong Check\n4. Palindrome Check\n";
    cin>>choice;
    cout<<"Enter a number: ";
    cin>>num;
    switch(choice){
        case 1:
            cout<<"Factorial of "<<num<<" is "<<factoria(num)<<endl;
            break;
        case 2:
            if(isprime(num))
                cout<<num<<" is a prime number"<<endl;
            else
                cout<<num<<" is not a prime number"<<endl;
            break;
        case 3:
            if(isArmstrong(num))
                cout<<num<<" is an Armstrong number"<<endl;
            else
                cout<<num<<" is not an Armstrong number"<<endl;
            break;
        case 4:
            if(isPalindrome(num))
                cout<<num<<" is a Palindrome"<<endl;
            else
                cout<<num<<" is not a Palindrome"<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
    return 0;
}