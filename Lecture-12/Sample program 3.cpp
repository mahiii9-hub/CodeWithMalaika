#include <iostream>
using namespace std;

int main() {
    // 1. Declare a 2D array with 2 rows and 3 columns
    int matrix[2][3];
    int maxrows = 2;
    int maxcols = 3;

    
    for (int row = 0; row < maxrows; row++) {
        // The inner loop handles each column in that row
        for (int col = 0; col < maxcols; col++) {
            cout << "Please enter a value for position [" << row << ", " << col << "]: ";
            cin >> matrix[row][col];
        }
    }

    // 3. Displaying the matrix
    cout << "\nThe 2D Matrix is:" << endl;
    for (int row = 0; row < maxrows; row++) {
        for (int col = 0; col < maxcols; col++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl; 
    }

    return 0;
}
