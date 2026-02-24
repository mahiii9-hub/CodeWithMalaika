#include <iostream>

using namespace std;

int main() {
    int a[10];
    int sumOfSquares = 0;
    int i = 0;

    
    cout << "Enter 10 numbers:" << endl;
    for(i = 0; i < 10; i++) {
        cin >> a[i];
    }

    
    for(i = 0; i < 10; i++) {
        sumOfSquares = sumOfSquares + (a[i] * a[i]);
    }

    
    cout << "The sum of squares is: " << sumOfSquares << endl;

    return 0;
}
