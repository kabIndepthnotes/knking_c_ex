/* Name: ch7_p3.c */
/* Purpose: translates an alphabetic phone number nito numerical form */
/* Author:  */

/* Copyright notice of sum2 */
/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* Include Directives */
#include <stdio.h>

/* Define Directives */

/* Type Definitions */

/* External Variables */

/* Function Prototypes */


int main(void)
{
	double n, sum = 0;

	printf("This program sums a series of integers.\n");
	printf("Enter float numbers. (0 to terminate): ");

	scanf("%lf", &n);
	while (n != 0)
	{
		sum += n;
		scanf("%lf", &n);
	}
	printf("The sum is: %lf\n", sum);

	return 0;
}

/* Function Definitions */
