/* ch8_p3.c */
#include <stdbool.h>   /* C99 only */
#include <stdio.h>
int
main(void)
{

  bool digit_seen[10];
  int digit;
  long n, tn;

	do {
		for (int i = 0; i < 10; i++) {
			digit_seen[i] = false;
		}
		printf("Enter a number: ");
		scanf("%ld", &n);
		tn = n;
		while (n > 0) {
			digit = n % 10;
			if (digit_seen[digit])
				break;
			digit_seen[digit] = true;
			n /= 10;
		}
		if (n > 0)
			printf("Repeated digit\n");
		else
			printf("No repeated digit\n");
	} while (tn > 0);

	return 0;
}

