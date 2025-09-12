#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float real1,imag1,real2,imag2;
    cout<<"Enter real and imaginary part of first complex number\n";
    cin >> real1 >> imag1;
    cout<<"Enter real and imaginary part of second complex number\n";
    cin >> real2 >> imag2;
    float real_sum = real1 + real2;
    float imag_sum = imag1 + imag2;
    float m1 = sqrt(real1*real1 + imag1*imag1);
    float m2 = sqrt(real2*real2 + imag2*imag2);

    if(m1 > m2){
        cout<<"First complex number has greater magnitude\n";
    }else if(m2 > m1){
        cout<<"First complex number has greater magnitude\n";    
    }else{
        cout<<"both have equal magnitude\n";
    }
    return 0;
}