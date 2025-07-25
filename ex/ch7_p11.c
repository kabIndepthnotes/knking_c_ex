/* ch7_p11.c */
/* Name: */
/* Author: kab@indepthnotes.com */
/* Donate! indepthnotes.com/donate */

#include <stdio.h>

int
main(void)
{
	/* init_objects */
	char current;
	char first[20];
	char last[20];

	printf("Enter a first and last name:");
	/* remove_spaces */
	while ((current = getchar()) == ' ') {
		;
	}

	/* get_first_name */
	for (int i = 0; current != ' ' && i <= 20; i++) {
		first[i] = current;
		current = getchar();
		/* putchar(current); */
	}

	/* remove_spaces */
	while ((current = getchar()) == ' ') {
		;
	}

	/* get_last_name */
	for (int i = 0; current != '\n' && i <= 20; i++) {
		last[i] = current;
		current = getchar();
	}

	/* print */
	printf("%s, %c.\n", last,first[0]);

	return 0;
}

