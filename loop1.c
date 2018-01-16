#include <stdio.h>

int factorial(int n){
	int fac=1;
	while(n>0){
		fac*=n;
		n--;
	}
	return fac;
}

int main(int argc, char const *argv[])
{
	int num;
	scanf("%d",&num);
	printf("%d!=%d\n", num, factorial(num));
	return 0;
}