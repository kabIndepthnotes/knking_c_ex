/* Name: ch5_p5.c */
/* Purpose: print amount of taxable income */
/* Author:   */

#include <stdio.h>

int
main(void)
{

	float income, tax;
	income = tax =  0;
	printf("Enter the amount of taxable income: \n");
	scanf("%f", &income);

	if (income < 750){
		tax = 0.01f * income;
	} else if (income < 2250) {
		tax = 7.50f + ( 0.02f * (income - 750) );
	} else if (income < 3750) {
		tax = 37.50f + ( 0.03f * (income - 2250) );
	} else if (income < 5250) {
		tax = 82.50f + ( 0.04f * (income - 3750) );
	} else if (income < 7000) {
		tax = 142.50f + ( 0.05f * (income - 5250) );
	} else {
		tax = 230.00f + ( 0.05f * (income - 7000) );
	}
	printf("Tax due is : %f\n", tax);

	return 0;
}
