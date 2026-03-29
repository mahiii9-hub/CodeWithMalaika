#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
using namespace std;
main()
{
    ifstream inFile;
    char inputFileName[] = "salin.txt";
    ofstream outFile;
    char outputFileName[] = "salout.txt";
    
    const int MAX_CHAR_TO_READ = 100;
    char completeLineText[MAX_CHAR_TO_READ];
    char *tokenPtr;
    int salary, totalSalary = 0;

    inFile.open(inputFileName);
    outFile.open(outputFileName);

    if (!inFile || !outFile)
    {
        cout << "Error opening files!" << endl;
        exit(1);
    }

    while (!inFile.eof())
    {
        inFile.getline(completeLineText, MAX_CHAR_TO_READ);
        if(strlen(completeLineText) > 0) 
        {
            tokenPtr = strtok(completeLineText, " "); // Get Name
            tokenPtr = strtok(NULL, " ");             // Get Salary
            
            if(tokenPtr != NULL) {
                salary = atoi(tokenPtr);
                totalSalary += salary;
            }
        }
    }

    outFile << "The total salary = " << totalSalary;
    
    cout << "Total salary calculated and saved to salout.txt" << endl;

    inFile.close();
    outFile.close();
}
