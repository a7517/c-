#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//C语言提供的关键字
//1.C语言提供的，不能自己创建关键字
//2.关键字不能做变量名

//typedef 
//typedef unsigned int u_int;
////张三  --小三 
//int main()
//{
//	unsigned int num = 100;
//	u_int mum2 = 100;
//
//	return 0;
//}

//static -静态的
//1.static修饰局部变量
//2.static修饰全局变量
//3.static修饰函数

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}
//extern声明外部符号
//extern int g_val;
//int main()
//{
//
//	printf("%d\n", g_val);
//	return 0;
//}

//static 修饰的全局变量，使得这个全局变量只能在
//自己所在的源文件（.c）内部可以使用，
//其他源文件不能使用

//全局变量，可以在其他源文件内部使用，
//是因为全局变量具有外部链接属性
//但是被static修饰之后，就变成了内部链接属性。
//其他的源文件就不能链接到这个静态的全部变量


//声明函数
extern int Add(int, int);
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);

	return 0;
}
//static修饰函数，使得函数只能在自己所在的源文件
//内部使用，不能在其他源文件内部使用
//本质上：static是将函数的外部链接属性变成了内部链接属性
//（和static修饰全局变量一样）