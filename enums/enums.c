#include <stdlib.h>
#include <stdio.h>
// enum is short for enumerated type, which allows us to define predefined constant values
// where each of those values has a name. And those names together consitiute an enum type.
int main()
{
    enum Weekday {
        Sunday,
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