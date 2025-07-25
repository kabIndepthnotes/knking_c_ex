/* ch7_p14.c */
/* include_directives */
#include <math.h>
#include <stdio.h>

int
main(void)
{
	/* initialise_objects */
	double x;
	double y = 1.0;
	double ty = 1.0;

	/* get_input */
	printf("Enter a positive number:");
	scanf("%lg", &x);

	/* loop */
	do {
		ty = y;
		y = (x/y + y)/2.0;
	} while (fabs(y - ty) > (0.00001*y));
	
	printf("square root: %.6lg\n", y);

	return 0;
}


