#include <stdlib.h>
#include <stdio.h>
// arrays are equvialent to pointers
int main()
{
    int student_ages[] = {13, 14, 11, 10, 12, 11};
    int * student_age_ptr = student_ages;

    printf("Student age at index 0: %d\n", student_ages[0]);
    printf("Student age at index 0: %d\n", student_age_ptr[0]);

    printf("Student age at index 5: %d\n", student_ages[5]);
    printf("Student age at index 5: %d\n", student_age_ptr[5]);

    return EXIT_SUCCESS;
}