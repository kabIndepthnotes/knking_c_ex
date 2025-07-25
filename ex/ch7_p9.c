/* Name: ch7_p9.c */
/* Author: kab@indepthnotes.com */
/* Donate! indepthnotes.com/donate */

#include <stdio.h>

int
main(void)
{
	int hour, minute;
	char mer;
	printf("Enter a 12-hour time: ");
	scanf("%d : %d %c", &hour, &minute, &mer);
	if ((mer == 'p' || mer == 'P') && hour != 12) {
			hour += 12;
	}
	printf("Equivalent 24-hour time: %d:%d\n", hour, minute);
	return 0;
}
