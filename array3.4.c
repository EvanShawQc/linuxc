#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int a[N];

void gen_random(int upper_bound){
	int i;
	srand(time(NULL));
	for(i=0;i<N;i++){
		a[i]=rand()%10;
	}
}
/*
int howmany(int num){
	int i,count=0;
	for(i=0;i<N;i++){
		if(a[i]==num){
			count++;
		}
	}
	return count;
}
*/
int main(int argc, char const *argv[])
{
	int i,j,histogram[10]={0};
	int count=0;

	gen_random(10);
	/*for(i=0;i<10;i++){
		histogram[i]=howmany(i);
		printf("%d--%d  ", i, histogram[i]);
	}
	printf("\n");*/
	for(i=0;i<N;i++){
		histogram[a[i]]++;
	}
	for(i=0;i<10;i++){
		printf("%d--%d  ", i, histogram[i]);
		if((i+1)%5==0){
			printf("\n");
		}
	}
	printf("\n\n");

	for(i=0;i<10;i++){
		printf("%d\t", i);
		for(j=0;j<histogram[i];j++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");

	for(i=0;i<10;i++){
		printf("%d  ", i);
	}
	printf("\n\n");

	do{
		for(i=0;i<10;i++){
			if(histogram[i]-->0){
				printf("*  ");
				count++;
			}else{
				printf("   ");
			}
		}
		printf("\n");
	}while(count<20);
	printf("\n");

	return 0;
}