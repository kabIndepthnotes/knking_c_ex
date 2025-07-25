/* Name: ch2_p8.c */
/* Purpose:  */
/* Author: */

#include <stdio.h>

int
main(void)
{

	float loan, r, monthly;
	printf("Enter amount of loan: ");
	scanf("%f",&loan);

	printf("Enter amount of interest rate: ");
	scanf("%f",&r);

	printf("Enter amount of monthly payment: ");
	scanf("%f",&monthly);

	float balance = loan;
	balance = balance * (1 + r/1200);
	balance = balance - monthly;
	printf("Balance remaining after first payment: %.2f\n", balance);

	balance = balance * (1 + r/1200);
	balance = balance - monthly;

	printf("Balance remaining after second payment: %.2f\n", balance);

	balance = balance * (1 + r/1200);
	balance = balance - monthly;

	printf("Balance remaining after third payment: %.2f\n", balance);

	return 0;
}
