//递归求组合数

#include <stdio.h>
#define N 5
#define M 2

int cal(int n, int k){
	if(n==0||k==0){
		return 1;
	}
	if(n<k){
		return 0;
	}
	if(n==k){
		return 1;
	}
	return cal(n-1,k-1)+cal(n-1,k);
}

int main(int argc, char const *argv[])
{
	printf("C(%d,%d)=%d\n", N, M, cal(N,M));;
	return 0;
}