#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//总结
//指针是用来存放地址的，地址是唯一标示一块地址空间的
//指针的大小在32位平台是4个字节，在64位平台是8个字节


//int main()
//{
//	int a = 10;//在内存中开辟一块空间
//	int* p = &a;//这里我们对变量a，取出它的地址，可以使用&操作符
//				//将a的地址存放在p变量中，p就是一个之指针变量
//
//	return 0;
//
//}



//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));//4
//	printf("%d\n", sizeof(pc));//4
//	printf("%d\n", sizeof(pf));//4
//
//	return 0;
//}



//指针类型的意义
//1.指针类型决定了：指针解引用的权限有多大
// 比如char*的指针解引用只能访问一个字节，
// 而int*的指针的解引用就能访问四个字节
//2.指针类型决定了，指针走一步，能走多远（步长）
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}




//野指针：
//概念：野指针就是指针指向的位置不可知（随机的，不正确的，没有明确限制的）

//
//int main()
//{
//	//1.指针没有初始化
//	//这里的p就是一个野指针
//	//int* p;//p是一个局部的指针变量，局部变量不初始化的话，默认是随机值
//	//*p = 20;//非法访问内存了
//
//	//2.越界访问
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		//当指针指向的范围超出数组arr的范围时。p就是野指针
//		*p = i;
//		p++;
//	}
//
//
//	return 0;
//}

//3.指针指向的空间释放

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//
//	return 0;
//}



//如何规避野指针
//1.指针初始化
//2.小心指针越界
//3.指针指向的空间释放即时置NULL
//4.指针使用之前检查有效性



//int main()
//{
//	//当前不知道p应该初始化为什么地址的时候，直接初始化为NULL
//	//int* p=NULL;
//	//明确知道初始化的值
//	//int a = 10;
//	//int* ptr = &a;
//
//	//c语言本身是不会检查数据的越界行为的
//
//	int* p = NULL;
//	if (p != NULL)
//	{
//		*p = 10;
//	}
//
//	return 0;
//}


//指针的运算
//指针 + -整数
//指针 - 指针
//指针的关系运算

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p<=pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char c[5];
//	printf("%d\n", &arr[9] - &c[0]);//是错误的
//	//指针和指针相减的前提
//	//两个指针指向同一块空间
//
//	//printf("%d\n", &arr[9] - &arr[0]);
//	//指针-指针得到的是两个指针之间的元素个数
//
//	return 0;
//}


//计数器
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

int my_strlen(char* str)
{
	char* start = str;
	while (*str!='\0')
	{
		str++;
	}
	return str - start;
}
int main()
{

	//strlen();-求字符串长度
	//递归
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d\n", len);

	return 0;
}



