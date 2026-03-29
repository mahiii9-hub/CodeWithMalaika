// Program to display the operation of the strcpy() and strncpy() functions
#include <iostream>
#include <string.h> // Library for string handling functions
using namespace std;

int main()
{
    char string1[15] = "String1";
    char string2[15] = "String2";
    char string3[15]; // To store partial copy

    // Display original strings before any operation
    cout << "Before the copy :" << endl;
    cout << "String 1:\t" << string1 << endl;
    cout << "String 2:\t" << string2 << endl;

    // copy the whole string: Copies everything from string1 into string2
    strcpy(string2, string1);

    // Display strings after full copy
    cout << "\nAfter the copy :" << endl;
    cout << "String 1:\t" << string1 << endl;
    cout << "String 2:\t" << string2 << endl;

    // copy three characters of the string1 into string3
    // Only 'S', 't', and 'r' will be copied
    strncpy(string3, string1, 3);
    string3[3] = '\0'; // Manually adding null character to terminate the string

    cout << "strncpy(string3, string1, 3) = " << string3 << endl;
}
