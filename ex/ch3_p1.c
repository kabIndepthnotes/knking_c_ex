/* Name: ch3_p1.c */
/* Purpose:  */
/* Author: */

#include <stdio.h>

int
main(void)
{

	int m,d,y;
	printf("Enter a date (mm/dd/yyy): ");
	(void) scanf("%d / %d / %d",&m,&d,&y);

	printf("You entered the date %4.4d%2.2d%2.2d\n",y,m,d);

	return 0;
}
