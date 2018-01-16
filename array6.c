//arr为原始数组
//start为遍历起始位置
//result保存结果，为一维数组
//count为result数组的索引值，起辅助作用
//NUM为要选取的元素的个数

#include <stdio.h>

void combine_increase(int* arr, int start, int*
	result, int count, const int NUM, const int
	arr_len)
{
	int i=0;
	for(i=start;i<arr_len+1-count;i++)
	{
		result[count-1]=i;
		if (count-1==0)
		{
			int j;
			for (j = NUM-1; j >=0 ; j--)
			{
				printf("%d  ", arr[result[j]]);
			}
			printf("\n");
		}
		else
		{
			combine_increase(arr, i+1, result, 
				count-1, NUM, arr_len);
		}
	}
}

int main(int argc, char const *argv[])
{
	int arr[]={1,2,3,4};
	int num=2;
	int result[num];

	combine_increase(arr, 0, result, num, num,
		sizeof(arr)/sizeof(int));
	//printf("---分界线---\n");
	//combine_decrease(arr, sizeof(arr)/sizeof(int),
	//	result,num,num);
	return 0;
}