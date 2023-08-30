#include <stdlib.h>
#include <stdio.h>
// We can invoke gcc with the -E switch, which will cause gcc to pre-process to STD out.
// We can then redirect the output of gcc into a file. We do that using the greater than
// symbol > .. So compile gcc -E preprocessor.c > preprocessor.i

// NOTE: my preprocesor output is more than 1000 lines shorter than instructors.

// the -S will do something similiar, however the instead of the preprocessor output, it
// will output the the Assembler output. And we can direct this to a file the same way
// by using the greater than symbol.. gcc -S preprocessor.c > preprocessor.s
// -S doesn't work with my compiler right now, fatal error: can't open 'preprocessor.s
// for writing: Permission denied compilation terminated.

// the -c flag makes it clear to that we would like the output  of the complier but not 
// the linker to be written out to preprocessor.o. this is the object code.
// gcc -c preprocessor.c > preprocessor.o
// NOTE: alse gave gcc.exe: fatal error: no input files

// the -o flag allows us to name the file exe we want to make.
// gcc preprocessor.c -o preprocessor.exe
// then just run it by ./preprocessor
int main()
{
    //This is a very simple command which prints "Hello World!" to screen
    printf("Hello World!\n");

    return EXIT_SUCCESS;
}