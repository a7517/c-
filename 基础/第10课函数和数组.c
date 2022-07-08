#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//
//	//函数的方法解决
//	int sum = add(num1, num2);
//
//	printf("sum=%d\n", sum);
//
//	return 0;
//}


int main()
{
	//数组--一组相同类型的元素的集合
	//10个整形1-10存起来
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	//char ch[5] = { 'a','b','c' };//不完全初始化默认的给0

	return 0;
}