#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
main()
{
    char name[50];    // used to read name of employee from file
    char sal[10];     // used to read salary of employee from file
    char dept[30];    // used to read dept of employee from file
    ifstream inFile;  // Handle for the input file

    char inputFileName[] = "myfile.txt"; 

    inFile.open(inputFileName);

    if (!inFile)
    {
    	
        cout << "Can't open input file named " << inputFileName << endl;
        exit(1);
    }

    while (!inFile.eof())
    {
        inFile >> name >> sal >> dept;
        cout << name << "\t" << sal << "\t" << dept << endl;
    }

    inFile.close();
}
