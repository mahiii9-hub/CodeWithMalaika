#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main() {
    char s1[] = "This is a sentence";
    char *s2;

    // Allocate memory: length of s1 + 1 for the null terminator '\0'
    s2 = (char *) malloc(strlen(s1) + 1);

    // Verify allocation
    if (s2 == NULL) {
        cout << "Error on malloc" << endl;
        return 1;
    }

    // Copy contents of s1 into dynamically allocated memory s2
    strcpy(s2, s1);

    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;

    // Always free dynamic memory
    free(s2);
    s2 = NULL;

    return 0;
}
