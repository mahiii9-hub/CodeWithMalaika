#include <iostream>
using namespace std;

// Template 1: Swapping two values
template <class T>
void inverse(T &x, T &y) {
    T temp = x;
    x = y;
    y = temp;
}

// Template 2: Returning negative value
template <class T>
T inverse(T x) {
    return (-x);
}

int main() {
    int i = 3, j = 5;
    
    // Calls Template 1
    inverse(i, j);
    cout << "After swap: i = " << i << ", j = " << j << endl;
    
    // Calls Template 2
    int neg = inverse(i);
    cout << "Negative of i: " << neg << endl;
    
    return 0;
}
