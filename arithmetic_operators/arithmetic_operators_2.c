#include <stdlib.h>
#include <stdio.h>

int main()
{
    /*
    * For a complete reference to operator precedence in C this is a great reference:
    * https"//en.cppreference.com/w/c/language/operator_precedence
    */
   float result = 10 + 20 + 3 * 4;
   printf("Result of 10 + 20 + 3 * 4: %.2f\n\n", result);

   result = (10 + 20 +3) * 4;
   printf("Result of (10 + 20 +3) * 4: %.2f\n\n", result);

   result = 10 -20 + 3 * 4 / 2;
   printf("Result of 10 -20 + 3 * 4 / 2: %.2f\n\n", result);

   result = 10 - (20 + 3 * 4) / 2;
   printf("Result of 10 - (20 + 3 * 4) / 2: %2f\n\n", result);

   return EXIT_SUCCESS;
}