/* Name: ch2_p4.c */
/* Purpose:  */
/* Author: */

#include <stdio.h>

int
main(void)
{

	float pretax;
	printf("Enter the amount in dollars and cents: ");
	scanf("%f",&pretax);
	printf("The amount with 5%% tax added is %.2f\n",pretax*1.05);
	return 0;
}
