#include <stdlib.h>
#include <stdio.h>
// iterating over an array via the pointer.
int main()
{
    int student_ages[] = {13, 14, 11, 10, 12, 11};
    int * student_age_ptr = student_ages;
    // Note that we did not change the sizeof(student_ages) to student_age_ptr
    // this is the one area where they are not equivalent.
    size_t len = sizeof(student_ages) / sizeof(int);

    for (int i = 0; i < len; i++) {
        printf("Student age at index %d = %d\n", i, student_age_ptr[i]);
    }

    return EXIT_SUCCESS;
}