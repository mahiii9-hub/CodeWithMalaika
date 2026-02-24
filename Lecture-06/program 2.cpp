#include <iostream>
using namespace std;

int main() {
    int number = 1;
    int sum = 0;
    int upperLimit = 0;

   
    cout << "Please enter the upper limit for which you want the sum: ";
    cin >> upperLimit;

  
    while (number <= upperLimit) {
      
        if ((number % 2) == 0) {
            sum = sum + number; // Only add if even
        }
        number = number + 1;    // Increment to next number
    }

   
    cout << "The sum of first " << upperLimit << " even integers is " << sum << endl;

    return 0;
}
