#include <stdlib.h>
#include <stdio.h>
// student_ages array is just a pointer to a contiguous block of memory.
int main()
{
    int student_ages[] = {13, 14, 11, 10, 12, 11};

    int * student_age_ptr = student_ages;

    printf("Address of student_age (integer): %p\n", student_ages);
    printf("Address of student_ages (integer array): %p\n", student_age_ptr);
    
    return EXIT_SUCCESS;
}