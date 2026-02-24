#include <iostream>
using namespace std;

int main() {
    double salary, netPayable, deduction;
    cout << "Enter employee salary: ";
    cin >> salary;

    int range = (int)salary / 10000;

    switch (range) {
        case 0: 
            deduction = 0;
            break;
        case 1: 
            deduction = 1000;
            break;
        default: 
            deduction = salary * 0.07;
            break;
    }

    netPayable = salary - deduction;
    cout << "Deduction: Rs. " << deduction << endl;
    cout << "Net Payable: Rs. " << netPayable << endl;

    return 0;
}
