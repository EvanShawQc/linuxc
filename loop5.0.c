#include <stdio.h>

int isPrime(int n){
	int i;
	int temp=1;
	for(i=2; i<n; i++){
		if(n%i==0){
			temp=0;
		}	
	}
	if(temp){
		return 1;
	}else{
		return 0;
	}
}

int main(int argc, char const *argv[])
{
	int i;
	for(i=2; i<=100; i++){
		if(isPrime(i)){
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}