//字符串实际上是字符数组
//存储彼此独立的多个字符串
//必须用多维数组

#include <stdio.h>

void printDays(int day){
	char days[8][10]={ "","Monday",
		"Tuesday","Wednesday","Thursday",
		"Friday","Saturday","Sunday"};

	if(day>0&&day<8){
		printf("%s\n", days[day]);
	}else{
		printf("Illegal day number!\n");
	}
}

int main(int argc, char const *argv[])
{
	int day;
	scanf("%d",&day);
	printDays(day);
	return 0;
}