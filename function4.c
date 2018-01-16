#include <stdio.h>

void print_time(int hour, int minute){
	printf("%d:%d\n", hour, minute);
}

int main(int argc, char const *argv[])
{
	int hour=23, minute=59;
	print_time(hour, minute);
	return 0;
}