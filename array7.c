//用递归实现从数组中
//取出n个元素的所有组合

#include <stdio.h>
#define N 6
#define M 4

int a[N]={1,2,3,4,5,6};
int b[M];
void cal(int start, int k){
	int i=0;
	for(i=start;i<N+1-k;i++){
		b[k-1]=i;
		if(k-1==0){
			int j;
			for(j=M-1;j>=0;j--){
				printf("%d  ", a[b[j]]);
			}
			printf("\n");
		}else{
			cal(i+1,k-1);
		}
	}
}

int main(int argc, char const *argv[])
{
	cal(0,M);
	return 0;
}