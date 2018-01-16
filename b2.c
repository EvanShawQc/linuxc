#include <stdio.h>

void print_parity(int x){
	if (x%2 == 0)
	{
		printf("x is even.\n");
	}else{
		printf("x is odd.\n");
	}
}

int main(int argc, char const *argv[])
{
	int i=0,n;
	while(scanf("%d",&n)!=EOF){
		print_parity(n);
		i++;
		if(i==5)
			break;	
	}
	return 0;
}