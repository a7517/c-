#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//
//int main()
//{
//	int a = -1;
//
//	int b = a >> 1;
//	printf("b=%d\n", b);
//
//	return 0;
//}




//int main()
//{
//	int a = 10;
//
//	int b = a >> 1;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}



//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	int c = a ^ b;
//	// ^ ---按（二进制）位异或
//	// 对应的二进制位进行异或
//	// 相同为0，相异为1，
//	//00000000 00000000 00000000 00000011
//	//00000000 00000000 00000000 00000101
//	//00000000 00000000 00000000 00000110
//
//
//
//	//int c = a | b;
//	// | ---按（二进制）位或
//	// 相异为1，
//	//00000000 00000000 00000000 00000011
//	//00000000 00000000 00000000 00000101
//	//00000000 00000000 00000000 00000111
//
//
//
//	//int c = a & b;
//	//&--按（二进制）位于
//	//相异为0，全是1为1
//	
//	//00000000 00000000 00000000 00000011
//	//00000000 00000000 00000000 00000101
//	//00000000 00000000 00000000 00000001
//
//	printf("c=%d\n", c);
//
//
//	return 0;
//}



//交换两个int变量的值，不能使用第三个变量，
//即a=3，b=5，交换后a=5，b=3
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//	
//	//交换
//	// 数值太大会溢出
//	//printf("a=%d b=%d\n", a, b);
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("a=%d b=%d\n", a, b);
//	return 0;
//}



//编写代码实现，求一个整数存储在内存中的二进制中1的个数








//int main()
//{
//	int a = 13;
//	//把a的二进制中的第5位置成1
//	a = a | (1 << 4);
//	printf("a=%d\n", a);//29
//	//把a的二进制中的第5位置成0
//	a = a & ~(1 << 4);
//	printf("a=%d\n", a);//13
//
//	//
//	// 00000000000000000000000000001101
//	// 00000000000000000000000000010000
//	// 00000000000000000000000000011101
//	//
//	//1<<4
//	// 00000000000000000000000000000001
//
//	// 00000000000000000000000000011101
//	// 11111111111111111111111111101111
//	// 00000000000000000000000000010000
//	//1<<4
//	return 0;
//}



//int mian()
//{
//	int a = 10;
//	a = 100;
//	//a = a + 100;
//	//a += 100;
//	//这两种写法是一样的结果
//
//	return 0;
//}



//单目操作符 - 只有一个操作数


//sizeof  操作数的类型长度（以字节为单位）
//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));//
//	printf("%d\n", s);//
//	//sizeof括号中放的表达式是不参与运算的
//
//
//
//	//int a = 10;
//	//int  arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));//单位是字节
//	//printf("%d\n", sizeof(int [10]));// 40 - int[10]是arr数组的类型
//
//	//printf("%d\n", sizeof(a));//计算a所占空间的大小，单位是字节
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof a);
//	//sizeof是一个操作符，不是函数
//	
//	return 0;
//}



// ~ 对一个数的二进制按位取反

//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001 - 原码
//	//11111111111111111111111111111110 - 反码
//	//11111111111111111111111111111111 - 补码
//	// ~ 按位取反
//	//11111111111111111111111111111111
//	//00000000000000000000000000000000
//	printf("a=%d\n", a);
//	int b = ~a;
//	printf("b=%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	
//	printf("%d\n", a--);//10
//	printf("%d\n", a);//9
//
//	//int b = a++;//后置++，先使用，再++
//	//int b = ++a;//前置++，先++，后使用
//
//	//int b = a--;//后置--，先使用，再--
//	//int b = --a;//前置--，先--，后使用
//
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	return 0;
//}
//


//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);// & -取地址操作符
//	int * pa = &a;//pa是用来存放地址的，-pa就是一个指针变量
//	*pa = 20;///* - 解引用操作符， - 间接访问操作符
//	printf("%d\n", a);//
//
//	return 0;
//}



//int main()
//{
//
//	//(类型)强制类型转换
//	int a = (int)3.14;
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++ || ++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	//1 2 3 4
//	return 0;
//
//
//}



//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++ || ++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	//2 3 3 5
//	return 0;
//
//
//}



//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	//2 2 3 5
//	return 0;
//
//
//}

//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	//1 3 3 4
//	return 0;
//
//
//


//三目操作符
//   ？   :  
//
//int main()
//{
//	int a = 3;
//	int b = 0;
//	//if (a > 5)
//	//	b = 1;
//	//else
//	//	b = 1;
//
//	//三目操作符
//	b = a > 5 ? 1 : -1;
//
//
//	return 0;
//}


//逗号表达式
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 5;
//
//	//逗号表达式，要从左向右依次计算，但是整个表达式的结果是最后一个表达式的结果
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}



//[]下标引用操作符
//操作数：一个数组名+一个索引值



//结构成员访问操作符
//.    结构体.成员名
//->    结构体指针->成员名



//结构体
//int float char short
//double long
//
//书:书名，书号，出版社，作者，定价，等相关信息
//人; 名字，年龄，性别

//创建了一个自定义的类型
//struct Book 
//{
//	//结构体的成员（变量）
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
//	int num = 0;
//	//
//	struct Book b = { "C语言","c20210509",55 };
//	struct Book* pb = &b;
//	
//	printf("书名:%s\n", pb->name);
//	printf("书号:%s\n", pb->id);
//	printf("价钱:%d\n", pb->price);
//	//结构体指针->成员名
//	
//	//printf("书名:%s\n", (*pb).name);
//	//printf("书号:%s\n", (*pb).id);
//	//printf("价钱:%d\n", (*pb).price);
//
//	//printf("书名:%s\n", b.name);
//	//printf("书号:%s\n", b.id);
//	//printf("价钱:%d\n", b.price);
//	return 0;
//}



//表达式求值
//表达式求值的顺序一部分是由操作符的优先级和结合性决定
//同样，有些表达式的操作数在求值的过程中可能需要转换为其他类型

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a + b * 7;
//
//
//	return 0;
//}


//隐式类型转换
//c的整形算术运算总是以缺省整型类型的精度来进行
//为了获得这个精度，表达式中的字符和短整型操作数在使用之前被转换为普通整型，
//这种转换称为整型提升

//如何进行整体提升
//整形提升是按照变量的数据类型的符号位来提升的

//
//int main()
//{
//	//char类型只能存8个bit位
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//
//	char c = a + b;
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	
//
//	//10000010 - c
//	//11111111111111111111111110000010 - 补码
//	//11111111111111111111111110000001 - 反码
//	//10000000000000000000000001111110 - 原码
//	//发现a和b都是char类型的，都没有达到一个int大小
//	//这里就会发生整型提升
//
//	printf("%d\n", c);//-126
//
//	return 0;
//}


//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	// a和b都会进行整形提升所以就不是原来的
//
//	if (c == 0xb6000000)
//		printf("c");
//
//	return 0;
//
//}


//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1 
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	short s = 5;
//	sizeof(s = a + 3);
//	a + b;//值属性，类型属性 int
//	return 0;
//}



//算术转换
//如果某个操作符的各个操作数属于不同类型，
//那么除非其中一个操作数的转换为另一个操作数的类型，
//否则操作就无法进行，下面的层次体系称为寻常算术转换


// long double
// double
// float
// unsigned long int
// long int
// unsigned int
// int
//

//int main()
//{
//	int a = 4;
//	float f = 4.5f;
//	a + f;
//	//a要转换成float类型再和f相加
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int c = a + b * 7;//优先级决定了计算顺序
//	int c = a + b + 7;//优先级不起作用，结合性决定了计算顺序
//
//
//	return 0;
//}


//问题代码
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	//2-3*4=-10
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//输出多少
//	return 0;
//
//}



//问题代码
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//
//	return 0;
//}
//vs - 12
//gcc - 10


int main()
{
	char str[] = "hello bit";
	printf("%d %d\n", sizeof(str), strlen(str));
	return 0;
}
