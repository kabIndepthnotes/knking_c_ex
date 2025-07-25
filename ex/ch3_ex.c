/* Name: ch3_exercises.c */
/* Purpose:  */
/* Author: */

#include <stdio.h>

void q3_01();
void q3_02();
void q3_03();
void q3_04();
void q3_05();
void q3_05();

void
q3_01()
{
	/* chapter 3.1 */
	printf("%6d,%4d", 86, 1040);
	printf("\n");
	printf("%12.5e", 30.253);
	printf("\n");
	printf("%.4f", 83.162);
	printf("\n");
	printf("%-6.2g", 0.0000009979);
	printf("\n");

}

void
q3_02()
{
	float x = 1234.12345;
	/* chapter 3.2 */
	printf("%-8.1e",x);
	printf("\n");

	printf("%10.6e",x);
	printf("\n");

	printf("%-8.3f",x);
	printf("\n");

	printf("%-6.0f",x);
	printf("\n");
}

void
q3_03()
{
	
/* `%d` vs ` %d`. No difference as scanf will remove inital whitespace anyway. */
/* `%d-%d-%d` vs `%d -%d -%d`. Difference as the first one won't accept `5 -5 -5` */
/* `%f` vs `%f ` */
/* `%f,%f` vs `%f, %f` */
	int x1 = 0;
	int x2 = 0;
	int x3 = 0;
	float y1 = 0;
	float y2 = 0;

	/* scanf("%d",&x1); */
	/* printf("passed scanf 1: %d\n",x1); */
	/* scanf(" %d",&x1); */
	/* printf("passed scanf 2: %d\n",x1); */

	scanf("%d-%d-%d",&x1, &x2, &x3);
	printf("passed scanf 3: %d, %d, %d\n",x1,x2,x3);

	scanf("%d -%d -%d",&x1, &x2, &x3);
	printf("passed scanf 4: %d, %d, %d\n",x1,x2,x3);

	scanf("%f",&y1);
	printf("passed scanf 5: %f\n",y1);
	scanf("%f ",&y1);
	printf("passed scanf 6: %f\n",y1);

	scanf("%f,%f",&y1,&y2);
	printf("passed scanf 7: %f,%f\n",y1,y2);
	scanf("%f, %f",&y1,&y2);
	printf("passed scanf 8: %f, %f\n",y1,y2);
}

void
q3_04()
{
	/*Conjecture, reads 10, then 0.3, then 5*/
	int i,j;
	float x;

	scanf("%d%f%d",&i,&x,&j);
	printf("i is: %d\n",i);
	printf("x is: %f\n",x);
	printf("j is: %d\n",j);

}

void
q3_05()
{
	/* conjecture, reads 12.3, 45, 0.6 */
	int i;
	float x,y;

	scanf("%f%d%f",&x,&i,&y);
	printf("x is: %f\n",x);
	printf("i is: %d\n",i);
	printf("y is: %f\n",y);
	
}

void
q3_06()
{
	/* addfrac.c */
	int num1, denom1, num2, denom2, result_num, result_denom;
	printf("Enter first fraction :");
	scanf("%d / %d",&num1, &denom1);

	printf("Enter second fraction :");
	scanf("%d / %d",&num2, &denom2);

	/* This is due to the mathematical formula for adding fractions */
	result_num = num1 * denom2 + num2 * denom1;

	result_denom = denom1 * denom2;
	printf("The sum is %d/%d\n",result_num, result_denom);
	
}

/**
== 6. ==
a) `8 % 5` produces `3`
b) `-8 % 5` produces `-3`
c) `8 % - 5` produces  or `2`
d) `-8 % -5` produces `-3`

== 7. == 
They are not equivalent. For example if the upc is 10, then the first algorithm gives 0, but the second algorithm gives 10. This is due to modulo arithmetic.
== 8. ==
In part 7. We proved that the two algorithms are not equivalent, and the line of code is that exact 2 algorithms, hence we cannot swap the two and have the same program.
== 9. ==
a) 
{{{
	i = 7; j = 8;
	i *= j + 1;
	printf("%d %d", i, j); //63 8
}}}

b) 
{{{
 	i = j = k = 1;
	i += j += k;
	printf("%d %d %d", i, j, k); // 3 2 1 
}}}

c) 
{{{
 	i = 1; j = 2; k = 3;
	i -= j -= k;
	printf("%d %d %d", i, j, k); // 2 -1 3 
}}}
d) 
{{{
	i = 2; j = 1; k = 0;
	i *= j *= k;
	printf("%d %d %d", i, j, k); // 0 0 0 
}}}

== 10. ==
a) 
{{{
	i = 6;
	j = i += i; // TODO what is the precedence?
	printf("%d %d", i, j); // 12 12
}}}

b) 
{{{
	i = 5;
	j = (i -= 2) + 1;
	printf("%d %d", i, j); // 3 4
}}}

c) 
{{{
	i = 7;
	j = 6 + (i = 2.5);
	printf("%d %d", i, j); // 2 8
}}}

d) 
{{{
	i = 2; j = 8;
	j = (i = 6) + (j = 3); // undefined behaviour
	printf("%d %d", i, j); // 6 9
}}}

== 11. ==
a) 
{{{
	i = 1;
	printf("%d ", i++ - 1); // 0
	printf("%d ", i); // 0
}}}

b) 
{{{
	i = 10; j = 8;
	printf("%d ", i++ - ++j); // 1
	printf("%d %d", i, j); // 11 9
}}}

c) 
{{{
	i = 7; j = 8;
	printf("%d ", i++ - ++j); // 1
	printf("%d %d", i, j); // 11 9
}}}

d) 
{{{
	i = 3; j = 4; k = 5;
	printf("%d ", i++ - ++j + --k); // 2
	printf("%d %d %d", i, j, k); // 4 4 4
}}}

== 12. ==
a) 
{{{
	i = 5;
	j = ++i * 3 - 2;
	printf("%d %d", i, j); // 6 16
}}}
b) 
{{{
	i = 5;
	j = 3 - 2 * i++;
	printf("%d %d", i, j); // 6 -7
}}}
c) 
{{{
	i = 7;
	j = 3 * i-- + 2;
	printf("%d %d", i, j); // 6 20
}}}

d) 
{{{
	i = 7;
	j = 3 + --i * 2;
	printf("%d %d", i, j); // 6 15
}}}

== 13. ==
unsure, but guessing `i++`
== 14. ==
a) `a * b - c * d + e` is equivalent to `((a * b) - (c * d)) + e`
b) `a / b % c / d` is equivalent to `((a / b) % c) / d`
c) `- a - b + c - + d` is equivalent to `( ( ( (-a) - b) + c) - (+d))`
d) `a * - b / c - d` is equivalent to `( (a * (- b) ) / c) - d)`

== 15. ==
a) `i += j; // i = 3, j = 2`
b) `i--; // i = 0, j = 2`
c) `i * j / 1; // i = 1, j = 2`
d) `i % ++j; // i = 1, j = 3`
 * */

int
main(void)
{


	q3_06();


	return 0;
}


