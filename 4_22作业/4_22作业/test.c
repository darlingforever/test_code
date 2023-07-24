#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void fun();
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	fun(line);
//	return 0;
//}
//
//void fun(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//}
//
//


//#include <stdio.h>
//void swap(int* x, int* y);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d\n", a, b);
//	swap(&a,&b);//输入地址，调用函数
//	printf("%d %d\n", a, b);
//}
//
//void swap(int* x, int* y)//创建两个指针变量去接收两个实际参数的地址
//{
//	int temp = *x;//在进行交换的时候要解引用操作，这样才能交换值，不解引用相当于交换地址，但是地址里存的值并没有发生改变，等于白干
//	*x = *y;
//	*y = temp;
//}


//#include <stdio.h>
//int fun(int input);
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int charge=fun(year);
//	if (charge == 1)
//		printf("%d是闰年", year);
//	else
//		printf("%d不是闰年", year);
//}
//int fun(int input)
//{
//	return ((input % 4 == 0 && input % 100 != 0) || (input % 400 == 0));
//
//}


#include <stdio.h>
#include <math.h>
int main()
{
	int count = 0;
	for (int i = 100; i <= 200; i++)
	{
		if (fun(i) == 1)
		{
            printf("%d\n", i);
		    count++;
		}
		
	}
	printf("\n%d\n", count);

}
int fun(int n)
{
	for (int j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;//在此之前，我写的就不能直接返回1，因为每次j都会加到同n一样大，永远判断不出来
 }


//int fun(int n)//计算过于庞大了
//{
//	int i = 0;
//for (i = 2; i <= n; i++)
//  {
//	if(n==i)
//	    return 1;
//	if (n % i == 0)
//		return 0;
//	
//    }
//
//}