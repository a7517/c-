#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//
//int main()
//{
//	char str[] = "hello bit";
//	// [hello bit\0]10个
//	printf("%d %d\n", sizeof(str), strlen(str));
//	// 10  9
//	//strlen - 函数-求字符串长度的，找、0之前出现的字符个数
//	//sizeof - 操作符-计算变量/类型所占的内存大小，单位是字节
//	
//	char acX[] = "abcdefg";// a b c d e f g \0
//	char acY[] = {'a','b','c','d','f','g'};//a b c d e f g
//	//    A.数组acX和数组acY等价 no
//	//    B.数组acX和数组acY的长度相同  no
//	//	  C.数组acX的长度大于数组acY的长度 yes
//	//	  D.数组acX的长度小于数组acY的长度 no
//
//	
//	
//	return 0;
//}



//实现函数init()初始化数组为全0
// 实现print（） 打印数组的每个元素
// 实现reverse（） 函数完成数组元素的逆置
//
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//
//	}
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr, sz);
//	reverse(arr,sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}



//将数组A中的内容和数组B中的内容进行交换（数组一样大）

//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	//int arr3[5] = { 0 };
//	//错误的
//	//数组名是数组首元素的地址 - 
//	//arr3 = arr1;
//	//arr1 = arr2;
//	//arr2 = arr3;
//
//	return 0;
//}


