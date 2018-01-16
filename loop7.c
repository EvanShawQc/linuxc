#include <stdio.h>

void diamond(int n, char si){
	if(n%2==0){
		printf("不能用偶数做参数！\n");
	}else{
		int i,j,k;
		for(i=1;i<=n;i++){
			if(i<=(n+1)/2){
				for(k=1;k<=(n+1)/2-i;k++){
					printf(" ");
				}
				for(j=1;j<=2*i-1;j++){
					printf("%c", si);
				}
				printf("\n");
			}else{
				for(k=1;k<=i-(n+1)/2;k++){
					printf(" ");
				}
				for(j=1;j<=2*(n-i)+1;j++){
					printf("%c", si);
				}
				printf("\n");
			}
		}
	}
}
int main(int argc, char const *argv[])
{
	int num;
	char sign='*';
	scanf("%d",&num);
	//scanf("%s",&sign);
	diamond(num,sign);
	
	//printf("%d %s\n",num,sign);
	return 0;
}