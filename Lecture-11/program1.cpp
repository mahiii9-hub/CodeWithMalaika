#include <stdio.h>

int main() {
    int arr[100]; 
    int z;        
    int i = 0;    

    printf("Enter positive integers (Enter -1 to stop):\n");

    do {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &z);

        
        if (z != -1) {
            arr[i] = z; 
            i++;        
        }

   
    } while (z != -1 && i < 100); 

    
    printf("\nYou entered %d numbers:\n", i);
    for (int j = 0; j < i; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}
