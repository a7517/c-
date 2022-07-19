#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	int  i = 1;
//	do
//	{
//		printf("%d", i);
//		i++;
//	} while (i<=10);
//	return 0;
//}

//计算n的阶乘
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int sum =1;
//	printf("请输入n\n");
//	//scanf（"%d",&n）是用来接收输入n的值的
//	scanf("%d",&n);
//
//	do
//	{
//		sum = sum * i;
//		i++;
//	} while (i <= n);
//
//	printf("sum=%d",sum);
//	return 0;
//}



////计算1！+2！+3！……+10！
//int main()
//{
//	int i = 1;
//	int n = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		n = n * i;
//		sum = sum + n;
//
//	}
//	printf("sum=%d", sum);
//	return 0;
//}


//在一个有序数组中查找具体的某个数字n。
//编写int binsearch (int x,int v[],int n);功能
//在v[0]<=v[1]<=v[2]<=v……<=v[n-1]的数组中查找x
//
//int main()
//{
//	int  arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数字
//	//在arr这个有序的数组中查找k（7）的值
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//数组的元素个数
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if(arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("找不到了\n");
//		}
//	
//	}
//	return 0;
//}


//编写代码，演示多个字符从两端移动，向中间汇聚。
//
//#include<Windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit！！！！！！";
//	char arr2[] = "##########################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//1000就是延迟1s
//		//Sleep（数字）是设计延迟的
//		//用他要在头文件加上#include<Windows.h>
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//
//	return 0;
//}




//编写代码实现，模拟用户登录场景，并且只能登录3次
//（只允许输入三次密码，如果三次均输入错误，则退出程序））
//
//int main()
//{
//	int  i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		char password[20] = { 0 };
//		printf("请输入密码");
//		scanf("%s", password);
//		//strcmp是比较字符串的
//		if (strcmp(password, "fuhao") == 0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//
//	}
//
//	if (i == 3)
//	{
//		printf("三次密码都错误，退出登录\n");
//	}
//	return 0;
//
//}




//写一个猜数字游戏
//1.自动产生一个1-100之间的随机数
//2.猜数字
// a.猜对了，游戏结束
//b.你猜错了，会告诉你猜大了，还是猜小了，继续猜。知道猜对
//3.游戏一个一直玩，除非退出游戏


//自己写的
//#include<stdlib.h>
//int main()
//{
//	int randoma = rand()%100+1;
// //就是%100的余数是0-99
//	//rand()%100是产生随机数0-99，
//	//%100+1是为了产生0-99基础上加1的随机数
//	//rand（）要配合头文件#include<stdlib.h>
//	int number = 0;
//	while (1)//while（1）是无线循环
//	{
//		printf("猜数字:");
//		scanf("%d", &number);
//
//		if (number == randoma)
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//		else if (number >= randoma)
//		{
//			printf("你猜大了\n");
//		}
//		else if (number <= randoma)
//		{
//			printf("你猜小了\n");
//		}
//
//
//	}
//	return 0;
//}

//安视频的思路
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("********************\n");
	printf("*******1.play*******\n");
	printf("*******0.exit*******\n");
	printf("********************\n");
}
void game()
{
	//时间，时间戳
	//srand((unsigned int)time(NULL));
	int randoma = rand()%100+1;
	//RAND()函数返回了一个0-32767之间的数字
	//rand()%100是产生随机数0-100，
	//%99+1是为了产生0-99基础上加1的随机数
	//rand（）要配合头文件#include<stdlib.h>
	//注意光是rand（）产生的随机数是每次启动都相同的
	//为了确保rand（）产生随机数要在前面加
	//一个srand（）加一次就行，记住srand（）不能多次运行
	//srand((unsigned int)time(NULL));
	//(unsigned int)time(NULL)是时间戳的意思
	//暂时不理解怎么用
	int number = 0;
	while (1)
	{
		printf("猜数字:");
		scanf("%d", &number);

		if (number == randoma)
		{
			printf("恭喜你猜对了\n");
			break;
		}
		else if (number > randoma)
		{
			printf("你猜大了\n");
		}
		else if (number < randoma)
		{
			printf("你猜小了\n");
		}
	}
}
int main()
{
	//时间，时间戳
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			printf("游戏开始\n");
			game();
			break;
		}
		case 0:
		{
			printf("游戏结束\n");
			break;
		}
		default:
			printf("输入错误\n");
			break;
		}

	} while (input);
	return 0;
}