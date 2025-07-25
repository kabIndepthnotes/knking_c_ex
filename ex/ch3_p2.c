/* Name: ch3_p2.c */
/* Purpose:  */
/* Author: */

#include <stdio.h>

int
main(void)
{

	int item;
	float price;
	int m,d,y;

	printf("Enter item number: ");
	(void) scanf("%d", &item);
	printf("Enter unit price: ");
	(void) scanf("%f", &price);
	printf("Enter a purchase date (mm/dd/yyy): ");
	(void) scanf("%d / %d / %d", &m, &d, &y);
	printf("\n");
	printf("Item\tUnit\t\tPurchase\n\tPrice\t\tDate\n");
	printf("%d\t$%7.2f\t%.2d/%.2d/%.4d\n", item, price, d, m, y); /* TODO understand the magic of why one \t works here and not 2 \t */
	printf("%d\t$%-7.2f\t%-.2d/%-.2d/%-.4d\n", item, price, d, m, y); /* TODO understand the magic of why one \t works here and not 2 \t */
	


	return 0;
}
