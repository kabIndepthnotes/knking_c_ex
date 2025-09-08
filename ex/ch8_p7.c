/* ch8_p7.c */
/* include_directives */
#include <stdio.h>

/* define_directives */
#define N 5

int
main(void)
{
	/* initialise_objects */
	int nums[N][N];
	int sum;

	/* scan */
	for (int i = 0; i < N; i++ ) {
		printf("Enter Row %d: ", i+1);
		for (int j = 0; j < N; j++ ) {
			scanf("%d", &nums[i][j]);
		}
	}

	/* process */
	printf("Row totals: ");
	sum = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			sum += nums[i][j];
		}
		printf("%d ",sum);
		sum = 0;
	}
	printf("\n");
	
	sum = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			sum += nums[j][i];
		}
		printf("%d ",sum);
		sum = 0;
	}
	printf("\n");

	return 0;
}


