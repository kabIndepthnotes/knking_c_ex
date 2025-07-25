/* ch7_p15.c */
#include <stdio.h>
#include <limits.h>
#include <float.h>
int
main(void)
{
	int x;
	long double fact = 1;
	printf("Enter a positive integer: ");
	scanf("%d", &x);
	for (int i = 1; i <= x; i++) {
		fact *= i;
	}
	printf("Factorial of %d is %Lf\n", x, fact);
	/* printf("short: %d\n", SHRT_MAX); */
	/* printf("int: %d\n", INT_MAX); */
	/* printf("long: %ld\n", LONG_MAX); */
	/* printf("long long: %lld\n", LLONG_MAX); */
	/* printf("float: %f\n", FLT_MAX); */
	/* printf("double: %f\n", DBL_MAX); */
	/* printf("long double: %Lf\n", LDBL_MAX); */
	return 0;
}

