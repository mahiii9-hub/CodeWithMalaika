#include <iostream>
using namespace std;

// Macro definition (can cause side-effects)
#define MAX_MACRO(A, B) ((A) > (B) ? (A) : (B))

// Inline function (safer and type-checked)
inline int max_inline(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 23, y = 45;

    // Using Macro with increment (Problematic)
    // y will be incremented twice because it's evaluated twice in the macro
    int i = MAX_MACRO(x, y++); 
    cout << "Macro result: x=" << x << " y=" << y << endl;

    x = 23; y = 45; // Resetting values

    // Using Inline Function (Safe)
    // y is incremented only once as expected
    i = max_inline(x, y++);
    cout << "Inline result: x=" << x << " y=" << y << endl;

    return 0;
}
