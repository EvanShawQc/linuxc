#include <stdio.h>

void print_day(int day){
	switch(day){
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
		 	printf("Thursday\n");
		 	break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n"); 
			break;
		case 7:
			printf("Sunday\n");
			break;
		default:
			printf("Illegal day number!\n");
			break;
	}
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	print_day(n);
	return 0;
}