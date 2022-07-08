#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//define定义常量和宏

//define是一个预处理指令
//1.define定义符号

//#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
// }


//	2.define定义宏
#define ADD(X,Y) ((X)+(Y))
int main()
{
	printf("%d\n", ADD(2, 3));
	return 0;
}