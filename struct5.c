//形如z=a+bi的、以直角坐标
//表示的复数z的四则运算

#include <stdio.h>
#include <math.h>

struct complex_struct{
	//定义一个复合类型的结构体
	//用来表示复数的数据类型
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

struct complex_struct make_from_real_img(
	//这个函数以直角坐标为参数来构造复数
	double x, double y){
	struct complex_struct z;
	z.x=x;
	z.y=y;
	return z;
}

struct complex_struct make_from_mag_ang(
	//这个函数以极坐标为参数来构造复数
	double r, double A){
	struct complex_struct z;
	z.x=r*cos(A);
	z.y=r*sin(A);
	return z;
}

struct complex_struct add_complex(
	//z1+z2
	struct complex_struct z1,
	struct complex_struct z2){
	return make_from_real_img(
		real_part(z1)+real_part(z2),
		img_part(z1)+img_part(z2));
}

struct complex_struct sub_complex(
	//z1-z2
	struct complex_struct z1,
	struct complex_struct z2){
	return make_from_real_img(
		real_part(z1)-real_part(z2),
		img_part(z1)-img_part(z2));
}

struct complex_struct mul_complex(
	//z1*z2
	struct complex_struct z1,
	struct complex_struct z2){
	return make_from_mag_ang(
		magnitude(z1)*magnitude(z2),
		angle(z1)+angle(z2));
}

struct complex_struct div_complex(
	//z1/z2
	struct complex_struct z1,
	struct complex_struct z2){
	return make_from_mag_ang(
		magnitude(z1)/magnitude(z2),
		angle(z1)-angle(z2));
}


int main(int argc, char const *argv[])
{
	struct complex_struct z1,z2;
	
	scanf("%lf%lf",&z1.x,&z1.y);
	scanf("%lf%lf",&z2.x,&z2.y);

	printf("z1+z2=%f+(%f)i\n",
		add_complex(z1,z2).x,add_complex(z1,z2).y);
	printf("z1-z2=%f+(%f)i\n",
		sub_complex(z1,z2).x,sub_complex(z1,z2).y);
	printf("z1*z2=%f+(%f)i\n",
		mul_complex(z1,z2).x,mul_complex(z1,z2).y);
	printf("z1/z2=%f+(%f)i\n",
		div_complex(z1,z2).x,div_complex(z1,z2).y);

	
	return 0;
}