#include <stdio.h>
int main(int argc, char const *argv[])
{
	char firstletter;
	int hour,minute,total_minute;
	firstletter = 'a';
	hour = 11;
	minute = 59;
	printf("Current time is: %d:%d\n",hour,minute);
	printf("%d:%d is %d minutes after 00:00.\n",hour, minute, 
		total_minute = hour*60 + minute);
	printf("%d and %f hours\n", hour, minute/60.0);
	return 0;
}