#include <iostream>
using namespace std;

// In a union, all members share the same memory space
union intOrChar {
    char c[4];
    int x;
};

int main() {
    intOrChar u1;
    
    // Assigning a character (ASCII value 97) to the integer variable
    u1.x = 'a'; 

    cout << "Value of x: " << u1.x << endl;
    cout << "Value in char array c[0]: " << u1.c[0] << endl;

    // Bit shifting logic: Shifting by 8 bits (one byte) and adding 'b'
    u1.x *= 256; 
    u1.x += 'b'; 

    cout << "\nAfter shifting and adding 'b':" << endl;
    cout << "New value of x: " << u1.x << endl;
    cout << "Char array now holds: " << u1.c[1] << " and " << u1.c[0] << endl;

    return 0;
}
