#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//库函数
//int main()
//{
//	char arr1[] = { 0 };
//	char arr2[] = "hello it";
//	strcpy(arr1, arr2);
//	//是把arr2的字符串复制到arr1中
//	printf("%s", arr1);
//	//打印arr1这个字符串%s - 以字符串的格式打印
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	//把arr空间的前5个字符设置成x
//	printf("%s\n", arr);
//	
//	return 0;
//}

//自定义函数

//函数的定义
//int get_max(int x,int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else {
//		z = y;//返回z 返回较大值
//	}
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的调用
//	int max = get_max(a, b);
//
//	printf("max=%d\n", max);
//
//	return 0;
//}

//函数返回类型的地方写成 void 
//表示这个函数不返回任何值，也不需要返回

//写出问题了

//Swap1在被调用的时候，实参传给形参。
//其实形参是实参的一份零时拷贝
//void Swap1(int x,int y)
////传值调用
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//
//}
//
//void Swap2(int* pa, int* pb)
////传址调用
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个函数，  交换2个整型变量的值
//	Swap1(a, b);
//	printf("交换前:a=%d b=%d\n", a, b);
//	//利用指针来交换
//	Swap2(&a, &b);
//	printf("交换后:a=%d b=%d\n", a, b);
//	return 0;
//}
//




//int is_prime(int n)
//{
//	//算素数是把引入的n除以从2开始的数
//	int j = 0;
//	for (j = 2;j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
////100-200之间的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100 ; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d是素数\n",i);
//		}
//		
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//

//
//判断1000-2000的闰年
//is_leap_year
//如果是闰年返回1
//不是闰年返回0

//int is_leap_year(int x)
//{
//	//能被4整除，不能被100整除
//	//能被400整除
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_leap_year(i) == 1) {
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}



int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}

	}
	return -1;//找不到
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 17;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//找到就返回找到的位置的下标
	//找不到就返回-1
	//数组arr传参，实际传递的不是数组的本身
	//仅仅传过去了数组首元素的地址
	int ret = binary_search(arr,key,sz);
	if (-1 == ret)
	{
		printf("找不到：%d\n", key);
	}
	else
	{
		printf("找到：%d\n", key);
	}
	return 0;
}