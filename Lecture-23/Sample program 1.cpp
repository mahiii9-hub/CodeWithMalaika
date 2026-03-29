#include <iostream> // Header file without .h for modern compilers
using namespace std;

#define PI 3.1415926 // Defining PI as a symbolic constant

int main() // Using 'int main' instead of just 'main'
{
    int radius = 5;
    float area;
    
    // Calculating area using the defined constant PI
    area = PI * radius * radius;
    
    cout << "Area of circle with radius " << radius << " = " << area << endl;

    return 0; // Return statement for int main
}
