#include <stdlib.h>
#include <stdio.h>

int main() 
{
    for (int i = 0; i <= 6; i++) {
        printf("Before break: %d\n", i);
        if (4 == i) {
            break;
        }
        
        printf("After break: %d\n", i);
    }
    
    return EXIT_SUCCESS;
}