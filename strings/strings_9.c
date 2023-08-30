#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// introduction of strcat, that lets us append strings. looks for null terminating character
// to start adding in, then will add a new terminating character for us.
// strncat related and adds third input argument for length, used if worried strings
// might not have terminating character.
int main()
{
    char name[] = "Joanna";
    char state[] = "California";
    // we use calloc here, because strcat relies on the memory being zeroed out.
    // +2 for the space we add and the terminating character.
    char* name_state_ptr = (char *)calloc((strlen(name) + strlen(state) + 2), sizeof(char));

    strcat(name_state_ptr, name);
    strcat(name_state_ptr, " ");
    strcat(name_state_ptr, state);

    printf("Value in name: %s \n", name);
    printf("Value in state: %s \n", state);
    printf("Value referenced by name_state_ptr: %s \n", name_state_ptr);

    free(name_state_ptr);

    return EXIT_SUCCESS;
}