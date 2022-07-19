#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//函数的递归
//递归的连个必要条件
//存在限制条件，当满足这个限制条件的时候，递归便不再继续
//每次递归调用之后越来越接近这个限制条件


//写递归代码的时候
//1.不能写死递归。都有跳出条件，每次递归逼近跳出条件
//2.递归层次不能太深


//
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d\n", n % 10);
//
//}
//
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//递归 - 函数自己调用自己
//	print(num);
//	//print函数可以打印参数部分数字的每一位
//
//	return 0;
//
//}



//编写函数不允许创建临时变量，求字符串的长度

//int main()
//{
//	char arr[] = "bit";
//	//['a']['b']['c']['\0']
//	//
//	//模拟实现一个strlen函数
//	printf("%d\n", strlen(arr));
//	
//	return 0;
//}


//求n的阶乘。（不考虑溢出）


////求10个整数的最大值
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
// return 0;
//}

//打印9*9乘法口诀表
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//			//%2d是要2个数的空间没有2位数就用空格代替的
//		}
//		printf("\n");
//	}
//  return 0;
//}




//打印乘法口诀表，输入几打印几
//输入12打印12*12
//用函数
//void print_talbe(int x)
//{
//	int i = 1;
//	for (i = 1; i <= x; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//			//%2d是要2个数的空间没有2位数就用空格代替的
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int n = 0;
//	printf("输入数字");
//	scanf("%d", &n);
//	print_talbe(n);
//	
//	//函数的起名是非常关键的，函数的名字最好能体现函数的功能
//	
//	return 0;
//}


//编写一个函数reverse_string（char*string）实现递归
//实现：将参数字符串中的字符串反向排列，不是逆序打印
//要求不能使用c函数库中的字符串操作函数
//比如：
//     char arr[]="abcdef";

//逆序排列后数组内容变成fedcba
//
// 
// 这是循环的方式
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
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);//fedcba
//	return 0;
//}

//递归方式实现

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
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	//判断条件
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);//fedcba
//	return 0;
//}

//计算一个数的每一位之和（递归实现）
//写一个递归函数DigitSum(n),输入一个非负整数，
//返回组成它的数字之和
//例如：调用DigitSum(1729)，则返回1+7+2+9，和是19


//int  DigitSum(int n)
//{
//	int sum = 0;
//	int x = n;
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("输入一个数");
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//
//	return 0;
//}



//递归实现n的k次方
//编写一个函数实现n的k次方，使用递归实现
//
//int Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k > 0)
//	{
//		return n * (Pow(n, k - 1));
//	}
//	else
//	{
//		return 1.0 / (Pow(n, k - 1));
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("请输入n和k的值");
//	scanf("%d %d", &n, &k);
//	int ret = Pow(n, k);
//	printf("%d\n", ret);
//	return 0;
//}




//计算斐波那契数
//递归和非递归分别实现求第n个斐波那契数

//例如
//输入5  输出5
//输入10 输出55
//输入2  输出1


int main()
{


	return 0;
}
