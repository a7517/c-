#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//判断一个数是否为奇数
//int main()
//{
//
//	int a = 0;
//	scanf("%d", &a);
//	int b = a % 2;
//	if (b == 1)
//		printf("是一个奇数");
//	else
//		printf("是一个偶数");
//	
//	return 0;
//}

//判断1-100之间的奇数
int main()
{
	int a = 0;
	while (a < 100)
	{
		a++;
		if (a%2== 1) {
			printf("%d\n", a);
		}
	
	}
	return 0;
}