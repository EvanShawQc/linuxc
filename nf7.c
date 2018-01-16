#include <stdio.h>

int fibonacci(int n){
	//printf("%d\n", n);
	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
	}else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}

int main(int argc, char const *argv[])
{
	int x;
	scanf("%d",&x);
	printf("斐波那契数列的第%d项是：%d\n", 
		x, fibonacci(x));
	return 0;
}