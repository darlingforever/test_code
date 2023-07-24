#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


//��ʼ������
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


//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("********ɨ����Ϸ********\n");
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



//���õ���
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
			printf("�������������꣺>");
			scanf("%d %d", &x,&y);
			if (x >= 1 && x <= row && y >= 1 && y <= col)
	        {
			if (mine[x][y] == '1')
			{
				printf("�㱻ը����");
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
				printf("����Ƿ������������룺>");
			}
	}
		if (win == row * col - MINE_NUM)
		{
			printf("���׳ɹ�");
			DisplayBoard(mine, ROW, COL);
		}

}

