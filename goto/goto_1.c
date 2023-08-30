#include <stdlib.h>
#include <stdio.h>
// using goto statements are considered anti pattern and doesn't really get you anything
// that you can't achieve using other constructs.
int main()
{
    int number;
        // this example is ungainly and technically the -1 on first prompt doesn't exit.
    printf("Pleases enter a number to print out its multiplication tables (-1 to exit): ");
    scanf("%d", &number);

    goto multiplication_tables;

    printf("This code here will NOT be executed!\n");

    multiplication_tables:
    for (int i =1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    printf("Please enter another number (-1 to exit): ");
    scanf("%d", &number);

    if (number == -1) {
        return EXIT_SUCCESS;
    }

    goto multiplication_tables;

    return EXIT_SUCCESS;
}