#include <stdlib.h>     //Example purposes only.
#include <stdio.h>
// This will not work: illegal storage class on file-scoped variable. 
// Global variables have the storage class static. 
auto int num_1 = 100;
auto int num_2 = 1000;

int main()
{
    
    
    printf("Enter num_1: ");
    scanf("%d", &num_1);

    printf("Enter num_2: ");
    scanf("%d", &num_2);

    printf("\nnum_1 + num_2: %d\n", num_1 + num_2);

    return EXIT_SUCCESS;
}