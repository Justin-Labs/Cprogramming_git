#include <stdlib.h>
#include <stdio.h>
// register storage classs, asks compiler to try and place this variable in a register 
// rather than in a memory location. We might do this if we need this particular variable
// for a lot of fast computations. We can't be sure that C is going to be able to fit our 
// variable into a register. Its' goint to try its best, but again, not promises. So there
// is a chance that this variable is going to simple reside in a memory locaion like an 
// auto variable. We I ran debug it was a local.
// Storage class register has certain important constraints on what you can do with such a 
// variable. Most importantly, you cannot make use of the ampersand operator in order to 
// access the address of the memory location in which this variable is stored. That's because
// this variable is meant to be stored in a register, and so it will not have a memory location.
int main()
{
    register int counter;

    for (counter = 0; counter < 5; counter++) {
            printf("counter: %d\n", counter);
    }
    
    return EXIT_SUCCESS;
}