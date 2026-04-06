#include <iostream>
#include <cstring>
using namespace std;

// A big structure
struct bigone {
    int serno;
    char text[1000];
} bo = {123, "This is a BIG structure"};

// Function prototypes
void valfunc(bigone v1);               // Call by value
void ptrfunc(const bigone *p1);        // Call by pointer
void reffunc(const bigone &r1);        // Call by reference

int main() {
    valfunc(bo);      // Passing the variable itself
    ptrfunc(&bo);     // Passing the address
    reffunc(bo);      // Passing a reference

    return 0;
}

// Pass by value
void valfunc(bigone v1) {
    cout << "\n[Value] " << v1.serno;
    cout << "\n[Value] " << v1.text << endl;
}

// Pass by pointer
void ptrfunc(const bigone *p1) {
    cout << "\n[Pointer] " << p1->serno;
    cout << "\n[Pointer] " << p1->text << endl;
}

// Pass by reference
void reffunc(const bigone &r1) {
    cout << "\n[Reference] " << r1.serno;
    cout << "\n[Reference] " << r1.text << endl;
}
