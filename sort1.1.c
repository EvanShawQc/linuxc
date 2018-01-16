#include <stdio.h>

#define LEN 5
int a[LEN] = {10, 5, 2, 4, 7};

void insertion_sort(void)
{
	int i, j, key;
	for (i = 1; i < LEN; i++){
		printf("%d, %d, %d, %d, %d\n", 
			a[0], a[1], a[2], a[3], a[4]);
		key = a[i];
		for (j = i-1; j>=0 && a[j] > key; j--){
			a[j+1] = a[j];
		}
		a[j+1] = key;
	}
	printf("%d, %d, %d, %d, %d\n", 
			a[0], a[1], a[2], a[3], a[4]);
}

int main(int argc, char const *argv[])
{
	insertion_sort();
	return 0;
}