/**
 * @file lab5_q2.c
 * @brief Working with enumerations
 * @details Declaring only 3 members of an enumeration and letting the
 * compiler do the rest of the work. Then, printing out the color name
 * with their associated value.
 *
 * Lab 5
 * 
 * @author Benjamin Wilson
 * @date Fall 2021
 * @bug None
 * @todo None
 */

#include <stdio.h>

enum color
{
    RED = 18,
    ORANGE,
    YELLOW = 5,
    GREEN,
    BLUE,
    INDIGO = 14,
    VIOLET
};

int main()
{
    printf("\nRED: %d\n", RED);
    printf("ORANGE: %d\n", ORANGE);
    printf("YELLOW: %d\n", YELLOW);
    printf("GREEN: %d\n", GREEN);
    printf("BLUE: %d\n", BLUE);
    printf("INDIGO: %d\n", INDIGO);
    printf("VIOLET: %d\n\n", VIOLET);

    return 0;
}
