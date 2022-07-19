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
	//储存数据-二维数组
	char board[ROW][COL];
	//初始化棋盘-初始化空格
	InitBoard(board, ROW, COL);

	//打印一下棋盘-本质是打印数组内容
	DisplayBoard(board, ROW, COL);

	char ret = 0;//接收游戏状态
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢得游戏
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		//判断玩家是否赢得游戏
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");	
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");	
	}
	else 
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
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
			printf("三子棋游戏\n");
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