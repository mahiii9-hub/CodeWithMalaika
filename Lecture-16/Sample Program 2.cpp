#include<iostream>
using namespace std;
int main()
{
    int multi[5][10];
    int *ptr;
    
    ptr = *multi; 

    /* Initialize the array elements */
    for(int i=0; i < 5; i++)
    {
        for(int j=0; j < 10; j++)
        {
            multi[i][j] = i * j;
        }
    }

    /* Array manipulation using indexing */
    cout << "\n Array manipulated using indexing is: \n";
    for(int i=0; i < 5; i++)
    {
        for(int j=0; j < 10; j++)
        {
            cout << multi[i][j] << '\t';
        }
        cout << '\n';
    }

    /* Array manipulation using pointer */
    cout << "\n Array manipulated using pointer is: \n";
    // 5 * 10 = 50 elements total
    for(int k=0; k < 50; k++, ptr++) 
    {
        cout << *ptr << '\t';
        
        // Optional: New line after every 10 elements for better readability
        if((k + 1) % 10 == 0) cout << endl;
    }

    return 0;
}
