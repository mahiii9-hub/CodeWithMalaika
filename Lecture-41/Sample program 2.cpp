#include <iostream>
using namespace std;

template <class T, class U>
void larger(T val1, U val2) {
    if (val1 > val2)
        cout << "First is larger" << endl;
    else
        cout << "First is not larger" << endl;
}

int main() {
    larger(2.1, 9);    // double aur int
    larger('G', 'A');  // char aur char
    return 0;
}
