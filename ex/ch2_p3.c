/* Name: ch2_p2.c */
/* Purpose:  */
/* Author: */

#include <stdio.h>

int
main(void)
{

	float radius = 0.0f;
	/* char ptr = &radius; */
	printf("enter a number: ");
	scanf("%f",&radius); // unsafe
	printf("\n");
	printf("%f\n",4.0f/3.0f * radius * radius *radius);

	return 0;
}
