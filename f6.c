#include <stdio.h>

int hour=23, minute=59;
int x=10;

void print_time(int hour,int minute){
	printf("%d:%d in print_time\n", hour, minute);
}

int main(int argc, char const *argv[])
{
	int hour=0, minute=30;
	printf("%d:%d in main\n", hour, minute);
	print_time(hour, minute);
	printf("x=%d\n", x);
	return 0;
}