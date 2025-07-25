/* Name: ch7_p4.c */
/* Purpose: translates an alphabetic phone number into numberic form */
/* Author:  */

/* Include Directives */
#include <stdio.h>

/* Define Directives */
#define N 20

/* Type Definitions */

/* External Variables */

/* Function Prototypes */

int
main(void)
{
	char letter;
	char digits[N]; //foresight
	char digit;
	int i = 0;
	printf("Enter phone number: ");
	while ((letter = getchar()) != '\n' && i < N) {
		digit = letter;
		switch (letter) {
			case '2': case 'A': case 'B': case 'C':
				digit = '2';
				break;
			case '3': case 'D': case 'E': case 'F':
				digit = '3';
				break;
			case '4': case 'G': case 'H': case 'I':
				digit = '4';
				break;
			case '5': case 'J': case 'K': case 'L':
				digit = '5';
				break;
			case '6': case 'M': case 'N': case 'O':
				digit = '6';
				break;
			case '7': case 'P': case 'R': case 'S':
				digit = '7';
				break;
			case '8': case 'T': case 'U': case 'V':
				digit = '8';
				break;
			case '9': case 'W': case 'X': case 'Y':
				digit = '9';
				break;
		}
		digits[i] = digit;
		i++;
	}
	/* add null char */
	i++;
	digits[i] = '\n';
	
	for (int j = 0; j < N; j++) {
		printf("%c", digits[j]);
	}
	

	return 0;
}

/* Function Definitions */
