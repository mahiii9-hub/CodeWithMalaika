// A program which shows string manipulation using <string.h> library
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main()
{
    char s1[] = "Welcome to ";
    char s2[] = "Virtual University";
    char s3[] = "Welcome to Karachi";
    char city[] = "Karachi";
    char province[] = "Sind";
    char s[80]; // Buffer to store manipulated string
    char *pc;
    int n;

    // Displaying initial strings
    cout << "s1 = " << s1 << endl << "s2 = " << s2 << endl;
    cout << "s3 = " << s3 << endl;

    // Function for string length: Calculates the number of characters
    cout << "The length of s1 = " << strlen(s1) << endl;
    cout << "The length of s2 = " << strlen(s2) << endl;
    cout << "The length of s3 = " << strlen(s3) << endl;

    // string copy: copies "Hyderabad" into s
    strcpy(s, "Hyderabad");
    cout << "The nearest city to " << city << " is " << s << endl;

    // string concatenation: Joining multiple strings to form a sentence
    strcat(s, " and ");
    strcat(s, city);
    strcat(s, " are in ");
    strcat(s, province);
    strcat(s, ".\n");
    cout << s;

    // strcmp: Returns 0 if strings are identical (exactly the same)
    if (!strcmp(s1, s2)) // !0 becomes true if they match
        cout << "s1 and s2 are identical" << endl;
    else
        cout << "s1 and s2 are not identical" << endl;

    // strncmp: Compares only the first 7 characters of s1 and s3
    if (!strncmp(s1, s3, 7)) 
        cout << "First 7 characters of s1 and s3 are identical" << endl;
    else
        cout << "First 7 characters of s1 and s3 are not identical" << endl;
}
