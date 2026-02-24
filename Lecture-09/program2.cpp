#include <stdio.h>


int isEven(int number);

int main() {
    int input;

    printf("Ek number enter karein: ");
    scanf("%d", &input);

    
    if (isEven(input)) {
        printf("%d ek even number hai.\n", input);
    } else {
        printf("%d ek odd number hai.\n", input);
    }

    return 0;
}


int isEven(int number) {
    
    if (number % 2 == 0) {
        return 1; // True
    } else {
        return 0; // False
    }
}
