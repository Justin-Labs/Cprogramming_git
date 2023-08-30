#include <stdlib.h>
#include <stdio.h>

int main() // Our main function has a total of three scopes.
{   // start main() scope
    {   // start of middle scope we'll call outer scope
        int outer_var = 100;
        {       //start of most inner scope 
            int inner_var = 200;

            printf("(inner block) printing outer_var: %d \n", outer_var);
            printf("(inner block) printing inner_var: %d \n", inner_var);
        }       //end of most inner scope
    }   // end of middle scope we called outer scope

    return EXIT_SUCCESS;
}   // end of main() scope