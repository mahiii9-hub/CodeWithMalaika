#include <iostream>
using namespace std;

// Defining a macro to calculate square
#define SQUARE(x) ((x) * (x))

int main() 
{
    int x;
    
    cout << "Please enter the value of x: ";
    cin >> x;
    
    // Testing the macro with different inputs
    cout << "Square of " << x << " = " << SQUARE(x) << endl;
    cout << "Square of " << x << "+2 = " << SQUARE(x + 2) << endl;
    cout << "Square of 7 = " << SQUARE(7) << endl;

    return 0;
}
