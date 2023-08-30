#include <stdlib.h>
#include <stdio.h>
// no problems with intializing the vairable another_ptr by directly assigning into it the
// value of num_ptr.
int main()
{
    int num = 221;
    int *num_ptr = &num;
    int *another_ptr = num_ptr; // * here is not the dereferencing operator, this is a 
    // type of declaration for the variable another_ptr.

    printf("---------Address--------\n");
    printf("The address of num is: %p\n", &num);
    printf("Address stored in num_ptr: %p\n", num_ptr);
    printf("Address stroed in another_ptr: %p\n", another_ptr);

    printf("\n");
    
    printf("---------Value----------\n");
    printf("Value in num is: %d\n", num);
    printf("Value pointer to by num_ptr is: %d\n", *num_ptr);
    printf("Value pointed to by another_ptr is: %d\n", *another_ptr);

    return EXIT_SUCCESS;
}
// When we have a star in a type declaraion, that merely indicates the type. Here, on line
// 9, this is a type pointer to integer. On the other hand, when we ahve a star without
// a type declaraion, such as on line 21 or line 22, that star is the dereferencing 
// operator. So again on line 9, what we have is a variable of type int*.