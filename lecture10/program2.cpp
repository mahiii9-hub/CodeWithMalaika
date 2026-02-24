#include <stdio.h>

// Function that accepts a pointer (address)
void modifyReference(int *num) {
    *num = *num + 100; 
    printf("Value inside function: %d\n", *num);
}

int main() {
    int x = 10;
    
    printf("Value of x before function call: %d\n", x);
    
    modifyReference(&x); 
    
    printf("Value of x after function call: %d\n", x); // x is now 110
    
    return 0;
}
