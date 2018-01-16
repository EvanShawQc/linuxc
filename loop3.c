#include <stdio.h>

int fibonacci(int n){
	if(n==1){
		return 1;
	}else{
		int fib0=0, fib1=1;
		int fib3=0;
		while(n>=2){
			fib3=fib1+fib0;
			fib0=fib1;
			fib1=fib3;
			n--;
			printf("%d  ", fib0);
		}
		printf("%d\n", fib1);
		return fib3;
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