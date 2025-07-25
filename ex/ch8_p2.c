/* ch8_p2.c */

#include <stdio.h>
/* @{type_definitions} */
typedef struct  {
	int a;
} hi;
int
main(void)
{
	hi hi1;
	hi1.a = 2;
	printf("%d\n", hi1.a);
	return 0;
}



