#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num = 10;
    char ch = 'j'; /* ASCII value is 106*/

    printf("sizeof(num): %lu\n", sizeof(int));
    printf("sizeof(ch): %lu\n", sizeof(char));

    printf("\nImplicit type conversion performed\n\n");

    float float_result = num + ch;

    printf("sizeof(float_result): %lu\n", sizeof(float_result));
    printf("float_result: %.2f\n", float_result);

    return EXIT_SUCCESS;
}