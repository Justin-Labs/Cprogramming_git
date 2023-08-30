#include <stdlib.h>
#include <stdio.h>
// Unions are also a composite data type. The syntax and usage are very similar to that of 
// structs. The key difference is that unions are are extremely space efficent, although
// they achieve that space efficiency by making a very restrictive assumption about thier
// data. C will only allocate space for either the marks or the gpa, but not both.
// It can contain marks or gpa, but it can't do both simultaneouly.
int main()
{
    union Score {
        short marks;
        float gpa;
    };
    
    union Score score_1;

    printf("sizeof(Score.marks): %lu\n", sizeof(score_1.marks));
    printf("sizeof(Score.gpa): %lu\n", sizeof(score_1.gpa));
    printf("sizeof(Score): %lu\n", sizeof(score_1));

    return EXIT_SUCCESS;
}