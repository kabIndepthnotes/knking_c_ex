/* ch7_p13.c */
/* include_directives */
#include <stdio.h>

int
main(void)
{
	/* initialise_objects */
	char ch;
	int sum = 0;
	int cword_len = 0;
	int words = 0;
	float avg;

	/* get_input */
	printf("Enter a sentence:");
	while ((ch = getchar()) != '\n') {
		if (ch == ' ') {
			sum += cword_len;
			cword_len = 0;
			words++;
		}
		else {
			cword_len++;
		}
	}
	sum += cword_len;
	words++;
	avg = (float)sum/(float)words;

	/* print */
	printf("Average word length: %.1f\n", avg);

	return 0;
}


