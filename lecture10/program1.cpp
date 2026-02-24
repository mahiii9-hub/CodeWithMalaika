#include <stdio.h>

// Function that accepts a value //call by value
void modifyValue(int num) {
    num = num + 100; 
    printf("Value inside function: %d\n", num);
}

int main() {
    int x = 10;
    
    printf("Value of x before function call: %d\n", x);
    
    modifyValue(x); 
    
    printf("Value of x after function call: %d\n", x); // x remains 10
    
    return 0;
}
