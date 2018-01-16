#include <stdio.h>

int hour=23, minute=59;

void print_time(void){
	printf("%d:%d\n", hour, minute);
}

int main(int argc, char const *argv[])
{
	printf("%d:%d\n", hour, minute);
	print_time();
	return 0;
}