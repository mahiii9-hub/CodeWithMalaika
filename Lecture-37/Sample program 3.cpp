#include <iostream>
using namespace std;

class Matrix {
private:
    float elements[30][30];
    int numRows, numCols;

public:
    Matrix(int r = 0, int c = 0) : numRows(r), numCols(c) {}

    friend istream& operator >> (istream& input, Matrix& m);
    friend ostream& operator << (ostream& output, const Matrix& m);
};

istream& operator >> (istream& input, Matrix& m) {
    for (int i = 0; i < m.numRows; i++)
        for (int j = 0; j < m.numCols; j++)
            input >> m.elements[i][j];
    return input;
}

ostream& operator << (ostream& output, const Matrix& m) {
    for (int i = 0; i < m.numRows; i++) {
        for (int j = 0; j < m.numCols; j++)
            output << m.elements[i][j] << "\t";
        output << endl;
    }
    return output;
}

int main() {
    Matrix matrix(3, 3);
    cout << "Enter a 3x3 matrix (9 numbers):\n";
    cin >> matrix;
    cout << "\nEntered Matrix is:\n" << matrix;
    return 0;
}
