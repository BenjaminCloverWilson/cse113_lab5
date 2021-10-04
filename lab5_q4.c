/**
 * @file lab5_q4.c
 * @brief Zodiac calander
 * @details User inputs a valid date (1 C.E. to 2200 C.E.)
 * and the zodiac sign based on the Tropical cusps is printed out.
 * The program can also give information on zodiacs.
 *
 * Lab 5
 * 
 * @author Benjamin Wilson
 * @date Fall 2021
 * @bug Probably, but none I've found by plugging in dates
 * @todo Maybe make the print outs smoother (80 characters)
 */

#include <stdio.h>

struct date_t
{
    unsigned short month;
    unsigned short day;
    unsigned short year;
} birth;

enum month
{
    JAN = 1, FEB, MAR, APR, MAY, JUNE,
    JUL, AUG, SEPT, OCT, NOV, DEC
};

int main()
{
    /* Hardcoded test of code */
    /**
    birth.month = 8;
    birth.day = 1;
    birth.year = 2002;
    */

    /* Variables for the menu input */
    int menu_input = 1;
    char menu;

    printf("\n\n-----Welcome to Benjamin Wilson's Zodiac Calander-----\n\n\n");

    /* Menu print outs and input */
    while(menu_input >= 1)
    {
        printf("\nD: Enter a date for zodiac sign\n");
        printf("I: Information\n");
        printf("Q: Quit\n");
        printf("Enter choice: ");

        scanf(" %c", &menu);
        
        /* Switch based on menu choice */
        switch(menu)
        {
        
        /* Returns zodiac sign with valid input */
        case 'D':
        case 'd':
            /* Takes user input of date */
            /* printf() split for display purposes */
            printf("\nPlease enter your birth date (mm/dd/yyyy) after year");
            printf(" 1 C.E. and before year 2200 C.E.: ");
            scanf("%hu/%hu/%hu", &birth.month, &birth.day, &birth.year);

            /* Ensures valid month and year */
            if(birth.month < 1 || birth.month > 12 || birth.day < 1 || birth.year < 1 || birth.year > 2200)
            {
                printf("Invalid month or year\n");

            } else {
                /* Determines if inputted year is leap year */
                int leap;

                /* Determines if birth.year is a leap year */
                if ((birth.year % 4 == 0 && birth.year % 100 != 0) || birth.year % 400 == 0)
                {
                    printf("You entered a leap year!\n\n");
                    leap = 1;

                } else

                {
                    printf("You did NOT enter a leap year!\n");
                    leap = 0;
       
                }

                /* Prints zodiac based on month and day */
                switch(birth.month)
                {
                case JAN:
                    if (birth.day >= 1 && birth.day <= 20)
                    {
                        printf("January %hu, Capricorn\n", birth.day);
                    } else if (birth.day >= 21 && birth.day <= 31)
                    {
                        printf("January %hu, Aquarius\n", birth.day);
                    } else
                    {
                        printf("Invalid day date\n");
                    }
                    break;
                case FEB:
                    if (birth.day >= 1 && birth.day <= 19)
                    {
                        printf("February %hu, Aquarius\n", birth.day);
                    } else if (birth.day >= 20 && birth.day <= 29 && leap == 1)
                    {
                        printf("February %hu, Pisces\n", birth.day);
                    } else if (birth.day >= 20 && birth.day <= 28 && leap == 0)
                    {
                        printf("February %hu, Pisces\n", birth.day);
                    } else
                    {
                        printf("Invalid day date\n");
                    }
                    break;
                case MAR:
                    if (birth.day >= 1 && birth.day <= 21)
                    {
                        printf("March %hu, Pisces\n", birth.day);
                    } else if (birth.day >= 22 && birth.day <= 31)
                    {
                        printf("March %hu, Aries\n", birth.day);
                    } else
                    {
                        printf("Invalid day date\n");
                    }
                    break;
                case APR:
                    if (birth.day >= 1 && birth.day <= 20)
                    {
                        printf("April %hu, Aries\n", birth.day);
                    } else if (birth.day >= 21 && birth.day <= 30)
                    {
                        printf("March %hu, Taurus\n", birth.day);
                    } else
                    {
                        printf("Invalid day date\n");
                    }
                    break;
                case MAY:
                    if (birth.day >= 1 && birth.day <= 21)
                    {
                        printf("May %hu, Taures\n", birth.day);
                    } else if (birth.day >= 22 && birth.day <= 31)
                    {
                        printf("May %hu, Gemini\n", birth.day);
                    } else
                    {
                        printf("Invalid day date\n");
                    }
                    break;
                case JUNE:
                    if (birth.day >= 1 && birth.day <= 21)
                    {
                        printf("June %hu, Gemini\n", birth.day);
                    } else if (birth.day >= 22 && birth.day <= 30)
                    {
                        printf("June %hu, Cancer\n", birth.day);
                    } else
                    {
                        printf("Invalid day date\n");
                    }
                    break;
                case JUL:
                    if (birth.day >= 1 && birth.day <= 23)
                    {
                        printf("July %hu, Cancer\n", birth.day);
                    } else if (birth.day >= 24 && birth.day <= 31)
                    {
                        printf("July %hu, Leo\n", birth.day);
                    } else
                    {
                        printf("Invalid day date\n");
                    }
                    break;
                case AUG:
                    if (birth.day >= 1 && birth.day <= 23)
                    {
                        printf("August %hu, Leo\n", birth.day);
                    } else if (birth.day >= 24 && birth.day <= 31)
                    {
                        printf("August %hu, Virgo\n", birth.day);
                    } else
                    {
                        printf("Invalid day date\n");
                    }
                    break;
                case SEPT:
                    if (birth.day >= 1 && birth.day <= 23)
                    {
                        printf("September %hu, Virgo\n", birth.day);
                    } else if (birth.day >= 24 && birth.day <= 30)
                    {
                        printf("September %hu, Libra\n", birth.day);
                    } else
                    {
                        printf("Invalid day date\n");
                    }
                    break;
                case OCT:
                    if (birth.day >= 1 && birth.day <= 23)
                    {
                        printf("October %hu, Libra\n", birth.day);
                    } else if (birth.day >= 24 && birth.day <= 31)
                    {
                        printf("October %hu, Scorpio\n", birth.day);
                    } else
                    {
                        printf("Invalid day date\n");
                    }
                    break;
                case NOV:
                    if (birth.day >= 1 && birth.day <= 22)
                    {
                        printf("November %hu, Scorpio\n", birth.day);
                    } else if (birth.day >= 23 && birth.day <= 30)
                    {
                        printf("November %hu, Sagittarius\n", birth.day);
                    } else
                    {
                        printf("Invalid day date\n");
                    }
                    break;
                case DEC:
                    if (birth.day >= 1 && birth.day <= 22)
                    {
                        printf("December %hu, Sagittarius\n", birth.day);
                    } else if (birth.day >= 23 && birth.day <= 31)
                    {
                        printf("December %hu, Capricorn\n", birth.day);
                    } else
                    {
                        printf("Invalid day date\n");
                    }
                    break;
                default:
                    printf("Invalid date\n");
                }

                break;
            }
            break;
            
        /* Prints information on zodiacs */
        case 'i':
        case 'I':
            printf("\nThis calander is based on the Tropical Zodiac system.\n");
            /* Split for display purposes */
            printf("It does account for leap years, however, there is varying\n");
            printf("information on leap years and the dates of the cusps for\n");
            printf("each sign. Luckily, the tropical dates account for leap years.\n");
            printf("The year limit from 1 C.E. to 2200 C.E. is based on the\n");
            printf("Gregorian calander.\n");
            printf("For more info on the zodiac calander:\n");
            printf("https://en.wikipedia.org/wiki/Zodiac#Twelve_signs\n\n");

            break;
        
        /* Terminates program */
        case 'q':
        case 'Q':
            printf("\nThe stars must be misaligned, have a nice day :)\n\n");
            return 0;

            break;
        
        /* Invalid menu option */
        default:
            printf("\nInvalid input, please read the stars and try again...\n\n");
        }
    
    /* Maintains while loop compilation */
    menu_input++;
    }
    
}