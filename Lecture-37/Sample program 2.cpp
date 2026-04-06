#include <iostream>
using namespace std;

class Matrix {
private:
    int numRows, numCols;
    float elements[30][30];

public:
    Matrix(int rows = 0, int cols = 0) {
        numRows = rows;
        numCols = cols;
        for(int i=0; i<numRows; i++)
            for(int j=0; j<numCols; j++)
                elements[i][j] = 0;
    }

    void getMatrix() {
        for(int i=0; i<numRows; i++)
            for(int j=0; j<numCols; j++)
                cin >> elements[i][j];
    }

    void displayMatrix() {
        for(int i=0; i<numRows; i++) {
            cout << "| ";
            for(int j=0; j<numCols; j++)
                cout << elements[i][j] << " ";
            cout << "|" << endl;
        }
    }
};

int main() {
    Matrix m(2, 2);
    cout << "Enter 4 elements for 2x2 matrix:\n";
    m.getMatrix();
    cout << "The Matrix is:\n";
    m.displayMatrix();
    return 0;
}
