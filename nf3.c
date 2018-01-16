#include <stdio.h>
#include <math.h>

double myround(double x){
	if (x>=0){
		if(x-floor(x)+0.5>=1.0){
			return ceil(x);
		}else{
			return floor(x);
		}
	}else{
		if(x-ceil(x)-0.5<=-1.0){
			return floor(x);
		}else{
			return ceil(x);
		}
	}
}

int main(int argc, char const *argv[])
{
	double real_num;
	scanf("%lf",&real_num);
	printf("%f四舍五入后是：%f\n",real_num, myround(real_num));
	return 0;
}