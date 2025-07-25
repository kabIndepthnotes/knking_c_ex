/* Name: ch7_p5.c */
/* Purpose: Calculate the value of the a scrabble word irrespective of legality of word */
/* Author:  */

/* Include Directives */
#include <stdio.h>
#include <ctype.h>

/* Define Directives */
#define N 20

/* Type Definitions */

/* External Variables */

/* Function Prototypes */

int
main(void)
{
	char letter;
	int sum = 0;
	int i = 0;
	printf("Enter a word: ");
	while ((letter = toupper(getchar())) != '\n' && i < N) {
		switch (letter) {
			case 'U': case 'T': case 'S': case 'R': case 'O': case 'N': case 'L': case 'I': case 'E': case 'A':
				sum += 1;
				break;
			case 'D': case 'G':
				sum += 2;
				break;
			case 'P': case 'M': case 'C': case 'B':
				sum += 3;
				break;
			case 'Y': case 'W': case 'V': case 'H': case 'F':
				sum += 4;
				break;
			case 'K':
				sum += 5;
				break;
			case 'X': case 'J':
				sum += 8;
				break;
			case 'Z': case 'Q':
				sum += 10;
				break;
		}
		i++;
	}
	printf("Scrabble value: %d\n", sum);
	return 0;
}


/* Function Definitions */
