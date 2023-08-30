#include <stdlib.h>
#include <stdio.h>
// not a ternary program, but it does the same thing with more coding.
int main()
{
    float first_number;
    float second_number;

    printf("Please enter the first number: ");
    scanf("%f", &first_number);

    printf("Please enter the second number: ");
    scanf("%f", &second_number);
    //example of ternary operator. two bits of syntax are ? and :
    //Before the question mark, we have a condition and that condition is going to be
    //evaluated to either true or false. If that condion which comes before the question
    //mark evalueate to true, then whatever somes immediately after the question mark will
    //be the return value from this operator. If on the other hand, the condition
    //evaluates to false, then control passes to right after the colon, and that in
    //turn becomes a return value.
    float max_value= first_number > second_number ? first_number : second_number;

    printf("The maximum of %.2f and %.2f is: %.2f\n", first_number, second_number, max_value);
    
    return EXIT_SUCCESS;
}