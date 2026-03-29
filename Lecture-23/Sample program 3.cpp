#include <iostream>
using namespace std;

#define PI 3.14159
// Macro with arguments: always use extra parentheses for safety
#define CIRCLEAREA(X) (PI * (X) * (X))

int main() 
{
    float radius;
    
    cout << "Enter radius of the circle: ";
    cin >> radius;
    
    // Macro is replaced by (3.14159 * (radius) * (radius)) before compilation
    cout << "Area of circle is: " << CIRCLEAREA(radius) << endl;

    return 0;
}
