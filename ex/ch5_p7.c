/* Name: ch5_p7.c */
/* Purpose: find the largest of 4 integers */
/* Author:   */

#include <stdio.h>

int temp;

void
swap_nums(int* num1, int* num2)
{
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void
cmp_swap(int* num1, int* num2)
{
	if (*num1 > *num2){
		swap_nums(num1, num2);
	}
}

int
main(void)
{

	int i1, i2, i3, i4;
	i1 = i2 = i3 = i4 = 0;
	/* similar to bubble sort but we don't care about i2 and i3 so we skip steps */
	printf("Enter four integers: ");
	scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

	cmp_swap(&i1, &i2);
	cmp_swap(&i3, &i4);
	cmp_swap(&i2, &i4);
	cmp_swap(&i1, &i3);

	printf("Largest: %d \n", i4);
	printf("Smallest: %d \n", i1);


	return 0;
}
