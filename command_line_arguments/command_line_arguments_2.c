#include <stdlib.h>
#include <stdio.h>
// works except for * operations... so I changed to x as input arg instead of *.
// I also tired '*', incase of shell thinking it was an operation but didn't help.
int main(int argc, char* argv[])
{
    if (argc < 4) {
        printf("Program invocation 'program_name operator operand_1 operand_2'\n");

        return EXIT_FAILURE;
    }

    float result = 0;
    char operator = argv[1][0];
    double operand_1 = atof(argv[2]);
    double operand_2 = atof(argv[3]);
    //atof short for ascii to float

    switch (operator)
    {
    case '+':
        result = operand_1 + operand_2;
        break;
    case '-':
        result = operand_1 - operand_2;
        break;
    case 'x':
        result = operand_1 * operand_2;
        break;
    case '/':
        result = operand_1 / operand_2;
        break;
    }

    printf("%.2f %c %.2f = %.2f\n", operand_1, operator, operand_2, result);

    return EXIT_SUCCESS;
}