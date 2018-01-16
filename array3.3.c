#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000000000

int a[N];

void gen_random(int upper_bound){
	int i;
	srand(time(NULL));
	for(i=0;i<N;i++){
		a[i]=rand()%10;
	}
}

int howmany(int num){
	int i,count=0;
	for(i=0;i<N;i++){
		if(a[i]==num){
			count++;
		}
	}
	return count;
}

int main(int argc, char const *argv[])
{
	int i,histogram[10];

	gen_random(10);
	for(i=0;i<10;i++){
		histogram[i]=howmany(i);
		printf("%d--%d  ", i, histogram[i]);
	}
	printf("\n");

	return 0;
}