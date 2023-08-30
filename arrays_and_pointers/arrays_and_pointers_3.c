#include <stdlib.h>
#include <stdio.h>
// iterating over an array.
int main()
{
    int student_ages[] = {13, 14, 11, 10, 12, 11};
    int * student_age_ptr = student_ages;

    size_t len = sizeof(student_ages) / sizeof(int);

    for (int i = 0; i < len; i++) {
        printf("Student age at index %d = %d\n", i, student_ages[i]);
    }

    return EXIT_SUCCESS;
}