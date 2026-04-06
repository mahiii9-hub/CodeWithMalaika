#include <iostream>
using namespace std;

template <class T, class U>
T reverse_val(U x) {
    return (-x);
}

int main() {
    double amount = -8.8;
    
    // Force return type to double, input is int
    cout << reverse_val<double, int>(amount) << endl;
    
    // Force return type to int, input is double
    cout << reverse_val<int, double>(amount) << endl;
    
    return 0;
}
