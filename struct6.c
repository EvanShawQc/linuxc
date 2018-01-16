//形如z=rA的、以极坐标
//表示的复数z的四则运算

#include <stdio.h>
#include <math.h>

struct complex_struct{
	//定义一个复合类型的结构体
	//用来表示复数的数据类型
	double r,A;
};

double real_part(struct complex_struct z){
	return z.r*cos(z.A);
}

double img_part(struct complex_struct z){
	return z.r*sin(z.A);
}

double magnitude(struct complex_struct z){
	return z.r;
}

double angle(struct complex_struct z){
	return z.A;
}

struct complex_struct make_from_real_img(
	//这个函数以直角坐标为参数来构造复数
	double x, double y){
	struct complex_struct z;
	z.r=sqrt(x*x+y*y);
	z.A=atan2(y,x);
	return z;
}

struct complex_struct make_from_mag_ang(
	//这个函数以极坐标为参数来构造复数
	double r, double A){
	struct complex_struct z;
	z.r=r;
	z.A=A;
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
	
	scanf("%lf%lf",&z1.r,&z1.A);
	scanf("%lf%lf",&z2.r,&z2.A);

	printf("z1+z2=%f*(%f)\n",
		add_complex(z1,z2).r,add_complex(z1,z2).A);
	printf("z1-z2=%f*(%f)\n",
		sub_complex(z1,z2).r,sub_complex(z1,z2).A);
	printf("z1*z2=%f*(%f)\n",
		mul_complex(z1,z2).r,mul_complex(z1,z2).A);
	printf("z1/z2=%f*(%f)\n",
		div_complex(z1,z2).r,div_complex(z1,z2).A);

	
	return 0;
}