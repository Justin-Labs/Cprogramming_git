#include <stdlib.h>
#include <stdio.h>

int main()
{
    int quantity;
    float price;

    printf("Enter the quantity you purchased: /n");
    scanf("%d", &quantity);

    printf("Enter the price you paid: \n");
    scanf("%f", &price);

    printf("--------------------\n");

    printf("Your total bill amoount is: %0.2f\n", price * quantity);

    return EXIT_SUCCESS;
}