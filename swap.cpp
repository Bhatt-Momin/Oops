#include<iostream>
using namespace std;
void swap_by_value(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"\nnumbers after swapping are \na= "<<a<<"and b = "<<b<<endl;
}
void swap_by_reference(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"\nnumbers after swapping are \na= "<<a<<"and b = "<<b<<endl;

}
void swap_by_pointer(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout<<"\nnumbers after swapping back are \na= "<<*a<<"and b = "<<*b<<endl;

}

int main(){
    int x = 10;
    int y = 15;
    cout<<"numbers before swapping \n a = "<<x<<"b = "<<y<<endl;
    swap_by_value(x,y);
    cout<<"after calling swap by value function \na = "<<x<<" and b = "<<y<<endl;

    swap_by_reference(x,y);
    cout<<"after calling swap by reference function \na = "<<x<<" and b = "<<y<<endl;

    swap_by_pointer(&x,&y);
    cout<<"after calling swap by pointer function \na = "<<x<<" and b = "<<y<<endl;
    
}