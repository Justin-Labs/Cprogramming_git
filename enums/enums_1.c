#include <stdlib.h>
#include <stdio.h>
// C allows us to custimize the values that we associate with each of these constants
// For instance we've tweaked the definitionof our enum so that Sunday is initialized
// to be 1.
int main()
{
    enum Weekday {
        Sunday = 1,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };

    enum Weekday day_1 = Sunday;
    enum Weekday day_2 = Saturday;

    printf("Value for Sunday: %d\n", day_1);
    printf("Value for Saturday: %d\n", day_2);

    return EXIT_SUCCESS;
}