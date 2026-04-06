#include <iostream>

using namespace std;

int main() {
    int x = 77;

    // Enable the showbase flag
    cout.setf(ios::showbase);

    // Display in Octal (Base 8)
    cout.setf(ios::oct, ios::basefield);
    cout << x << endl; // Displays with a leading 0

    // Display in Hexadecimal (Base 16)
    cout.setf(ios::hex, ios::basefield);
    cout << x << endl; // Displays with 0x prefix

    // Display in Decimal (Base 10)
    cout.setf(ios::dec, ios::basefield);
    cout << x << endl;

    return 0;
}
