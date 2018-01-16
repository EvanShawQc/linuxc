#include <stdio.h>

void print_digest(int y){
	printf("十位数是：%d\n", y/10%10 );
	printf("个位数是：%d\n", y%10);
}

int main(int argc, char const *argv[])
{
	int i=0,x;
	while(scanf("%d",&x)!=EOF){
		print_digest(x);
		i++;
		if(i==3){
			break;
		}
	}
	return 0;
}