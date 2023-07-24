#pragma once
#include <stdio.h>
#include <time.h>
#define ROW 3
#define COL 3

//��ʼ����������
void InitBoard(char board[ROW][COL],int row,int col);
//��ӡ��������
void DisplayBoard(char board[ROW][COL], int row, int col);
//����ƶ�����
void PlayerMove(char board[ROW][COL], int row, int col);
//�����ƶ�����
void ComputerMove(char board[ROW][COL], int row, int col);
//�ж�ʤ��
char IsWin(char board[ROW][COL], int row, int col);
