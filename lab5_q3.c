/**
 * @file lab5_q3.c
 * @brief Finds the Euclidean and Manhattan distances between 2 points
 * @details First, user input is taken in as (x, y) for 2 points. Then
 * function calls find  the manhattan and euclidean distances of the 2
 * points as doubles.
 *
 * Lab 5
 *
 * @author Benjamin Wilson
 * @date Fall 2021
 * @bug none
 * @todo none
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point 
{
    double x;
    double y;

} p1, p2;


/* Function Prototypes */
double euclidean(struct point p1, struct point p2);
double manhattan(struct point p1, struct point p2);

int main()
{
    /* Hardcoded test values of functions */
    //p1.x = 4.0;        p1.y = 5.0;
    //p2.x = 6.0;        p2.y = 2.0;

    /* User-input of coordinate points */
    printf("Enter (x, y) coordinates for point 1 as a decimal: ");
    scanf("(%lf, %lf)", &p1.x, &p1.y);

    printf("Enter (x, y) coordinates for point 2 as a decimal: ");
    scanf(" (%lf, %lf)", &p2.x, &p2.y);

    /* Calculates distances */
    double euc = euclidean(p1, p2);
    double man = manhattan(p1, p2);

    /* Prints distances */
    printf("\nEuclidean Distance: %lf\n", euc);
    printf("Manhattan Distance: %lf\n\n", man);

    return 0;
}

/** Calculates Euclidean distance between 2 (x, y) points
 * @param p1 structure that contains point 1's coordinates
 * @param p2 structure that contains point 2's coordinates
 * @result The euclidean distance between point 1 and 2,
 * basically Pythgorean Theorem of point 1 and 2's components
 */
double euclidean(struct point p1, struct point p2)
{
    double euc;

    euc = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));

    return euc;
}

/** Calculates Manhattan distance between 2 (x, y) points
 * @param p1 structure that contains point 1's coordinates
 * @param p2 structure that contains point 2's coordinates
 * @result The Manhattan distance between point 1 and 2
 */
double manhattan(struct point p1, struct point p2)
{
    double man;

    man = abs(p1.x - p2.x) + abs(p1.y - p2.y);

    return man;
}