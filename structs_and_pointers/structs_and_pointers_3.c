#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// working with a pointer to a struct which has fields which are themselves pointers
int main()
{
    struct Student {
        int* id;
        char* name;
        float* math_score;
        float* english_score;
    };

    struct Student* student_ptr = (struct Student*)malloc(sizeof(struct Student));
    
    student_ptr->id = (int *)malloc(sizeof(int));
    student_ptr->name = (char *)calloc(20, sizeof(char));
    student_ptr->math_score = (float *)malloc(sizeof(float));
    student_ptr->english_score = (float *)malloc(sizeof(float));

    *student_ptr->id = 111;
    strcpy(student_ptr->name, "Janice");
    *student_ptr->math_score = 67.78;
    *student_ptr->english_score = 64.23;

    printf("Student id: %d\n", *student_ptr->id);
    printf("Student name: %s\n", student_ptr->name);
    printf("Student math score: %.2f\n", *student_ptr->math_score);
    printf("Student english score: %.2f\n", *student_ptr->english_score);

    free(student_ptr->id);
    free(student_ptr->name);
    free(student_ptr->math_score);
    free(student_ptr->english_score);

    free(student_ptr);

    return EXIT_SUCCESS;
}