#include <stdio.h>
#include <stdlib.h>

#define N 100000

int a[N];

void gen_random(int upper_bound){
	int i;
	for(i=0;i<N;i++){
		a[i]=rand()%upper_bound;
	}
}

int howmany(int number){
	int i,count=0;
	for(i=0;i<N;i++){
		if(a[i]==number){
			count++;
		}
	}
	return count;
}

int main(int argc, char const *argv[])
{
	int i;
	gen_random(10);
	printf("number\tcount\n");
	for(i=0;i<10;i++){
		printf("%d\t%d\n", i, howmany(i));
	}

	printf("\n");

	return 0;
}