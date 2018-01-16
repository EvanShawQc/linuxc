#include <stdio.h>
#include <math.h>
int isPrime(int n){
	int i;
	for(i=2; i<=sqrt(n); i++){
		if(n%i==0){
			break;
		}
	}
	if(i>sqrt(n)){
		return 1;
	}else{
		return 0;
	}
}

int main(int argc, char const *argv[])
{
	int i;
	for(i=2; i<=100; i++){
		if(!isPrime(i)){
			continue;
		}
		printf("%d ", i);
	}
	printf("\n");
	return 0;
}