// Program to display the operation of the strcat() and strncat() functions
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    // Defining three character arrays (strings)
    char s1[20] = "Welcome to ";
    char s2[] = "Virtual University ";
    char s3[40] = ""; // An empty string to store the combined result

    // Displaying the initial values of s1, s2, and s3
    cout << "s1 = " << s1 << endl << "s2 = " << s2 << endl << "s3 = " << s3 << endl;

    // strcat: Joins the full content of s2 to the end of s1
    // Now s1 becomes "Welcome to Virtual University"
    cout << "strcat( s1, s2 ) = " << strcat(s1, s2) << endl;

    // strncat: Joins only the first 7 characters of s1 into the empty string s3
    // Since s1 was modified above, it takes "Welcome" (first 7 chars)
    cout << "strncat( s3, s1, 7 ) = " << strncat(s3, s1, 7) << endl;

    return 0;
}
