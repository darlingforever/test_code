#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 2, b = 3, c = 1,temp=0;
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = c;
//		c = b;
//		b = temp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//	
//
//
//}
//
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		cal(i);
//	}
//}
//cal(int n)
//{
//	int j = 2;
//	for (; j<n ; j++)
//	{
//		if (n % j == 0)
//			break;
//	}
//	if(j==n)
//	printf("%d是质数\n", n);
//}
//int main()
//{
//	for (int i = 1000; i <= 2000; i++)
//	{
//		fun(i);
//	}
//}
//fun(int n)
//{
//	if (n % 100==0)
//	{
//		if (n % 400==0)
//		{
//			printf("%d是世纪闰年\n", n);
//		}
//		
//			;
//	}
//	else
//	{
//		if (n % 4 == 0)
//		{
//			printf("%d是普通闰年\n", n);
//		}
//	}
//}
int main()
{
	int a = 99;
	int b = 45;
	int c = a % b;
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}
	printf("最大公约数为：%d\n", b);
}