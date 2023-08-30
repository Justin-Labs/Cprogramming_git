#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//  when we work with char * which point to a character array, we effectively have aliases 
// of the same string. These are shallow copies on the stack.
int main()
{
    char name[] = "Joanna";
    char state[] = "California";

    char * name_ptr = name;
    char * state_ptr = state;

    printf("-----------ADDRESS-----------\n");
    printf("Address stored in name_ptr is: %p\n", name_ptr);
    printf("Address of name is: %p\n", name);

    printf("Address stored in state_ptr: %p\n", state_ptr);
    printf("Address of state is: %p\n", state);

    name[0] = 'j';
    state[0] = 'c';

    printf("Value referenced by name_ptr: %s\n", name_ptr);
    printf("Value referenced by state_ptr: %s\n", state_ptr);

    return EXIT_SUCCESS;
}