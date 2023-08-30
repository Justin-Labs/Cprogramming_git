#include <stdlib.h>
#include <stdio.h>
// char style switch, please remember is case sensitive. switch uses ==, so be exact.
int main()
{
    char response;

    printf("Hello, pick a country using the numbers below: \n");
    printf("A.China \nB.India \nC.Japan \nD.South Korea \nCountry? :");
    scanf("%c", &response);

    switch (response)   //switch statements require variable to be of type int or char in C.
    {                   // or use an enum instead of variable.
    case 'A':
        printf("Say \"Ni hao\" for hello in Chinese\n");
        break;  // End of case 1. If break wasn't here, it would run though next case
                // and all subsequent cases including default if no break statements occur.
    
    case 'B':
        printf("Say \"Namaste\" for hello in Hindi\n");
        break;  // End of case 2
    
    case 'C':
        printf("Say \"Konnichiwa\" for hello in Japanese\n");
        break; // End of case 3

    case 'D':
        printf("Say \"Annyeohghaseyo\" for hello in Korean\n");
        break; // End of case 4

    default:
        printf("Sorry, it seems the language you are looking for is currently"
            " not available in our library yet.\n");
    }

    return EXIT_SUCCESS;
}