#include <iostream>
using namespace std;

// Overloaded functions for different data types
void print(int i) {
    cout << "The value of the integer is: " << i << endl;
}

void print(double d) {
    cout << "The value of the double is: " << d << endl;
}

void print(const char* s) {
    cout << "The value of the string is: " << s << endl;
}

int main() {
    int i = 100;
    double d = 123.12;
    const char* s = "This is a test string";

    // Compiler automatically chooses the correct version
    print(i);
    print(d);
    print(s);

    return 0;
}
