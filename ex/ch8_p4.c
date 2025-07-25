/* ch8_p4.c */
/* include_directives */
#include <stdio.h>

/* define_directives */
#define N 10

int
main(void)
{
	/* initialise_objects */
	int a[N], i;
	int len = sizeof(a) / sizeof(a[0]);

	/* scan_nums */
	printf("Enter %d numbers: ", N);
	for (i = 0; i < len; i++) {
		scanf("%d", &a[i]);
	}

	/* print */
	printf("In reverse order:");
	for (i = len - 1; i >= 0; i--) {
		printf(" %d", a[i]);
	}
	printf("\n");

	return 0;
}


