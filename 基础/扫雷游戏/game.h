#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<time.h>


#define EASY_COUNT 80

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//初始化棋盘的函数
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);


//打印棋盘的函数
void DisplayBoard(char board[ROWS][COLS], int row, int col);


//布置雷的函数
void SetMine(char mine[ROWS][COLS], int row, int col);

//排查雷的函数
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
