#include <stdio.h>
#include <stdlib.h>

int gcd_euclid(int a, int b){
	while(a%b!=0){
		int temp=a;
		a=b;
		b=temp%b;
	}
	return b;
}

int main(int argc, char const *argv[])
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("******\n******\n");
	printf("%d和%d的最大公约数是：%d\n", 
		x, y, abs(gcd_euclid(x, y)));
	
	return 0;
}