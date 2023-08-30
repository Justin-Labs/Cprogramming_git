#include <stdlib.h>
#include <stdio.h>
#include <time.h>
// introductionn of rand() found in <time.h>. 
// Please note it produces same "random" numbers. because it is picking up the same seed.
int main() 
{
    for (int i = 0; i < 5; i ++) {
        int random_num = rand();

        if (random_num % 2 ==0) {
            printf("The random number: %d is even\n", random_num);
        } else {
            printf("The random number: %d is odd\n", random_num);
        }
    }

    return EXIT_SUCCESS;
}