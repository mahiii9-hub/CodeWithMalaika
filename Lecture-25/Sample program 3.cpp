#include <iostream>
using namespace std;

int main() {
    int lineno; // Declared outside to ensure it is accessible after loop
    
    for (lineno = 0; lineno < 3; lineno++) {
        int temp = 22; // Local to this loop block
        cout << "This is line number " << lineno << " and temp is " << temp << endl;
    }

    // lineno is still accessible here
    if (lineno == 3) {
        cout << "Loop finished at line: " << lineno << endl;
    }
    
    // Note: 'temp' cannot be accessed here; it would cause an error.
    return 0;
}
