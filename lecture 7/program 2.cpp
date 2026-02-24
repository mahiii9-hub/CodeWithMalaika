#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int maxMultiplier = 0;
    int counter = 1; 

    
    cout << "Enter the number for which you want a table: ";
    cin >> number;

    
    cout << "Enter the number of multipliers (how far to go): ";
    cin >> maxMultiplier;

    cout << "\n--- Table of " << number << " ---" << endl;

    
    while (counter <= maxMultiplier) {
        cout << number << " x " << counter << " = " << number * counter << endl;
        counter = counter + 1; 
    }

    return 0;
}
