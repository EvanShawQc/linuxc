#include <stdio.h>

int is_leap_year(int year){
	if(year%4==0){
		if(year%400==0 || year%100!=0){
			return 1;
		}
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	int year_num;
	scanf("%d",&year_num);
	if(is_leap_year(year_num)){
		printf("%d is a leap year.\n", year_num);
	}else{
		printf("%d is not a leap year.\n", year_num);
	}
	return 0;
}