#include <stdlib.h>
#include <stdio.h>
#include <time.h>
// the srand makes it a little more random.
int main() 
{
    srand(time(NULL));
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