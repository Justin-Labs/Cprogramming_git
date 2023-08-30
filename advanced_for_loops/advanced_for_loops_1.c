#include <stdlib.h>
#include <stdio.h>

int main()
{       // remember use , for inbetween multiple variables and ; when switching to condition/s
        for (int i = 0;  i < 50; i++) {
            if (i % 10 == 0){
            printf("%d is a multiple of 10\n", i);
            } else if (i % 5 == 0) {
                printf("%d is a multiple of 5 but not a multiple of 10\n", i);
            }
    }

    return EXIT_SUCCESS;
}