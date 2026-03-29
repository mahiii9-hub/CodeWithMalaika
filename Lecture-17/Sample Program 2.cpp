// Example: Text analysis using the <ctype.h> library
#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main()
{
    char c;
    // Initializing counters for each category to zero
    int i = 0, lc = 0, uc = 0, dig = 0, ws = 0, pun = 0, oth = 0;

    cout << "Please enter a character string and then press ENTER: ";

    // Loop continues until the user presses the Enter key ('\n')
    while ((c = getchar()) != '\n')
    {
        // Check if the character is a lowercase letter
        if (islower(c))
            lc++;
        // Check if the character is an uppercase letter
        else if (isupper(c))
            uc++;
        // Check if the character is a numeric digit (0-9)
        else if (isdigit(c))
            dig++;
        // Check if the character is a space, tab, or newline
        else if (isspace(c))
            ws++;
        // Check if the character is a punctuation mark (e.g., !, ., ,)
        else if (ispunct(c))
            pun++;
        // If it doesn't fit any above category, count as 'other'
        else
            oth++;
    }

    // Displaying the final results to the user
    cout << "You typed: " << endl;
    cout << "Lower case letters = " << lc << endl;
    cout << "Upper case letters = " << uc << endl;
    cout << "Digits             = " << dig << endl;
    cout << "White space        = " << ws << endl;
    cout << "Punctuation        = " << pun << endl;
    cout << "Others             = " << oth << endl;
    return 0;
}
