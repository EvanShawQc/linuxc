//以a+bi的形式打印一个复数
//若a=0或b=0则省略。

#include <stdio.h>

struct complex_struct{
	double x,y;
};

void print_complex(double x, double y){
	struct complex_struct z;
	z.x=x;
	z.y=y;

	if(z.x==0 && z.y==0){
		printf("%f\n", z.x);
	}else if(z.y==0){
		printf("%f\n", z.x);
	}else if(z.x==0){
		printf("%fi\n", z.y);
	}else{
		if(z.y<0){
			printf("%f%fi\n", z.x, z.y);
		}else{
			printf("%f+%fi\n", z.x, z.y);
		}
	}
}

int main(int argc, char const *argv[])
{

	double a,b;
	scanf("%lf%lf",&a, &b);

	print_complex(a,b);

	return 0;
}