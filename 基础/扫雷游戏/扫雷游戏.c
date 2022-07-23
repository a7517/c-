#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include"game.h"



void menu()
{
	printf("********************\n");
	printf("****  1.paly  ******\n");
	printf("****  0.exit  ******\n");
	printf("********************\n");

}

void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息

	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//打印一下棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);
	//排查雷
	FindMine(mine,show,ROW,COL);

}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>:");

		scanf("%d", &input);

		switch (input)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("游戏结束\n");
			break;
		}
		default:
		{
			printf("输出错误，请重新输入:>\n");
			break;
		}
		}
	} while (input);

	return 0;
}

//可以优化
// 1.如果不是雷周围没有雷展开一片
// 2.标记雷
//
