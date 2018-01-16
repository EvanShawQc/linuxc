#include <stdio.h>

int main(int argc, char const *argv[])
{
	double i=20.0;
	double j=i/13.0;
	if (j*13.0 == i)
	{
		printf("Equal\n");
	}else{
		printf("Unequal\n");
	}
	return 0;
}