#include <iostream>
using namespace std;

int main() {
    
    int number = 1; 
    int sum = 0;

   
    while (number <= 1000) {
        sum = sum + number;   
        number = number + 1;   
    }

    // Displaying the final result after loop termination
    cout << "The sum of numbers from 1 to 1000 is: " << sum << endl;

    return 0;
}
