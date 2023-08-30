#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// a struct whose fields are pointers
int main()
{
    struct Student {
        int* id;
        char* name;
        float* math_score;
        float* english_score;
    };

    struct Student student;
// student is a local variable, that's why we use dot operator.
// if you have a struct whose fields are pointers, then allocating memory and freeing it
// are your responsiblity. storing them locally would cause segmentation faults.
    student.id = (int *)malloc(sizeof(int));
    student.name = (char *)calloc(20, sizeof(char)); 
    student.math_score = (float *)malloc(sizeof(float));
    student.english_score = (float *)malloc(sizeof(float));
    
    *student.id =111;
    strcpy(student.name, "Janice"); // already a pointer, that's why we don't dereference.
    *student.math_score = 67.78;
    *student.english_score = 64.23;
// note the use of the dot operator, used when working with stuct whose fields are pointers.
    printf("Student id: %d\n", *student.id);
    printf("Student name: %s\n", student.name); // already pointer.
    printf("Student math: %.2f\n", *student.math_score);
    printf("Student english: %.2f\n", *student.english_score);
// it's not correct to invoke free on student as a whole here. that's why it's done like this.
// since its a local variable, however these elements in it we put on the heap.
    free(student.id);
    free(student.name);
    free(student.math_score);
    free(student.english_score);

    return EXIT_SUCCESS;
    
}