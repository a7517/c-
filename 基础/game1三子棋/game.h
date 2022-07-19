#define _CRT_SECURE_NO_WARNINGS 1


#pragma once
//头文件的包含

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//符号的定义
#define ROW 3
#define COL 3


//函数的申明

//初始化棋盘的
void InitBoard(char board[ROW][COL], int row, int col);


//打印棋盘的函数
void DisplayBoard(char board[ROW][COL], int row, int col);


//玩家下棋的函数
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋的函数
void ComputerMove(char board[ROW][COL], int row, int col);


//1.玩家赢了 - *
//2.电脑赢了 - #
//3.平局 -	Q
//4.游戏继续 - C


//判断游戏是否有输赢的函数
char IsWin(char board[ROW][COL], int row, int col);


//判断棋盘是否满了
int IsFull(char board[ROW][COL], int row, int col);


