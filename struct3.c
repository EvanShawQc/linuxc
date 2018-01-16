#include <stdio.h>

struct complex_struct{
	double x,y;
};

struct complex_struct add_complex(
	struct complex_struct z1, 
	struct complex_struct z2){
	z1.x=z1.x+z2.x;
	z1.y=z1.y+z2.y;
	return z1;
}//这是一个函数—— add_complex( , )

int main(int argc, char const *argv[])
{
	struct complex_struct z={3.0, -4.0};
	z=add_complex(z,z);
	printf("z=%f+(%f)i\n", z.x, z.y);
	return 0;
}