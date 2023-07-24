#pragma once
#include <stdio.h>
#include <time.h>
#define ROW 3
#define COL 3

//初始化棋盘声明
void InitBoard(char board[ROW][COL],int row,int col);
//打印棋盘声明
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家移动声明
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑移动声明
void ComputerMove(char board[ROW][COL], int row, int col);
//判断胜利
char IsWin(char board[ROW][COL], int row, int col);
