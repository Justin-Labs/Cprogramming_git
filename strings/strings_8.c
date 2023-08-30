#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//  when we want deep copies, use malloc and strcpy functions
int main()
{
    char name[] = "Joanna";
    char state[] = "California";

    char * name_ptr = (char *)malloc((strlen(name) + 1) * sizeof(char));
    char * state_ptr = (char *)malloc((strlen(state) + 1) * sizeof(char));

    printf("-----------ADDRESS-----------\n");
    printf("Address stored in name_ptr is: %p\n", name_ptr);
    printf("Address of name is: %p\n", name);

    printf("Address stored in state_ptr: %p\n", state_ptr);
    printf("Address of state is: %p\n", state);

    strcpy(name_ptr, name);
    strcpy(state_ptr, state);

    name[0] = 'j';
    state[0] = 'c';

    printf("Value in name: %s\n", name);
    printf("Value referenced by name_ptr: %s\n", name_ptr);
    printf("Value in state: %s\n", state);
    printf("Value referenced by state_ptr: %s\n", state_ptr);

    free(name_ptr);
    free(state_ptr);
    
    return EXIT_SUCCESS;
}