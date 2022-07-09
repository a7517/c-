#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//在while循环中，break用于永久的终止循环
//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

//在while循环中国，continue的作用是跳过本次循环continue后面的代码
//直接去判断部分，看是否进行下一次循环
//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

//getchar

//EOF是end of file 是文件的结束标志
//
//int main()
//{	
//	int ch = getchar();
//	printf("%c\n", ch);
//	putchar(ch);//输出一个字符
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//ctel+z的时候getchar就读取结束
//	while ((ch=getchar())!=EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认密码(Y/N):>");
//	//清理缓冲区
//	//getchar();//处理‘\n’
//
//	//清理缓冲区中的多个字符
//	int tmp = 0;
//	while ((tmp=getchar())!='\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch < '9')
		//小于字符0和大于字符9，排除除数字以外的字符
			continue;
		pitchar(ch);
	}
}