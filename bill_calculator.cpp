#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class ElectricityBill {
private:
    string consumerName;
    double unitsConsumed;
    double chargePerUnit;

public:
    
    void getDetails() {
        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);
        cout << "Enter Units Consumed: ";
        cin >> unitsConsumed;

        
        if (unitsConsumed <= 100)
            chargePerUnit = 1.20;
        else if (unitsConsumed <= 200)
            chargePerUnit = 2.00;
        else if (unitsConsumed <= 300)
            chargePerUnit = 3.00;
        else
            chargePerUnit = 5.00;
    }

    
    double calculateBill() {
        return unitsConsumed * chargePerUnit;
    }


    void displayBill() {
        cout << "Consumer Name : " << consumerName << endl;
        cout << "Units Consumed: " << unitsConsumed << endl;
        cout << "Charge per Unit: Rs. " << chargePerUnit << endl;
        cout << fixed << setprecision(2);
        cout << "Total Amount  : Rs. " << calculateBill() << endl;
        cout << "\n";
    }
};

int main() {
    ElectricityBill bill;

    bill.getDetails();
    bill.displayBill();

    return 0;
}
