#include <iostream>
#include <ctype.h> 

using namespace std;


void convertToUppercase(char *sPtr) {
    while (*sPtr != '\0') { 
        if (islower(*sPtr)) { 
            *sPtr = toupper(*sPtr); 
        }
        sPtr++; 
    }
}

int main() {
    char phrase[] = "hello world! 123";

    cout << "Original string: " << phrase << endl;

    // Function call
    convertToUppercase(phrase);

    cout << "Uppercase string: " << phrase << endl;

    return 0;
}
