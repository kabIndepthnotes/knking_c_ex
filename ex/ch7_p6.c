/* Name: ch7_p6.c */
/* Purpose: print the value of sizeof assortment */
/* Author:   */

/* Include Directives */
#include <stdio.h>
/* Define Directives */

/* Type Definitions */

/* External Variables */

/* Function Prototypes */

int
main(void)
{

	printf("sizeof(int): %lu\n", (unsigned long) sizeof(int));
	printf("sizeof(short): %lu\n", (unsigned long) sizeof(short));
	printf("sizeof(long): %lu\n", (unsigned long) sizeof(long));
	printf("sizeof(float): %lu\n", (unsigned long) sizeof(float));
	printf("sizeof(double): %lu\n", (unsigned long) sizeof(double));
	printf("sizeof(long double): %lu\n", (unsigned long) sizeof(long double));

	return 0;
}

/* Function Definitions */
