#define _CRT_SECURE_NO_WARNINGS 1
//放在代码的第一行
#include<stdio.h>
/*int main()
{
    //创建一个变量
    //类型    变量名字 =  0；
    //类型   变量的名字；//不推荐
    int age =20;
    double weight=75.3;

    age=age+1;
    weight=weight-10;
    printf("%d\n",age);
    printf("%lf\n",weight);
    return 0;
}*/
//%d*-整形
//%f-float
//%lf-duoble

//全剧变量  {}外部定义的
/*
int a=100;

int main()
{
    //局部变量  {}内部定义的
    //当局部变量和全局变量的名字冲突的情况下，局部优先
    //不建议吧全局变量和局部变量的名字写成一样
    int a=10;

    printf("%d\n",a);

    return 0;
}
*/


//写个袋面求2个整数的和
//scanf函数是输入函数
int main()
{
    int a = 0;
    int b = 0;
    int sum = 0;
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("sum=%d\n", sum);
    return 0;
}