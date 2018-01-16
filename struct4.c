#include <stdio.h>
#include <math.h>

struct complex_struct{
	double x,y;
};

double real_part(struct complex_struct z){
	return z.x;
}

double img_part(struct complex_struct z){
	return z.y;
}

double magnitude(struct complex_struct z){
	return sqrt(z.x*z.x+z.y*z.y);
}

double angle(struct complex_struct z){
	return atan2(z.y, z.x);
}

int main(int argc, char const *argv[])
{
	double mag,ang;
	struct complex_struct z;
	scanf("%lf%lf", &z.x, &z.y);

	z.x=real_part(z);
	z.y=img_part(z);
	printf("real_part=%f img_part=%f\n", z.x, z.y);

	mag=magnitude(z);
	ang=angle(z);
	printf("magnitude=%f angle=%f\n", 
		mag, ang);
	return 0;
}