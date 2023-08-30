#include <stdlib.h>
#include <stdio.h>

int main()
{
    int response;

    printf("Hello, pick a country using the numbers below: \n");
    printf("1.China \n2.India \n3.Japan \n4.South Korea \nCountry? :");
    scanf("%d", &response);

    switch (response)   //switch statements require variable to be of type int or char in C.
    {                   // or use an enum instead of variable.
    case 1:
        printf("Say \"Ni hao\" for hello in Chinese\n");
        break;  // End of case 1. If break wasn't here, it would run though next case
                // and all subsequent cases including default if no break statements occur.
    
    case 2:
        printf("Say \"Namaste\" for hello in Hindi\n");
        break;  // End of case 2
    
    case 3:
        printf("Say \"Konnichiwa\" for hello in Japanese\n");
        break; // End of case 3

    case 4:
        printf("Say \"Annyeohghaseyo\" for hello in Korean\n");
        break; // End of case 4

    default:
        printf("Sorry, it seems the language you are looking for is currently"
            " not available in our library yet.\n");
    }

    return EXIT_SUCCESS;
}