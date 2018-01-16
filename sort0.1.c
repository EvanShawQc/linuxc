//algorithm
//sort0.1

#include <stdio.h>

int a[5] = {10, 5, 2, 4, 7};

void sort(void)
{
	int i, j, k;
	int temp;

	printf("%d, %d, %d, %d, %d\n", 
			a[0], a[1], a[2], a[3], a[4]);
	for (i = 0; i < 5; i++){
		k=i;
		for (j = i+1; j < 5; j++){
			if (a[k] > a[j]){
				k=j;  //只交换下标
			}
		}
		if (k != i){
			//一次交换完成一轮比较
			temp = a[i];
			a[i] = a[k];
			a[k] = temp;

			printf("%d, %d, %d, %d, %d\n", 
				a[0], a[1], a[2], a[3], a[4]);
		}
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	sort();
	return 0;
}