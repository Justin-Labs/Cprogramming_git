#include <stdlib.h>
#include <stdio.h>
// https://gcc.gnu.org/onlinedocs/gcc/Pragmas.html
//#pragma gcc diagnostic ignored "-Wmain-return-type"
// Note current gcc doesn't even give the expected warning...
void main()
{
    printf("main() has a void return type!\n");
}