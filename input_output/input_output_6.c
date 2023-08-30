#include <stdlib.h>
#include <stdio.h>

int main()
{
    char name [10];
    char city [12];
    int age;

    fputs("What is your name? ", stdout);
    fgets(name, 10, stdin);

    fputs("Where do you live? ", stdout);
    fgets(city, 12, stdin);

    fputs("How old are you? ", stdout);
    fscanf(stdin, "%d", &age);

    fputs("Welcome\n", stdout);
    fprintf(stdout, "Hello %d year old %s from %s!\n\n", age, name, city);

    return EXIT_SUCCESS;
}