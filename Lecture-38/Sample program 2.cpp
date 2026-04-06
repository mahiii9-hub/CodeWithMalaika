#include <iostream>
#include <iomanip>

using namespace std;

// Forward declarations for manipulators used in the class
ostream& spaceFirst(ostream& output) { return output << setw(10); }
ostream& spaceBetween(ostream& output) { return output << setw(4); }
ostream& line(ostream& output) { return output << "-"; }
ostream& star(ostream& output) { return output << "*"; }

class Matrix {
    int numRows, numCols;
    float elements[3][3];
public:
    Matrix(int rows = 0, int cols = 0) : numRows(rows), numCols(cols) {}

    friend istream& operator >> (istream& input, Matrix& m);
    friend ostream& operator << (ostream& output, Matrix& m);
};

istream& operator >> (istream& input, Matrix& m) {
    for (int i = 0; i < m.numRows; i++)
        for (int j = 0; j < m.numCols; j++)
            input >> m.elements[i][j];
    return input;
}

ostream& operator << (ostream& output, Matrix& m) {
    for (int i = 0; i < 10; i++) output << star;
    output << "\nDisplaying the Matrix:\n";
    for (int i = 0; i < m.numRows; i++) {
        output << spaceFirst;
        for (int j = 0; j < m.numCols; j++) {
            output << m.elements[i][j] << spaceBetween;
        }
        output << "\n";
    }
    return output;
}

int main() {
    Matrix m(3, 3);
    cout << "Enter elements for 3x3 matrix: " << endl;
    cin >> m;
    cout << m;
    return 0;
}
