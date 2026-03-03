#include <iostream>
using namespace std;

int main() {
    int matrix[2][3]; // 2 rows and 3 columns
    int maxrows = 2, maxcols = 3;

    // Nested loops to enter values
    for (int row = 0; row < maxrows; row++) {
        for (int col = 0; col < maxcols; col++) {
            cout << "Enter value for [" << row << "][" << col << "]: ";
            cin >> matrix[row][col]; // Fills columns of a row one by one
        }
    }

   
    cout << "\nThe Matrix is:" << endl;
    for (int row = 0; row < maxrows; row++) {
        for (int col = 0; col < maxcols; col++) {
            cout << matrix[row][col] << "\t";
        }
        cout << endl; 
    }

    return 0;
}
