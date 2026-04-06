#include <iostream>
#include <cstdlib> // For system("PAUSE")

using namespace std;

// Gives System Beep
ostream& bell(ostream& output) {
    return output << '\a';
}

// Gives Tab
ostream& tab(ostream& output) {
    return output << '\t';
}

// Takes the cursor to next line
ostream& endLine(ostream& output) {
    return output << '\n' << flush;
}

int main() {
    cout << "Virtual " << tab << "University" << bell << endLine;
    system("PAUSE");
    return 0;
}
