#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
main()
{
    ifstream inFile;
    char inputFileName[] = "test.txt";
    const int MAX_CHAR_TO_READ = 100;
    char completeLineText[MAX_CHAR_TO_READ];

    inFile.open(inputFileName);

    if (!inFile)
    {
        cout << "Can't open input file named " << inputFileName << endl;
        exit(1);
    }

    while (!inFile.eof())
    {
        inFile.getline(completeLineText, MAX_CHAR_TO_READ);
        cout << completeLineText << endl;
    }

    inFile.close();
}
