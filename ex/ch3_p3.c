/* Name: ch3_p3.c */
/* Purpose:  */
/* Author: */

#include <stdio.h>

int
main(void)
{

	int gs1,group, publisher_code, item, check;

	printf("Enter ISBN :");
	(void) scanf("%d-%d-%d-%d-%d", &gs1, &group, &publisher_code, &item, &check);
	printf("GS1: %d\n", gs1);
	printf("Group identifier: %d \n", group);
	printf("Publisher code: %d \n", publisher_code);
	printf("Item number: %d \n", item);
	printf("Check digit: %d \n", check);
	return 0;
}
