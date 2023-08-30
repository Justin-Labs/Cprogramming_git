#include <stdlib.h>
#include <stdio.h>

int main() 
{
    for (int i = 0; i <= 6; i++) {
        if (4 == i) {
            break;
        }
        
        printf("%d\n", i);
    }
    
    return EXIT_SUCCESS;
}