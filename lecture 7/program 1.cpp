#include <iostream>
using namespace std;

int main() {
    int number;
    long factorial = 1; 

    cout << "Enter a number to calculate its factorial: ";
    cin >> number;

   
    while (number > 1) {
        factorial = factorial * number; 
        number = number - 1;           
    }

    cout << "The factorial is: " << factorial << endl;
    return 0;
}
