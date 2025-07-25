/* Name: undefinedbehav.c */
/* Purpose: show the a[i++] = 5 trick */
/* Author: kab@indepthnotes.com */
/* Donate! indepthnotes.com/donate */

#include <stdio.h>

int
main(void)
{
	int grade;
	printf("Enter numerical grade:");
	scanf("%d", &grade);
	if (grade < 0 || grade > 100) {
		printf("error: invalid grade\n");
		return 0;
	}
	grade = grade / 10;
	switch (grade) {
		case 0: case 1: case 2: case 3: case 4: case 5: printf("F"); break;
		case 6: printf("D"); break;
		case 7: printf("C"); break;
		case 8: printf("B"); break;
		case 9: case 10: printf("A"); break;
		default: printf("error!");
	}
	printf("\n");
	return 0;
}
