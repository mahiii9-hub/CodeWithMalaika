#include <iostream>
using namespace std;

int main() {
   
    int AimanAge = 0; 
    int MalaikaAge = 0;

   
    cout << "Enter Aiman's age: ";
    cin >> AimanAge;

    
    cout << "Enter Malaika's age: ";
    cin >> MalaikaAge;

   
    if (AimanAge > MalaikaAge) {
        cout << "Aiman is older than Malaika" << endl;
    }
    
    
    if (MalaikaAge > AimanAge) {
        cout << "Malaika is older than Aiman" << endl;
    }

    return 0;
}
