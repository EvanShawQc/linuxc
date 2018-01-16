#include <stdio.h>

#define LEN 8
int a[LEN] = {5, 2, 4, 7, 1, 3, 2, 6};

void partition(int start, int end)
{
	//int pivot;
	int i, j;
	int temp;

	for (i = start+1; i < end; i++){
		temp = a[i]; 
		for (j = i-1; j >= 0 && a[j] > temp; j--){
			a[j+1] = a[j];
		}
		a[j+1] = temp;
	}
	//pivot = i-1;
	for (i = 0; i < end; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	//return pivot;
}
/*
void quicksort(int start, int end)
{
	int mid;
	if (start < end){
		mid = partition(start, end);
		printf("quicksort (%d-%d, %d-%d) %d %d %d "
			 "%d %d %d %d %d\n", start, mid, mid+1, end,
			 a[0], a[1], a[2], a[3], a[4], a[5],
			 a[6], a[7]);
		quicksort(start, mid-1);
		quicksort(mid+1, end);
		
		printf(" (%d-%d, %d-%d) to %d %d %d "
			 "%d %d %d %d %d\n", start, mid, mid+1, end,
			 a[0], a[1], a[2], a[3], a[4], a[5],
			 a[6], a[7]);
	}
}*/

int main(int argc, char const *argv[])
{
	//quicksort(0, LEN-1);
	partition(0, LEN);
	return 0;
}