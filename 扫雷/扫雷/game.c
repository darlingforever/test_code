#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ret)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ret;
		}
	}
}


//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("********扫雷游戏********\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}



//设置地雷
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = MINE_NUM;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		
			if (board[x][y] == '0')
			{
				board[x][y] = '1';
				count--;
			}
		
	}
}

int GetMineCount(char mine[ROWS][COLS],int x,int y)
{
	return (mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0');
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	
	
		while (win<row*col-MINE_NUM)
		{
			printf("请输入排雷坐标：>");
			scanf("%d %d", &x,&y);
			if (x >= 1 && x <= row && y >= 1 && y <= col)
	        {
			if (mine[x][y] == '1')
			{
				printf("你被炸死了");
				DisplayBoard(mine, ROW, COL);
				break;

			}
			else
			{
				int count = GetMineCount(mine , x , y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;

			}
		    }
			else
			{
				printf("坐标非法，请重新输入：>");
			}
	}
		if (win == row * col - MINE_NUM)
		{
			printf("排雷成功");
			DisplayBoard(mine, ROW, COL);
		}

}

