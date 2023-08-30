#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num = 50;

    num += 30 / 2;
    printf("num after adding 30 / 2: %d\n\n", num);

    num -= 10 + 2;
    printf("num after subtracting 10 + 2: %d\n\n", num);

    num *= 5 - 2;
    printf("num after multiplying 5 - 2: %d\n\n", num);

    num /= 2 + 1;
    printf("num after dividing by 2 + 1: %d\n\n", num);

    return EXIT_SUCCESS;
}