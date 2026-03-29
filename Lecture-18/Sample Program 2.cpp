#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
main()
{
    ofstream outFile;
    char outputFileName[] = "myFileOut.txt";
    char outputText[100] = "mahii here";

    outFile.open(outputFileName, ios::out);

    if (!outFile)
    {
        cout << "Can't open output file named " << outputFileName << endl;
        exit(1);
    }

    outFile << outputText;
    outFile.close();
    
    cout << "File created successfully!";
}
