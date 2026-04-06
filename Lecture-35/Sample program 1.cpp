#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    // Brackets around (x == y ? " is " : " is not ") are necessary 
    // because << has higher precedence than ? :
    cout << x << (x == y ? " is " : " is not ") << " equal to " << y << endl;

    return 0;
}
