//生成[0,9]的随机数
//rand()%10

#include <stdlib.h>
#include <stdio.h>

#define N 20

int a[N];

void gen_random(int upper_bound){
	int i;
	for(i=0;i<N;i++){
		a[i]=rand()%upper_bound;
	}
}

void print_random(void){
	int i;
	for(i=0;i<N;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	gen_random(10);
	print_random();
	return 0;
}