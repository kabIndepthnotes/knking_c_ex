/* Name: ch7_p8.c */
/* Purpose: cprogramming exercise question */
/* Author: kab@indepthnotes.com */
/* Donate! indepthnotes.com/donate */

#include <stdio.h>

int time_since_midnight(int hour, int minute);

int
main(void)
{

	int hour, minute;
	int dep_hour[] = {8,9,11,12,14,15,19,21};
	int dep_min[] = {0,43,19,47,0,45,0,45};

	int arr_hour[] = {10, 11, 13, 15, 16, 17, 21, 23};
	int arr_min[] = {16, 52, 31, 0, 8, 55, 20, 58};

	int dep_len = sizeof(dep_hour)/sizeof(dep_hour[0]);

	int times_since_midnight[dep_len];
	int thresholds[dep_len - 1];

	char meridian;

	for (int i = 0; i < dep_len; i++) {
		times_since_midnight[i] = time_since_midnight(dep_hour[i],dep_min[i]);
	}

	thresholds[0] = times_since_midnight[0];
	for (int i = 1; i < dep_len - 1; i++) {
		thresholds[i] = (times_since_midnight[i-1] + times_since_midnight[i]) / 2;
	}

	printf("enter a 12-hour time:");
	scanf("%d :%d%c", &hour, &minute, &meridian);

	if ((meridian == 'P' || meridian == 'p') && hour != 12) {
		hour += 12;
	}

	int target_time = time_since_midnight(hour, minute);
	for (int i = 0; i < dep_len - 1; i++) {
		if (target_time < thresholds[i] ) {
			printf("Closest departure time is %d:%d arriving at %d:%d\n", dep_hour[i], dep_min[i], arr_hour[i], arr_min[i]);
			return 0;
		}
	}
	printf("Closest departure time is %d:%d arriving at %d:%d\n", dep_hour[dep_len - 1], dep_min[dep_len - 1], arr_hour[dep_len - 1], arr_min[dep_len - 1]);
	return 0;

}

int
time_since_midnight(int hour, int minute)
{
	return (hour * 60) + minute;
}
