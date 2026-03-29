#include <iostream>
using namespace std;

int main() // Corrected main function signature
{
    int number, result;
    
    cout << "----------------------------------------" << endl;
    cout << "   Left & Right Shift Operators Demo " << endl;
    cout << "----------------------------------------" << endl;
    
    cout << "Please enter a number: ";
    cin >> number;

    // --- LEFT SHIFT ---
    // Shift binary digits left by 1 position (multiplies by 2)
    result = number << 1;
    cout << "\nThe number after left shift is: " << result << endl;
    
    // Shift binary digits left by 1 position AGAIN (result multiplied by 2)
    cout << "The number after left shift again is: " << (result << 1) << endl;


    // --- RIGHT SHIFT ---
    cout << "\nNow applying right shift..." << endl;
    
    // Shift binary digits right by 1 position (divides by 2)
    result = number >> 1;
    cout << "The number after right shift is: " << result << endl;
    
    // Shift binary digits right by 1 position AGAIN (result divided by 2)
    cout << "The number after right shift again is: " << (result >> 1) << endl;
    
    cout << "----------------------------------------" << endl;

    return 0; // Return success code
}
