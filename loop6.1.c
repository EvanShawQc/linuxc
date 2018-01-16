#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i,j;
	for(i=1;i<=9;i++){
		for(j=i;j<=9;j++){
			printf("%d\t", i*j);
		}
		printf("\n");
	}
	return 0;
}