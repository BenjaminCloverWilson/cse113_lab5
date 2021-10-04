/**
 * @file array_struct.c
 * @brief Interpreting test subject information in a structure
 * @details Calculates the mins and maxs of all test subjects'
 * ages and heights. Also finds the average. And, assigns char
 * IDs to the subjects.
 *
 * Lab 5
 * 
 * @author Benjamin Wilson
 * @date Fall 2021
 * @bug None
 * @todo None
 */

#include "array_struct.h"
#include <stdio.h>


int main(void)
{

	struct data_t data[SIZE];

	/* data initialization calls */
	init_array(data, 0, 'A', 23, 74);
	init_array(data, 1, 'B', 22, 64);
	init_array(data, 2, 'C', 19, 68);
	init_array(data, 3, 'D', 20, 76);
	init_array(data, 4, 'E', 22, 62);

	/* Prints the min and max ages and heights */
	printf("\nThe minimum age is: %d\n", data[min_age(data)].age);
	printf("The minimum height is: %d\n", data[min_height(data)].height);
	printf("The maximum age is: %d\n", data[max_age(data)].age);
	printf("The maximum height is: %d\n", data[max_height(data)].height);

	/* Prints the average age and height of subjects */
	printf("\nThe average age is: %lf\n", avg_age(data));
	printf("The average height is: %lf\n", avg_height(data));

	return 0;
}

/** Places subject info into their structures in the overall data[]
 * @param data[] The array that will store different subjects' hardcoded
 * information in their respective data_t structures.
 * @param index The index of the subject's structure in the overall structure
 * storing array.
 * @param id The single character letter ID of the subject.
 * @param years The age of the subject
 * @param inches The height of the subject
 */
void init_array(struct data_t data[], int index, char id, int years, int inches)
{
	/**Assigns values of members and the identity of a subject's structure
	 * in the larger data[].
	 */
	data[index].age = years;
	data[index].height = inches;
	data[index].subject = id;

	/* Prints out all the information of the subjects */
	print_struct(data, index);
}

/** Goes through each structure's age member to find the smallest one
 * and reports which structure/subject this age member belonged to.
 * @param data[] The array that contains the different subjects or
 * structures to be compared for a minimum age member.
 * @return The index value of the individual structure/subject that
 * housed the found minimum age member within the larger data_t
 * structure array.
 */
int min_age(struct data_t data[])
{
	int i;
	int min = 10000;
	int min_index = -1;

	/* Finds the structure with the minimum age member */
	for(i = 0; i < SIZE; i++)
	{
		if(data[i].age < min)
		{
			min = data[i].age;
			min_index = i;
		}
	}

	return min_index;
}

/** Goes through each structure's height member to find the smallest one
 * and reports which structure/subject this height member belonged to.
 * @param data[] The array that contains the different subjects or
 * structures to be compared for a minimum height member.
 * @return The index value of the individual structure/subject that
 * housed the found minimum height member within the larger data_t
 * structure array.
 */
int min_height(struct data_t data[])
{
	int i;
	int min = 10000;
	int min_index = -1;

	/* Finds the structure with the minimum height member */
	for(i = 0; i < SIZE; i++)
	{
		if(data[i].height < min)
		{
			min = data[i].height;
			min_index = i;
		}
	}

	return min_index;
}

/** Goes through each structure's age member to find the largest one
 * and reports which structure/subject this age member belonged to.
 * @param data[] The array that contains the different subjects or
 * structures to be compared for a maximum age member.
 * @return The index value of the individual structure/subject that
 * housed the found maximum age member within the larger data_t
 * structure array.
 */
int max_age(struct data_t data[])
{
	int i;
	int max = -1;
	int max_index = -1;

	/* Finds the structure with the maximum age member */
	for(i = 0; i < SIZE; i++)
	{
		if(data[i].age > max)
		{
			max = data[i].age;
			max_index = i;
		}
	}

	return max_index;
}

/** Goes through each structure's height member to find the largest one
 * and reports which structure/subject this height member belonged to.
 * @param data[] The array that contains the different subjects or
 * structures to be compared for a maximum height member.
 * @return The index value of the individual structure/subject that
 * housed the found maximum height member within the larger data_t
 * structure array.
 */
int max_height(struct data_t data[])
{
	int i;
	int max = -1;
	int max_index = -1;

	/* Finds the structure with the maximum height member */
	for(i = 0; i < SIZE; i++)
	{
		if(data[i].height > max)
		{
			max = data[i].height;
			max_index = i;
		}
	}

	return max_index;
}

/** Calculates the sum of all the age members of each subject/structure
 * within the larger inputted data_t array that houses these structures,
 * then divides by the number (size) of individual structures/subjects within the
 * larger data_t array.
 * @param data[] The array that contains the different subjects or
 * structures that will have their ages averaged.
 * @result The sum of the members' ages divided by the number of subjects examined:
 * the average age
 */
double avg_age(struct data_t data[])
{
	int i;
	double sum = 0;
	double avg;

	/* Finds the sum of all the age members */
	for(i = 0; i < SIZE; i++)
	{
		sum += (double)data[i].age;
	}

	/* Calculates the average of the age members */
	avg = sum / SIZE;

	return avg;
}

/** Calculates the sum of all the height members of each subject/structure
 * within the larger inputted data_t array that houses these structures,
 * then divides by the number (size) of individual structures/subjects within the
 * larger data_t array.
 * @param data[] The array that contains the different subjects or
 * structures that will have their heights averaged.
 * @result The sum of the members' heights divided by the number of subjects examined:
 * the average age
 */
double avg_height(struct data_t data[])
{
	int i;
	double sum = 0;
	double avg;

	/* Finds the sum of all the height members */
	for(i = 0; i < SIZE; i++)
	{
		sum += (double)data[i].height;
	}

	/* Calculates the average of the height members */
	avg = sum / SIZE;

	return avg;
}

/** Prints the requested individual structure's members
 * based on their index value within the larger structure array.
 * @param data[] The array that contains all the different subjects
 * and, therefore, the individual structure desired to be printed.
 * @param index The identity/index of the individual structure
 * within the larger structure array.
 */
void print_struct(struct data_t data[], int index)
{
	printf("\nSubject Letter ID: %c\n", data[index].subject);
	printf("Subject (%c) Age: %d\n", data[index].subject, data[index].age);
	printf("Subject (%c) Height: %d\n", data[index].subject, data[index].height);
}


