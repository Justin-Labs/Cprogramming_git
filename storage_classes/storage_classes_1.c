#include <stdlib.h>
#include <stdio.h>

int main()
{
    
    auto int num_1 = 100;
    auto int num_2 = 1000;

    printf("Enter num_1: ");
    scanf("%d", &num_1);

    printf("Enter num_2: ");
    scanf("%d", &num_2);

    printf("\nnum_1 + num_2: %d\n", num_1 + num_2);

    return EXIT_SUCCESS;
}