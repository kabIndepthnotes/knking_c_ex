/* ch7_p10.c */
/* Name: ch10_p10.c */
/* Author: kab@indepthnotes.com */
/* Donate! indepthnotes.com/donate */

#include <stdio.h>

int
main(void)
{
	printf("Enter a sentence: ");
	char cur = getchar();
	int vowels = 0;
	while (cur != '\n') {
		switch (cur) {
			case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':
				vowels++;
				break;
			
		}
		cur = getchar();
	}
	
	printf("Your sentence contains %d vowels.", vowels);
	return 0;
}

