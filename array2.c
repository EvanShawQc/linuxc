#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[5]={3,1,9,8,2};
	int	b[5];
	int i;

	for(i=0;i<5;i++){
		b[i]=a[i];
		printf("b[%d]=%d\n", i, b[i]);
	}

	return 0;
}