//方法参见 perm0.c
//从数列a[N]中拿出M个做全排列

#include <stdio.h>
#define N 5
#define M 4

int a[N]={1,2,3,4,5};
int cnt=0;


void print_arr(void){
	int i;
	for(i=0;i<M;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

void swap(int i, int j){
	int temp;
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}

void perm(int start, int finish){
	int i;
	
	if(start==finish){
		cnt++;
		print_arr();//注意要先在上面声明函数
		//print_arr(),才能在这里调用它！
	}else{
		for(i=start;i<N;i++){
			swap(start,i);
			perm(start+1,finish);
			swap(start,i);
		}
	}
}

int main(int argc, char const *argv[])
{
	perm(0,M);
	printf("\n一共有%d种排列方式。\n", cnt);
	return 0;
}