#include <iostream>
using namespace std;

int main() {
    char letter = 'A';        // Ek character variable
    char *ptr = &letter;     

    cout << "Value of character: " << *ptr << endl;
    
    .
    cout << "Address stored in pointer: " << (void*)ptr << endl;

    return 0;
}
