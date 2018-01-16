#include <stdio.h>

void print_time(int, int);

/*
void print_time(int hour, int minute){
	printf("%d:%d\n", hour, minute);
}
*/

int main(int argc, char const *argv[])
{
	print_time(23, 59);
	return 0;
}

void print_time(int hour, int minute){
	printf("%d:%d \n", hour, minute);
}