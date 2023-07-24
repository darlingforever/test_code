#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//�˵�����
void menu()
{
	printf("************************\n");
	printf("******* 1��play  *******\n");
	printf("******* 0��exit  *******\n");
	printf("************************\n");
}
//��Ϸ����ʵ��
void game()
{
	char ret = 0;
	char board[ROW][COL] = {0};
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����ƶ�
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

	}
	if (ret == '*')
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else if (ret == 'Q')
		printf("ƽ��\n");
	
}

//������
int main()
{
	int input=0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}