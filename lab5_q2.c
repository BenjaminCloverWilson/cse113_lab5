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
} c;

int main()
{
    int i;

    for(i = 0; i < 7; i++)
    {
        switch(i)
        {
            case 0:
                c = RED;
                printf("RED: %d\n", c);
                break;
            case 1:
                c = ORANGE;
                printf("ORANGE: %d\n", c);
                break;
            case 2:
                c = YELLOW;
                printf("YELLOW: %d\n", c);
                break;
            case 3:
                c = GREEN;
                printf("GREEN: %d\n", c);
                break;
            case 4:
                c = BLUE;
                printf("BLUE: %d\n", c);
                break;
            case 5:
                c = INDIGO;
                printf("INDIGO: %d\n", c);
                break;
            case 6:
                c = VIOLET;
                printf("VIOLET: %d\n", c);
                break;
            default:
                printf("AHHH, I'm color blind\n");
        }
    }

    return 0;
}