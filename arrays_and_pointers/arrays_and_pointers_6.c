#include <stdlib.h>
#include <stdio.h>

int main()
{
    float student_gpas[] = {4.0, 3.7, 3.2, 3.6, 3.9, 3.1};
    char student_grades[] = {'A', 'B', 'C', 'B', 'A', 'C'};

    float * student_gpa_ptr = student_gpas;
    char * student_grade_ptr = student_grades;

    printf("-----------Address of the array----------\n");
    printf("Address of student_gpas (float array): %p\n", student_gpas);
    printf("Address of student_grades (char array): %p\n", student_grades);

    printf("------Pointer holds address of array-------\n");
    printf("Address of student_gpas (via pointer): %p\n", student_gpa_ptr);
    printf("Address of student_grades (via pointer): %p\n", student_grade_ptr);

    return EXIT_SUCCESS;
}