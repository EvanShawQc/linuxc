#include <stdio.h>

int factorial(int n){
	
	if(n==0){
		return 1;
	}else{
		int recurse=factorial(n-1);
		int result=n*recurse;
		return result;
	}
}

int main(int argc, char const *argv[])
{
	int num;
	scanf("%d",&num);
	printf("%d!=%d\n", num, factorial(num));
	return 0;
}