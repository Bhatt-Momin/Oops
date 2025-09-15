#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of employees: ";
    cin>>n;
    int Id,Hours;
    double wage,gross,net,totalPayroll =0;
    for(int i=0;i<n;i++){
        cout<<"Enter Employee ID,hourly wage and hours worked of employee:"<<i+1;
        cin>>Id>>wage>>Hours;
        if(Hours>40){
            gross = (40*wage) + ((Hours-40)*wage*1.5);
        }
        else{
            gross = Hours*wage;

        }
        net = gross - (0.03625*gross);
        cout<<"Employee ID: "<< Id << "Net Pay = "<<net<<endl;  
        totalPayroll += net;
    }
    cout<<"Total Payroll = "<<totalPayroll<<endl;
    cout<<"avg Payroll = "<<totalPayroll/n<<endl;
    return 0;

}    