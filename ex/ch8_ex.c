/* Name: ch8ex.txt */
/* Purpose: solutions to chapter 8 exercises */
/* Author:   */

/* Function Declarations */

#include <stdio.h>
#include <stdbool.h>
#define N 40

void
q8_01()
{
	int a[3] = {1,2,3};
	sizeof(a) / sizeof(a[0]);
	sizeof(a) / sizeof(int); // is not as good as with the above, we don't need to know the data type of a.
}

void
q8_02()
{
	int a[(char)48];
}

void
q8_03()
{
	bool weekend[7] = {true, false, false, false, false, false, true};
}

void
q8_04()
{
	bool weekend[7] = {true, [6] = true};
}

void
q8_05()
{
	int fib_numbers[N] = {0, 1};
	for (int i = 2; i < N; i) {
		fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];
	}
	
}

void
q8_06()
{
	const int segements[10][7] = {
		{1, 1, 1, 1, 1, 1, 0}, //0 ...
		{0, 1, 1, 0, 0, 0, 0}, 
		{1, 1, 0, 1, 1, 0, 1}, 
		{1, 1, 1, 1, 0, 0, 1}, 
		{0, 1, 1, 0, 0, 1, 1}, 
		{1, 0, 1, 1, 0, 1, 1}, 
		{1, 0, 1, 1, 1, 1, 1}, 
		{1, 1, 1, 0, 0, 0, 0}, 
		{1, 1, 1, 1, 1, 1, 1}, 
		{1, 1, 1, 1, 0, 1, 1}}; // ... 9
}

void
q8_07()
{
	
	//we could try an approac
	const int segements[10][7] = {
		{1, 1, 1, 1, 1, 1}, //0 ...
		{0, 1, 1}, 
		{1, 1, 0, 1, 1, 0, 1}, 
		{1, 1, 1, 1, 0, 0, 1}, 
		{0, 1, 1, [5] =  1, 1}, 
		{1, 0, 1, 1, 0, 1, 1}, 
		{1, 0, 1, 1, 1, 1, 1}, 
		{1, 1, 1}, 
		{1, 1, 1, 1, 1, 1, 1}, 
		{1, 1, 1, 1, 0, 1, 1}; // ... 9

	const int segements[10][7]={
		1, 1, 1, 1, 1, 1, [1][1] =  1, 1,
		1, 1, 0, 1, 1, 0, 1,
		1, 1, 1, 1, [3][6] = 1,
		0, 1, 1, [4][5] =  1, 1,
		1, 0, 1, 1, 0, 1, 1,
		1, 0, 1, 1, 1, 1, 1,
		1, 1, 1,
		[8][0] = 1, 1, 1, 1, 1, 1, 1,
		1, 1, 1, 1, 0, 1, 1}; // ... 9

	const int segements[10][7]={1,1,1,1,1,1,[1][1]=1,1,1,1,0,1,1,0,1,1,1,1,1,[3][6]=1,0,1,1,[4][5]=1,1,1,0,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,[8][0]=1,1,1,1,1,1,1,1,1,1,1,0,1,1};
}

void
q8_08()
{
	int temperature_readings[30][12] = { 0 };
}

void
q8_09()
{
	float sum = 0;
	// d, h are day and hour
	for (int day = 0; day < 30; day++) {
		for (int hour = 0; hour < 12; hour++) {
			sum += temperature_readings[day][hour];
		}
	}
	printf("%f\n", sum/(30*12));
}

void
q8_10()
{
	char chess_board[8][8] = {
		{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}, 
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'}, 
		{' ', '*', ' ', ' ', '*', ' ', ' ', '*'}, 
		{'*', ' ', ' ', '*', ' ', ' ', '*', ' '}, 
		{' ', '*', ' ', ' ', '*', ' ', ' ', '*'}, 
		{'*', ' ', ' ', '*', ' ', ' ', '*', ' '}, 
		{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}, 
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, 
};
}

void
q8_11()
{
	char checker_board[8][8];
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; i++) {
			if ((i + j) % 2 == 0) {
				checker_board[i][j] = "B";
			} else {
				checker_board[i][j] = "R";
			}
		}
	}
	
}

int
main(void)
{

	

	return 0;
}
