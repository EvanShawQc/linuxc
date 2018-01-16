#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x, n;
	printf("Input x, n: ");
	scanf("%d %d",&x, &n);
	printf("Ceiling(x/n) = %d\n",1.0*x/n-x/n>0?x/n+1:x/n);
	printf("Ceiling(x/n) = %d\n", (x+n-1)/n);
	return 0;
}