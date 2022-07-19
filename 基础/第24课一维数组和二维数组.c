#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//一维数组
//type_t 是指数组的元素类型
//const_n 是一个常量表达式，用来指定数组的大小



//二维数组
//int main()
//{
//	int arr[][4] = { {3,4},{1,2},{5,6} };
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}



//冒泡排序 bubble_sort(int arr[])

//void bubble_sort(int arr[],int sz)//形参的arr本质是指针
//{
//
//	//确定趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	//排序为升序-冒泡排序
//		//计算数组元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);//数字在传参的时候传递的是首元素的地址
//
//
//	return 0;
//}


//数组名是什么？
//数组名是数组首元素的地址
//但是有2个例外
//1.sizeof（数组名）-数组名表示整个数组
//-计算的是整个数组的大小单位是字节
//2.&数组名-数组名表示这个数组-取出的是整个数组的地址

int main()
{
	int arr[10] = { 0 };

	printf("%p\n", &arr);
	printf("%p\n", &arr+1);//1-&arr取出的是数组的地址

	printf("%p\n", arr);//2
	printf("%p\n", arr+1);//2

	//int sz = sizeof(arr);//数组名表示整个数组
	//printf("%d\n", sz);

	//printf("%p\n", &arr[0]);
	//printf("%p\n", arr);//数组名是首元素的地址
	return 0;
}

