// This program demonstrates the use of the atoi function
#include <iostream>
#include <stdlib.h> // Required for atoi() function
using namespace std;
int main()
{
    int anInteger;
    char myInt[20]; // Character array to store user input

    cout << "Enter an integer between 10-100 : ";
    cin >> myInt;

    // atoi converts string to integer. If it returns 0, input is invalid or non-numeric.
    if (atoi(myInt) == 0)
    {
        cout << "\nError : Not a valid input"; // Display error for non-numeric input
    }
    else 
    {
        // Successfully converted to integer, now checking the range
        anInteger = atoi(myInt);
        
        // Logical OR (||) checks if number is less than 10 OR greater than 100
        if (anInteger < 10 || anInteger > 100)
        {
            cout << "\nError : only integers between 10-100 are allowed!";
        }
        else
        {
            // If the code reaches here, the input is a valid number within range
            cout << "\nInput accepted: " << anInteger;
        }
    }
}
