//实现一个用分子分母的格式来表示
//有理数的结构体rational、
//以及相关的函数

#include <stdio.h>
#include <stdlib.h>

struct rational{
	int x,y;
};

int numerator(struct rational r){
	//分子
	return r.x;
}

int denominator(struct rational r){
	//分母
	return r.y;
}

struct rational make_rational(int x, int y){
	//构造分数
	struct rational r;
	r.x=x;
	r.y=y;
	return r;
}

struct rational add_rational(
	struct rational r1,
	struct rational r2){
	//两个分数相加
	struct rational r;
	r.x=numerator(r1)*denominator(r2)+
		numerator(r2)*denominator(r1);
	r.y=denominator(r1)*denominator(r2);
	return make_rational(r.x,r.y);	
}

struct rational sub_rational(
	struct rational r1,
	struct rational r2){
	//两个分数相减
	struct rational r;
	r.x=numerator(r1)*denominator(r2)-
		numerator(r2)*denominator(r1);
	r.y=denominator(r1)*denominator(r2);
	return make_rational(r.x,r.y);	
}

struct rational mul_rational(
	struct rational r1,
	struct rational r2){
	//两个分数相乘
	struct rational r;
	r.x=numerator(r1)*numerator(r2);
	r.y=denominator(r1)*denominator(r2);
	return make_rational(r.x,r.y);	
}

struct rational div_rational(
	struct rational r1,
	struct rational r2){
	//两个分数相除
	struct rational r;
	r.x=numerator(r1)*denominator(r2);
	r.y=denominator(r1)*numerator(r2);
	return make_rational(r.x,r.y);	
}

void print_rational(struct rational r){
	//输出最简结果
	if(r.x==0){
		printf("%d\n", 0);
	}else{
		int a,b,temp;
		a=r.x;
		b=r.y;

		if(a==b){
			printf("%d\n", 1);
		}else if(a==-b){
			printf("%d\n", -1);
		}else{
			while(a%b!=0){
			//辗转相除法求最大公约数，
			//分子、分母同时除之，达到最简
				temp=a;
				a=b;
				b=temp%b;
			}
			if(r.x*r.y<0){
				printf("-%d/%d\n", abs(r.x/b), 
					abs(r.y/b));				
			}else{
				printf("%d/%d\n", r.x/b, r.y/b);
			}
		}
	}
}

int main(int argc, char const *argv[])
{

	struct rational a,b;

	scanf("%d%d",&a.x,&a.y);
	scanf("%d%d",&b.x,&b.y);

	printf("===+ - * /===\n");
	
	print_rational(add_rational(a,b));
	print_rational(sub_rational(a,b));
	print_rational(mul_rational(a,b));
	print_rational(div_rational(a,b));

	return 0;
}