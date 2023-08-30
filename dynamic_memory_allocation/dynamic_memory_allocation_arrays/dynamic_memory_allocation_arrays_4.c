#include <stdlib.h>
#include <stdio.h>

int main()
{
    double * student_age_ptr = (double *)malloc(5 * sizeof(double));

    if (student_age_ptr == NULL) {
        printf("Memory not allocated! \n");

        return EXIT_FAILURE;
    }

    student_age_ptr[0] = 12.5;
    student_age_ptr[1] = 10.1;
    student_age_ptr[2] = 13.7;
    student_age_ptr[3] = 14.2;
    student_age_ptr[4] = 11.9;

    printf("ADDRESS \t VALUE \n");
    for (int i = 0; i < 5; i++) {
        printf("%p \t %lf \n", &student_age_ptr[i], student_age_ptr[i]);
    }

    free(student_age_ptr);

    return EXIT_SUCCESS;
}