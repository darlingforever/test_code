#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()                        //��̫��ͷ,�о�����
{
	//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
	int sodawater = 50;//20  10     5    2      1        1    0
	int bottle = 0; //   20  10    5     2+1    1+1      1     1 
	int count = 0;
	do
	{
		if (bottle == 2)
		{
			break;
		}
		count += sodawater;
		
		if (bottle % 2 == 1)
		{
			sodawater = bottle / 2;
			bottle = bottle / 2 + bottle % 2;
			continue;
		}
		
		bottle = sodawater;
		sodawater =bottle / 2;
			

	}while (bottle > 1&&sodawater!=0);
	printf("%d\n", count);


	return 0;
}


int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;


	scanf("%d", &money);

	//����1
	total = money;
	empty = money;
	while (empty > 1)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);


	return 0;
}


int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;


	scanf("%d", &money);

	//����2
	if (money <= 0)
	{
		total = 0;
	}
	else
	{
		total = money * 2 - 1;
	}
	printf("total = %d\n", total);


	return 0;
}
