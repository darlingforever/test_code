#define _CRT_SECURE_NO_WARNINGS 1

//1:猜数字游戏
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void game()
{
	int number = rand() % 100 + 1;
	int guess = 0;
	
	while (1)
	{
		printf("请猜数字:");
		scanf("%d", &guess);
        if (guess == number)
		{
			printf("猜对了\n");
			break;
		}
		else if (guess < number)
		{
			printf("猜小了\n");
		}
		else 
		{
			printf("猜大了\n");
		}
	}
}
void menu()
{
	printf("**********************************\n");
	printf("*********** 1.play      **********\n");
	printf("*********** 0.exit      **********\n");
	printf("**********************************\n");
}

int main()
{
	srand((unsigned)  time(NULL));
	int input=0;
	do 
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入：");
			break;
		}
		


	} while (input);
	

	return 0;
}




#include <stdio.h>
//#include <strings.h>


int main() {
	long long a = 0;
	long long sum = 0, i = 0;
	scanf("%lld", &a);
	for (i = 1; i <= a; i++)
	{
		sum += i;
	}
	printf("%lld\n", sum);



	return 0;
}





#include <stdio.h>


int main() {
	int a, b, c, d, end = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	end = fun(fun(fun(a, b), c), d);
	printf("%d\n", end);
	return 0;
}
int fun(int x, int y)
{
	return x > y ? x : y;






#include <stdio.h>


	int main() {
		char a;
		while ((a = getchar()) != EOF)
		{
			if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
				printf("%c is an alphabet.\n", a);
			else
				printf("%c is not an alphabet.\n", a);
			getchar();
		}
		return 0;
	}




#include <stdio.h>


	int main() {
		double a, price = 0;
		int b, c, d;
		scanf("%lf %d %d %d", &a, &b, &c, &d);
		if (b == 11 && c == 11)
		{
			if (d == 1)
			{
				price = a * 0.7 - 50;
				if (price >= 0)
					printf("%.2lf", price);
				else
					printf("0.00");
			}
			else {
				{
					price = a * 0.7;
					if (price >= 0)
						printf("%.2lf", price);
					else
						printf("0.00");
				}
			}

		}
		else if (b == 12 && c == 12)
		{
			if (d == 1)
			{
				price = a * 0.8 - 50;
				if (price >= 0)
					printf("%.2lf", price);
				else
					printf("0.00");
			}
			else {
				{
					price = a * 0.8;
					if (price >= 0)
						printf("%.2lf", price);
					else
						printf("0.00");
				}
			}
		}
		else {
			if (price >= 0)
				printf("%.2lf", price);
			else
				printf("0.00");
		}



		return 0;
	}