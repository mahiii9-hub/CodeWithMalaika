#include <iostream>
using namespace std;

void staticVarFun();
void nonstaticVarFun();

int main() {
    cout << "Calling the function which is using static variable" << endl;
    for (int i = 0; i < 10; i++)
        staticVarFun();

    cout << "\nCalling the function which is using automatic variable" << endl;
    for (int i = 0; i < 10; i++)
        nonstaticVarFun();

    return 0;
}

void staticVarFun() {
    static int i = 0; // Initialized only once
    i++;
    cout << "The value of i is: " << i << endl;
}

void nonstaticVarFun() {
    int i = 0; // Re-initialized every time function is called
    i++;
    cout << "The value of i is: " << i << endl;
}
