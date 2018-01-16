//algorithm
//sort0

#include <stdio.h>

int a[10]={6,3,1,4,2,9,8,5,7,0};

void sort(void)
{
	int i,j;
	int temp;

	for (i = 0; i < 10; i++){
		for (j = i+1; j < 10; j++){
			if (a[i] > a[j]){
				//每次都要交换值
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	sort();
	return 0;
}