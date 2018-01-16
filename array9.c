#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[3][2]={1,2,3,4,5};
	int c[3][2]={{1,2},{3,4},{5,}};
	int b[3][2];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			b[i][j]=a[i][j];
			printf("%d  ", b[i][j]);
		}
	}
	printf("\n");
	return 0;
}