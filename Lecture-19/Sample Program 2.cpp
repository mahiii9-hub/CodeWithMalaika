#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream rFile;
  
    rFile.open("my-File.txt", ios::in | ios::out | ios::trunc); 
    
    if(!rFile) {
        cout << "Error opening file" << endl;
        return 1;
    }
    for (char rChar = 'A'; rChar <= 'Z'; rChar++) {
        rFile << rChar;
    }

    char rChar;
   
    rFile.seekg(8, ios::beg);
    rFile >> rChar;
    cout << "The 8th character is: " << rChar << endl;

    
    rFile.seekg(-16, ios::end);
    rFile >> rChar;
    cout << "The 16th character from the end is: " << rChar << endl;

    rFile.close();
    return 0;
}
