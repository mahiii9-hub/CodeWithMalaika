#include <iostream>
using namespace std;

int main() {
    int data[2][2] = {{5, 10}, {15, 20}};
    int sum = 0;

    // Manipulation: Adding all elements
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum += data[i][j];
        }
    }

    cout << "Total Sum of Array Elements: " << sum << endl;
    return 0;
}
