#include <iostream>
using namespace std;


double circleArea(double radius) {
    
    return (3.1415926 * radius * radius);
}

int main() {
    double outerRadius, innerRadius, ringArea;

    cout << "Enter the radius of the outer (big) circle: ";
    cin >> outerRadius;
    cout << "Enter the radius of the inner (small) circle: ";
    cin >> innerRadius;

    
    ringArea = circleArea(outerRadius) - circleArea(innerRadius);

    cout << "\nThe area of the ring is: " << ringArea << endl;

    return 0;
}
