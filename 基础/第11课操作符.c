#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//操作符
//算术操作符：+ - * / %


//
//int main()
//{
//	//int a = 9 / 2;//是4
//	//float a = 9 / 2;//是4.00000
//	//  /号两边是整数那只会执行整数除法
//	//float a = 9 / 2.0;//是4.5应为有2.0就不是整数了
//
//	//int a = 9 % 2;//  %号是去模（余）
//	//printf("%d\n", a);
//
//	return 0;
//}

////位移操作符：>>  <<
//int main()
//{
//	int a = 2;
//	int b = a << 1;
//	//左移操作符，移动的是二进制位
//	printf("%d\n", b);
//
//	return 0;
//}

//位操作符：
//  &  按位与
//  |	按位或
//  ^  按位异或

//赋值操作符
//  =
//  +=
//  -=
//  *=
//  /=
//  &=
//  ^=
//  |=
//  >>=
//  <<=
//int main()
//{
//	int a = 2;
//	a = a + 5;
//	a = 6;
//	a += 5;
//
//	a = a - 3;
//	a -= 3;
//
//	a = a % 3;
//	a %= 3;
//
//	printf("%d\n", b);
//
//	return 0;
//}

//单目操作符
//  ！			 逻辑反操作
//  -			 负值
//  +			 正值
//  %			 取地址
//  sizeof		 操作数的类型长度（以字节为单位）
//  ~			 对一个数的二进制按位取反
//  --			 前置，后置--
//  ++			 前置，后置++
//  *			 简介访问操作符（解引用操作符）
//  （类型）     强转类型转换

//int main()
//{
//	//0 表示假，非0就是真
//	int a = 10;
//	printf("%d\n", !a);
//
//	return 0;
//}

//
//int main()
//{
//	//sizeof是一个操作符
//	// 不是函数
//	//计算类型或者变量的大小
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//
//	return 0;
//}

//int main()
//{
//	//10*4=40
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//计算的是数组的总大小，单位是字节
//	printf("%d\n", sizeof(arr[0]));
//	int  sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	
//	printf("%d\n", ~a);
//	// ~ 按位取反（二进制位）
//	//把所以二进制位中的数字。1变成0，0变成1
//	return 0;
//}

//int main()
//{
//	int a =10;
//	//int b = ++a;//前置++ 是先++，在使用
//
//	int b = a++;//后置++，是先使用，在++
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//	
//	return 0;
//}


//int main()
//{
//	//强制类型转换
//	int a =(int) 3.14;
//
//	printf("%d\n", a);
//
//	return 0;
//}

//关系操作符
//  >
//  >=
//  <
//  <=
//  !=    用于测试“不相等”
//  ==	  用于测试“相等”



//逻辑操作符
//  &&   逻辑与
//  ||   逻辑或


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//
//	printf("%d\n", c);
//
//	return 0;
//}


//条件操作符
//  exp1？exp2:exp3
//  exp1成立，exp2计算，整个表达式的结果是exp2的结果
//	exp2不成立，exp3计算，整个表达式的结果是exp3的结果

int main()
{
	int a = 0;
	int b = 3;
	int max = 0;
	if (a > b)
		max = a;
	else
		max = b;
	max = a > b ? a : b;
	printf("%d\n",max);

	return 0;
}
