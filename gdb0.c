#include <stdio.h>

int main(void)
{
	int sum, i = 0;
	char input[5];

	/* while (1) */ {
		sum = 0;
		scanf("%s", input);
		for (i = 0; input[i] != '\0'; i++){
			if (input[i] < '0' || input[i] > '9'){
				printf("Invalid input!\n");
				sum=-1;
				break;
			}
			sum = sum*10 + input[i] - '0';  
		}/* 字符型的数字'2'要减去'0'的ASCII码
		  * 才能转换为整数2 */
		printf("input = %d\n", sum);
	}

	return 0;
}