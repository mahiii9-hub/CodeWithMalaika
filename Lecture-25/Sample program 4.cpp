#include <iostream>
using namespace std;

// Function prototype with default values
void show(int first = 1, float second = 2.3, long third = 4);

int main() {
    // Calling with different numbers of arguments
    show();                   // Uses all default values
    show(5);                  // first=5, others default
    show(6, 7.8);             // first=6, second=7.8, third default
    show(9, 10.11, 12L);      // All arguments provided

    return 0;
}

void show(int first, float second, long third) {
    cout << "first = " << first 
         << ", second = " << second 
         << ", third = " << third << endl;
}
