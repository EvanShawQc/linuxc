#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i=0;
	{
		int i=1,j=2;
		printf("i=%d,j=%d\n", i, j);
	}
	printf("i=%d\n", i);
	return 0;
}