#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*******************\n");
	printf("*****  1.play  ****\n");
	printf("*****  0.exit  ****\n");
	printf("*******************\n");

}


void game()
{
	//创建数组
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	
	//展示棋盘
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//设置地雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);


	//扫雷
	FindMine(mine,show, ROW, COL);


}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择：>");
			break;
		}

	} while (input);
}