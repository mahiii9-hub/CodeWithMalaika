#include <iostream>
using namespace std;

int main() {
    const int SIZE = 80;
    char buffer[SIZE];

    cout << "\nEnter a sentence: " << endl;
    
    // cin.getline reads the whole line including spaces
    cin.getline(buffer, SIZE);

    cout << "The sentence entered is: " << endl << buffer << endl;

    return 0;
}
