#include <stdio.h>

int num_count(int n){
	int i=0;
	int count=0;
	while(i<=100){
		if(i%10==n){
			count++;
			//printf("%d  ", i);
		}
		if(i>10 && i/10%10==n){
			count++;
			//printf("%d  ", i);

		}
		i++;
	}
	return count;
}

int main(int argc, char const *argv[])
{
	int num;
	scanf("%d",&num);
	printf("0到100的所有数字中,出现数字%d的次数是：%d\n", 
		num, num_count(num));
	/*while(num>=0){
		int i=0;
		printf("%d \n", i);
		i++;
		num--;
	}*/
	return 0;
}