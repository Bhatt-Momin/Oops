#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c;
    cout<<"For the quadratic equation ax^2 + bx + c = 0,";
    cout<<"Enter coefficients a, b and c: ";
    cin>>a>>b>>c;
    if(a==0){
        cout<<"Coefficient 'a' cannot be zero in a quadratic equation."<<endl;
    }else{
        double discriminant = b*b - 4*a*c;
        if(discriminant > 0){
            double root1 = (-b + sqrt(discriminant)) / (2*a);
            double root2 = (-b - sqrt(discriminant)) / (2*a);
            cout<<"Roots are real and different."<<endl;
            cout<<"Root 1: "<<root1<<endl;
            cout<<"Root 2: "<<root2<<endl;
        }else if(discriminant == 0){
            double root = -b / (2*a);
            cout<<"Roots are real and the same."<<endl;
            cout<<"Root: "<<root<<endl;
        }else{ 
            double realPart = -b / (2*a);
            double imagPart = sqrt(-discriminant) / (2*a);
            cout<<"Roots are complex and different."<<endl;
            cout<<"Root 1: "<<realPart<<" + "<<imagPart<<"i"<<endl;
            cout<<"Root 2: "<<realPart<<" - "<<imagPart<<"i"<<endl;
        }
        return 0;
    }
}