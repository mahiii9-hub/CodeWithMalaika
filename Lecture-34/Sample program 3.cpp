#include <iostream>
#include <cstring>
using namespace std;

class IntArray {
private:
    int length;
    int *aray;

public:
    IntArray(int len) {
        if (len > 0) {
            length = len;
            aray = new int[len];
            memset(aray, 0, sizeof(int) * len);
        } else {
            length = 0;
            aray = nullptr;
        }
    }

    int getLength() const { return length; }

    // Overloading subscript operator []
    int& operator[](int index) {
        static int dummy = 0;
        if (index >= 0 && index < length) {
            return aray[index];
        } else {
            cout << "\nError: index " << index << " out of range." << endl;
            return dummy;
        }
    }

    ~IntArray() {
        delete[] aray;
    }
};

int main() {
    IntArray numbers(10);

    // Using [] as lvalue (to assign values)
    for (int i = 0; i < 10; i++) {
        numbers[i] = i * 2;
    }

    // Using [] as rvalue (to read values)
    cout << "Array contents: ";
    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }

    // Checking out of range
    numbers[15] = 100; 

    return 0;
}
