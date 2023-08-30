#include <stdlib.h>
#include <stdio.h>

int main()
{
    int response;

    printf("Please enter a multiple of 5: ");
    scanf("%d", &response);

    if (response % 5 == 0) {
        printf("The number you entered, %d, is indeed a multiple of 5!\n\n", response);
    } else {
        printf("The number you entered, %d, is not a multiple of 5:-(\n\n", response);
    }

    return EXIT_SUCCESS;
}