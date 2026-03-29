#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Part 1: Writing to file
    ofstream out("test.txt"); 
    if (!out) {
        cout << "Cannot open file for writing" << endl;
        return 1;
    }
    out << 100 << " " << 123.12 << " " << 'a';
    out.close();

    // Part 2: Reading from file
    int i;
    float f;
    char ch;
    ifstream in("test.txt");
    if (!in) {
        cout << "Cannot open file for reading" << endl;
        return 1;
    }
    in >> i >> f >> ch;
    cout << "Data from file: " << i << " " << f << " " << ch << endl;
    in.close();

    return 0;
}
