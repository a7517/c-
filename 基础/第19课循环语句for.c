#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//语法
//      初始化  判断     调整
//for（表达式1；表达式2；表达式3）
//     循环语句


int main()
{
	int  i = 0;
	for (i = 1; i <= 10; i++)
	{
		//if (i == 5)
		//	break;
		if (i == 5)
			continue;

		printf("%d ", i);
	}
	return 0;
}