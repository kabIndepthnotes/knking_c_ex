/* Name: ch2_p7.c */
/* Purpose:  */
/* Author: */

#include <stdio.h>

int
main(void)
{
	int x;
	printf("Enter dollar amount: ");
	scanf("%d",&x);
	int b20 = x/20;
	x -= b20*20;

	int b10 = x/10;
	x -= b10*10;

	int b5 = x/5;
	x -= b5*5;


	printf("$20 bills: %d\n", b20);
	printf("$10 bills: %d\n",b10);
	printf("$5 bills: %d\n",b5);
	printf("$1 bills: %d\n",x);

	return 0;
}
