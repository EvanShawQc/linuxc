//整合版复数z的四则运算

#include <stdio.h>
#include <math.h>

//数据类型标志
enum coordinate_type{RECTANGULAR, POLAR};

struct complex_struct{
	//定义一个复合类型的结构体
	//用来表示复数的数据类型及其数据类型标志
	enum coordinate_type t;
	double a,b;
};

double real_part(struct complex_struct z){
	if(z.t==RECTANGULAR){
		return z.a;
	}else{
		return z.a*cos(z.b);
	}
}

double img_part(struct complex_struct z){
	if(z.t==RECTANGULAR){
		return z.b;
	}else{
		return z.a*sin(z.b);
	}
}

double magnitude(struct complex_struct z){
	if(z.t==RECTANGULAR){
		return sqrt(z.a*z.a + z.b*z.b);
	}else{
		return z.a;
	}
}

double angle(struct complex_struct z){
	if(z.t==RECTANGULAR){
		return atan2(z.b, z.a);
	}else{
		return z.b;
	}
}

struct complex_struct make_from_real_img(
	//这个函数以直角坐标为参数来构造复数
	double x, double y){
	struct complex_struct z;
	z.t=RECTANGULAR;
	z.a=x;
	z.b=y;
	return z;
}

struct complex_struct make_from_mag_ang(
	//这个函数以极坐标为参数来构造复数
	double r, double A){
	struct complex_struct z;
	z.t=POLAR;
	z.a=r;
	z.b=A;
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
	
	scanf("%d%lf%lf",&z1.t,&z1.a,&z1.b);
	scanf("%d%lf%lf",&z2.t,&z2.a,&z2.b);

	printf("z1+z2=%f+(%f)i\n",
		add_complex(z1,z2).a,add_complex(z1,z2).b);
	printf("z1-z2=%f+(%f)i\n",
		sub_complex(z1,z2).a,sub_complex(z1,z2).b);
	printf("z1*z2=%f*(%f)\n",
		mul_complex(z1,z2).a,mul_complex(z1,z2).b);
	printf("z1/z2=%f*(%f)\n",
		div_complex(z1,z2).a,div_complex(z1,z2).b);

	
	return 0;
}