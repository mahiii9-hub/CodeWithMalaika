#include <iostream>
#include <cstdlib> // For standard library functions
using namespace std;

#define DEBUG // Comment this line to disable debug output

int main() 
{
    int z, i;
    int arraySize = 10; // Reduced size for easier output
    int a[10];
    int found = 0;

    // Initializing the array
    for (i = 0; i < arraySize; i++) {
        a[i] = i * 2; // Storing even numbers
    }

    // Conditional Compilation: Prints array only if DEBUG is defined
    #ifdef DEBUG
        cout << "--- DEBUG MODE: Array Elements ---" << endl;
        for (i = 0; i < arraySize; i++) {
            cout << "a[" << i << "] = " << a[i] << "\t";
        }
        cout << "\n---------------------------------" << endl;
    #endif

    cout << "Please enter an integer to search: ";
    cin >> z;

    // Loop to search for the number
    for (i = 0; i < arraySize; i++) {
        if (z == a[i]) {
            found = 1;
            break; // Stop searching once found
        }
    }

    if (found == 1) {
        cout << "Success! Found the integer at position: " << i << endl;
    } else {
        cout << "The number was not found in the array." << endl;
    }

    return 0;
}
