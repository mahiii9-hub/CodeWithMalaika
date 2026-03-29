#include <iostream>
using namespace std;

int main() // Corrected main function signature
{
    int number;
    
    cout << "----------------------------------------" << endl;
    cout << "   Check if 4th Bit is Set or Not " << endl;
    cout << "----------------------------------------" << endl;
    
    cout << "Please enter a number: ";
    cin >> number;

    // Use bitwise AND with a mask for the 4th bit.
    // The mask for the 4th bit (0-indexed) is 1 << 3, which is 8 (decimal) or 0x8 (hex).
    if (number & 0x8) // Using hexadecimal mask for clarity
    {
        cout << "The fourth bit of the number is set (is 1)." << endl;
    }
    else
    {
        cout << "The fourth bit of the number is NOT set (is 0)." << endl;
    }
    
    cout << "----------------------------------------" << endl;

    return 0; // Return success code
}
