#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

double area(double radius){
	double pi=3.141593;
	return pi*radius*radius;
}

int main(int argc, char const *argv[])
{
	double a1,b1,a2,b2,s;
	scanf("%lf%lf%lf%lf",&a1,&b1,&a2,&b2);
	s=area(distance(a1,b1,a2,b2));
	printf("%f\n", s);
	return 0;
}