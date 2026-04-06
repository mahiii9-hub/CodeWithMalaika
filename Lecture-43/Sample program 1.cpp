#include <iostream>
#include <iomanip>

using namespace std;

class Matrix {
private:
    int numRows, numCols;
    double **elements; // Dynamic memory for 2D array

public:
    // Default and Parameterized Constructor
    Matrix(int r = 0, int c = 0) : numRows(r), numCols(c) {
        if (r > 0 && c > 0) {
            elements = new double*[numRows];
            for (int i = 0; i < numRows; i++) {
                elements[i] = new double[numCols];
                for (int j = 0; j < numCols; j++) elements[i][j] = 0.0;
            }
        } else {
            elements = NULL;
        }
    }

    // Destructor to free dynamic memory
    ~Matrix() {
        if (elements != NULL) {
            for (int i = 0; i < numRows; i++) delete[] elements[i];
            delete[] elements;
        }
    }

    // Overloading + operator for Matrix + Matrix
    Matrix operator+(const Matrix& m) const {
        Matrix result(numRows, numCols);
        for (int i = 0; i < numRows; i++)
            for (int j = 0; j < numCols; j++)
                result.elements[i][j] = this->elements[i][j] + m.elements[i][j];
        return result;
    }

    // Friend functions for Input/Output
    friend istream& operator>>(istream& is, Matrix& m);
    friend ostream& operator<<(ostream& os, const Matrix& m);
};

istream& operator>>(istream& is, Matrix& m) {
    cout << "Enter elements for " << m.numRows << "x" << m.numCols << " matrix:" << endl;
    for (int i = 0; i < m.numRows; i++)
        for (int j = 0; j < m.numCols; j++)
            is >> m.elements[i][j];
    return is;
}

ostream& operator<<(ostream& os, const Matrix& m) {
    for (int i = 0; i < m.numRows; i++) {
        for (int j = 0; j < m.numCols; j++) {
            os << setw(8) << m.elements[i][j];
        }
        os << endl;
    }
    return os;
}

int main() {
    Matrix m1(2, 2), m2(2, 2);
    
    cin >> m1;
    cin >> m2;

    Matrix m3 = m1 + m2;

    cout << "\nMatrix 1:\n" << m1;
    cout << "\nMatrix 2:\n" << m2;
    cout << "\nResult of Addition (M1 + M2):\n" << m3;

    return 0;
}
