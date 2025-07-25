/* Name: ch2_p5.c */
/* Purpose:  */
/* Author: */

#include <stdio.h>

int
main(void)
{

	float x;
	printf("Enter the value for x: ");
	scanf("%f", &x);
	printf("%f\n",3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6);
	return 0;
}
