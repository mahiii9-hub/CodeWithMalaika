// This program displays the sum of squares of integers from 1 to n
#include <iostream>
using namespace std;

int main() {
    
    int n;
    int sum = 0;

    cout << "Enter a positive integer n: ";
    cin >> n;

    
    for (int i = 1; i <= n; i++) {
        sum += (i * i); 
    }

    cout << "The sum of squares from 1 to " << n << " is: " << sum << endl;

    return 0;
}
