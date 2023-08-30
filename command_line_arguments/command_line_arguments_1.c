#include <stdlib.h>
#include <stdio.h>

// when we exe ./a we can type additional input arguments here.
// again my compiler or cmd terminal doesn't output like instructors...
// doesn't dispaly correct values at argument indexes, instead of index 0 thru 4 it
// shows the addresses, and doesn't show the strings.
int main(int argc, char* argv[])
{
    printf("Program name: %s\n", argv[0]);

    if (argc == 1) {
        printf("No addtional command line arguments were passed into this program\n");
    } else {
        printf("Number of command line arguments: %d\n", argc);

        for (int i = 0; i < argc; i++) {
            printf("Argument at index: %d is %s\n", argv[i]);
        }
    }

    return EXIT_SUCCESS;
}