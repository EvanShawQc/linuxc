//用递归求集合元素的全排列：
//设R={r1,r2,...,rn}是要进行排列的n个元素；
//令Ri=R-{ri}，集合X中元素的全排列记为perm(X)。
//(ri)perm(X)表示在全排列perm(X)的每一个排列前
//加上前缀ri得到的排列。R的全排列可归纳定义如下：
//当n=1时，perm(R)=(r)，其中r是集合R中唯一的元素；
//当n>1时，perm(R)由(r1)perm(R1)，(r2)perm(R2)，
//...，(rn)perm(Rn)构成。


#include <stdio.h>
#define Length 4

//输出R中所有元素
void printAllElement(int* R){
	int i;
	for(i=0;i<Length;i++){
		printf("%d ", R[i]);
	}
	printf("\n");
}

//交换R[i],R[j]
void swap(int R[], int i, int j){
	int temp;
	temp=R[i];
	R[i]=R[j];
	R[j]=temp;
}

//递归排列 R[k]--R[m]中的(m-k+1)个元素
void perm(int* R, int start, int finish){
	int i;
	//边界条件(R中只有一个元素)
	if(start==finish){
		printAllElement(R);
	}
	//递归方程
	else{
		//循环指定R中的每个元素ri
		for(i=start;i<finish;i++){
			//通过交换R[i]/R[start]实现指定
			//R[i]到首位
			swap(R,start,i);
			//对R中剩下的元素R(start+1,finish)
			//进行排列
			perm(R,start+1,finish);
			//换回原位置
			swap(R,start,i);
		}
	}
}

int main(int argc, char const *argv[])
{
	int R[]={1,2,3,4};
	perm(R,0,4);
	return 0;
}



