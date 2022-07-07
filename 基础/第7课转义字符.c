#include<stdio.h>
#include<string.h>
//转义字符
//转换了它原来的意思
//int main()
//{
//	//printf("c:\test\test.c");
//	
//	//换行
//	//printf("ab\ncd");
//	printf("%c\n",'\'');
//	printf("%s\n","a");
//	printf("%s\n","\"");
//	//printf在打印数据的时候，可以指定打印的格式
//	return 0;
//}

//printf("%d", 100);%d是打印整形
//printf("%c", 'a');%c是打印字符
//printf("%s", "abc");%c是打印字符串

// \ddd --ddd表示1-3个八进制的数字。如：\130 是x
// \xdd --dd表示2个十六进制的数字。如： \x30 是0

//有个ASCII表可以查询
int main()
{
	//printf("%c\n", '\130');//八进制的130是十进制的
	//X --ASCII码值是88

	//printf("%c\n", '\101');//A-65-8进制是101

	//printf("%c\n", '\x30');//48-'0'

	//printf("%d\n",strlen("abc"));//长度为3
	printf("%d\n", strlen("c:\test\328\test.c"));
	//长度为12

	return 0;
}
