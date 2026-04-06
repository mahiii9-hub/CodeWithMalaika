#include <iostream>
using namespace std;

class truck {
    char name;
public:
    truck(char cc) : name(cc) {
        cout << "inside the constructor of " << name << endl;
    }
    ~truck() {
        cout << "Inside the destructor of " << name << endl;
    }
};

// Global object
truck A('A');

void f() {
    truck C('C'); // Local object
}

void g() {
    static truck D('D'); // Static object
}

int main() {
    cout << "--- Main starts ---" << endl;
    truck B('B'); // Local object in main
    f();
    g();
    cout << "--- Main ends ---" << endl;
    return 0;
}
