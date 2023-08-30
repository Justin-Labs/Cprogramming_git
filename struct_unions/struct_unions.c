#include <stdlib.h>
#include <stdio.h>
// structs can be thought of as precursors to classes form the world of object-oriented
// programming. They allow the user to combine together many different variables into a 
// a single composite data type.
int main()
{
    struct Student {
        int id;
        char name[20];
        float math_score;
        float english_score;
    } student_1;

    printf("sizeof(Student.id): %lu\n", sizeof(student_1.id));
    printf("sizeof(Student.name): %lu\n", sizeof(student_1.name));
    printf("sizeof(Student.math_score): %lu\n", sizeof(student_1.math_score));
    printf("sizeof(Student.english_score): %lu\n", sizeof(student_1.english_score));
    printf("sizeof(Student): %lu\n", sizeof(student_1));
    
    return EXIT_SUCCESS;
}