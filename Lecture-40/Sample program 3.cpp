#include <iostream>
using namespace std;

class Column {
    int size;
public:
    Column(int s) : size(s) { cout << "Column created" << endl; }
    ~Column() { cout << "Column destroyed" << endl; }
    void showSize() { cout << "Column size is: " << size << endl; }
};

class Row {
    int size;
    Column col;
public:
    Row(int rSize, int cSize) : col(cSize), size(rSize) {
        cout << "Row created" << endl;
    }
    ~Row() { cout << "Row destroyed" << endl; }
    void showSize() {
        col.showSize();
        cout << "Row size is: " << size << endl;
    }
};

class Matrix {
    Row row;
public:
    Matrix(int rSize, int cSize) : row(rSize, cSize) {
        cout << "Matrix created" << endl;
    }
    ~Matrix() { cout << "Matrix destroyed" << endl; }
    void display() { row.showSize(); }
};

int main() {
    Matrix m(3, 4);
    m.display();
    return 0;
}
