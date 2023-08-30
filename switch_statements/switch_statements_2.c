#include <stdlib.h>
#include <stdio.h>

int main()
{
    char operator;
    float num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("\nEnter two operands: ");
    scanf("%f %f", &num1, &num2);

    switch (operator)
    {
    case '+':
        printf("%f + %f = %.2f\n", num1, num2, num1 + num2);
        break;

    case '-':
        printf("%f - %f = %.2f\n", num1, num2, num1 - num2);
        break;

    case '*':
        printf("%f * %f = %.2f\n", num1, num2, num1 * num2);
        break;

    case '/':
        printf("%f / %f = %.2f\n", num1, num2, num1 / num2);
        break;
    
    default:
        printf("Please enter a valid operator.\n");
    }

    return EXIT_SUCCESS;
}