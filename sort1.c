#include <stdio.h>
#define LEN 5

int a[LEN] = {10, 5, 2, 4, 7};

void insertion_sort (void)
{
	int i, j, temp;

	for (i = 1; i < LEN; i++){
		temp = a[i];
		for (j = i-1; j >= 0 && a[j] > temp; j--){
				a[j+1] = a[j];	
		}
		a[j+1] = temp;
	}

	for (i = 0; i < LEN; ++i){
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	insertion_sort();
	return 0;
}