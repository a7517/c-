#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//写一个函数，每调用一次这个函数，就会将mun的值增加1.
//
//void add(int *p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//
//	add(&num);
//	printf("%d\n",num);//1
//
//	add(&num);
//	printf("%d\n", num);//2
//
//	add(&num);
//	printf("%d\n", num);//3
//	return 0;
//}


//函数的嵌套调用和链式访问
//void test3()
//{
//	printf("hehe\n");
//}
//int test2()
//{
//	test3();
//	return 0;
//}
//int main()
//{
//	test2();
//	return 0;
//}

//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//	////链式访问
//	//printf("%d\n", strlen("abc"));
//
//	printf("%d", printf("%d", printf("%d", 43)));
//	//4321
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的声明-告知
//	//函数写在main后面要声明
//	int Add(int, int);
//
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}

