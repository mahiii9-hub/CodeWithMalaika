#include <iostream>
using namespace std;

int main() {
    
    float amount = 0.0;
    float discount = 0.0;
    float netPayable = 0.0;

    
    cout << "Enter the bill amount: ";
    cin >> amount;

    
    if (amount > 5000) {
        
        discount = amount * 0.15;
    } else {
        
        discount = amount * 0.10;
    }

    
    netPayable = amount - discount;

    // Results display karna
    cout << "Total Amount: " << amount << endl;
    cout << "Discount Applied: " << discount << endl;
    cout << "Payable Amount: " << netPayable << endl;

    return 0;
}
