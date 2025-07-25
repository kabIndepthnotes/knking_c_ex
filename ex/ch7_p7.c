/* Name: ch7_p7.c */
/* Purpose:  */
/* Author:  */

/* Include Directives */
#include <stdio.h>

/* Define Directives */

/* Type Definitions */

/* External Variables */

/* Function Prototypes */

int
main(void)
{

	int num1, denom1, num2, denom2, result_num, result_denom;
	char sign;
	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d /%d %c %d /%d",&num1, &denom1,&sign, &num2, &denom2);


	switch (sign) {
		case '+':
			result_num = num1 * denom2 + num2 * denom1;
			result_denom = denom1 * denom2;
			break;
		case '-':
			result_num = num1 * denom2 - num2 * denom1;
			result_denom = denom1 * denom2;
			break;
		case '*':
			result_num = num1 * num2;
			result_denom = denom1 * denom2;
			break;
		case '/':
			result_num = num1 * denom2;
			result_denom = denom1 * num2;
			break;
		default:
			printf("error\n");
			return 1;
	}

	printf("The sum is %d/%d\n",result_num, result_denom);

	return 0;
}

/* Function Definitions */
