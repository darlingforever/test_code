#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()                        //不太对头,有局限性
{
	//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
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

	//方法1
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

	//方法2
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
