#include <iostream>
using namespace std;

template <class T>
T larger(T x, T y) {
    if (x > y)
        return x;
    else
        return y;
}

int main() {
    int i = 7, j = 12;
    double x = 4.5, y = 1.3;
    
    cout << "The larger of " << i << " and " << j << " is " << larger(i, j) << endl;
    cout << "The larger of " << x << " and " << y << " is " << larger(x, y) << endl;
    
    return 0;
}
