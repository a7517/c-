#define _CRT_SECURE_NO_WARNINGS 1
//c语言-浮点数
//  char            字符数据型
//  short           短整型
//  int             整形
//  long            长整形
//  long long       更长的整形
//  float           单精度浮点数
//  double          双精度浮点数


//a
//'a'-字符a
#include<stdio.h>
int main()
{
    //字符类型，
    char ch = 'a';
    //整形
    int age = 20;
    //短整形
    short num = 10;
    //单精度浮点型
    float weight = 55;
    //双精度浮点型
    double d = 0.0;

    printf("hehe\n");
    printf("中华\n");
    //打印一个整数-%d
    printf("%d\n", 100);
    //sizeof -关键字 -操作符-计算类型或者变量所占空间的大小
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(short));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(long));
    printf("%d\n", sizeof(long long));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));


    return 0;
}