/* Name: ch3_p4.c */
/* Purpose:  */
/* Author: */

#include <stdio.h>

int
main(void)
{

	int num1, num2, num3;
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	(void) scanf(" (%d )%d -%d",&num1, &num2, &num3);
	printf("You entered %.3d.%.3d.%.4d\n", num1, num2, num3);

	return 0;
}
