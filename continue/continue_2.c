#include <stdlib.h>
#include <stdio.h>
// continue used to skip over specific elements that do not require processing 
int main()
{
    char grades[] = {'A', 'B', 'D', 'F', 'C', 'B', 'A'};

    size_t grades_len = sizeof(grades) / sizeof(grades[0]);

    printf("Here are the passing grade for students:\n");

    for (int i = 0; i < grades_len; i++) {
        if (grades[i] == 'F') {
            continue;
        }

        printf("Passing grade: %c\n", grades[i]);
    }

    return EXIT_SUCCESS;
}