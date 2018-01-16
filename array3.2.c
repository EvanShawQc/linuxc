//生成[10,20]的随机数
//rand()%11+10

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define N 22

int a[N];

void gen_random(int upper_bound){
	int i;
	srand(time(NULL));
	for(i=0;i<N;i++){
		a[i]=rand()%upper_bound+10;
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
	gen_random(11);
	print_random();
	return 0;
}