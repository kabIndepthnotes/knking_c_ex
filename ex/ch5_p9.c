/* Name: ch5_p8.c */
/* Purpose: find which of 2 dates come earlier */
/* Author:   */

#include <stdio.h>

int
main(void)
{

	int d1, m1, y1, d2, m2, y2;
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d /%d /%d", &d1, &m1, &y1);

	printf("Enter second date (mm/dd/yy): ");
	scanf("%d /%d /%d", &d2, &m2, &y2);


	if (y1 < 100){
		if (y1 > 24){ // 19th centuary
			y1 += 1900;
		} else{
			y1 += 2000;
		}
	}

	if (y2 < 100){
		if (y2 > 24){ // 19th centuary
			y2 += 1900;
		} else{
			y2 += 2000;
		}
	}

	

	if (y1 > y2) {
		printf("%d/%d/%d is earlier than %d/%d/%d \n", d2, m2, y2, d1, m1, y1);
		return 0;
	} else if (y1 < y2) {
		printf("%d/%d/%d is earlier than %d/%d/%d \n", d1, m1, y1, d2, m2, y2);
		return 0;
	}

	/* both years are equal */
	if (m1 > m2) {
		printf("%d/%d/%d is earlier than %d/%d/%d \n", d2, m2, y2, d1, m1, y1);
		return 0;
	} else if (m1 < m2) {
		printf("%d/%d/%d is earlier than %d/%d/%d \n", d1, m1, y1, d2, m2, y2);
		return 0;
	}

	/* both months are equal */
	if (d1 > d2) {
		printf("%d/%d/%d is earlier than %d/%d/%d \n", d2, m2, y2, d1, m1, y1);
		return 0;
	} else if (d1 < d2) {
		printf("%d/%d/%d is earlier than %d/%d/%d \n", d1, m1, y1, d2, m2, y2);
		return 0;
	} else {
		printf("Both dates are exactly the same!\n");
	}
	

	return 0;
}
