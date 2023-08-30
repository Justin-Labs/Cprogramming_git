#include <stdlib.h>
#include <stdio.h>
// get_grade has a problem, it returns a pointer to a stack variable. which ceases to 
// exist once program returns to the calling function.
char* get_grade(int score) {
    char grade = 'F';

    if (score >= 90) {
        grade = 'A';
    } else if (score >= 70) {
        grade = 'B';
    } else if (score >= 50) {
        grade = 'C';
    } else if (score >=30) {
        grade = 'D';
    }

    return &grade;
}

int main() 
{
    char* grade = get_grade(85);
    printf("Grade for score 85: %c\n", *grade);

    grade = get_grade(45);
    printf("Grade for score 45: %c\n", *grade);

}