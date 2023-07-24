#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define A 6
int main()
{
	int arr[A] = { 1,2,3,4,5 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz;i++)
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}


#include <stdio.h>
void reverse(char arr[], int a);
int main() {
    char arr[10000] = { 0 };
    int count = 0;
    for (int i = 0; i < 10000; i++)
    {
        scanf("%c", &arr[i]);//ab  arr[2]=c arr[3]=' ' arr[4]=' '
        count++;            //1 2    3        4          5
        if (arr[i] == '\n')
            break;
    }
    count --;
    reverse(arr, count);


    return 0;
}
void reverse(char* p, int a)
{
    p = p + a;
    for (int i = 0; i <= a; i++)
    {

        printf("%c", *p--);
    }
}







#include<stdlib.h>
#include<stdio.h>
int main()
{
	printf("            *            \n");
	printf("          * * *          \n");
	printf("        * * * * *        \n");
	printf("      * * * * * * *      \n");
	printf("    * * * * * * * * *    \n");
	printf("  * * * * * * * * * * *  \n");
	printf("* * * * * * * * * * * * *\n");
	printf("  * * * * * * * * * * *  \n");
	printf("    * * * * * * * * *    \n");
	printf("      * * * * * * *      \n");
	printf("        * * * * *        \n");
	printf("          * * *          \n");
	printf("            *            \n");

	
	return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i=0; i < 100000; i++)
	{
		int n = i;
		int sum = 0;
		int count = 0;
		while (n != 0)//判断是几位数
		{
			n /= 10;//100  10  1
			count++;// 1    2   3
		}
		n = i;
		while (n != 0)
		{
			sum += pow((n % 10), count);
			n /= 10;
			
		}
		if (sum == i)
			printf("%d:水仙花数\n", i);
		

	}

	return 0;
}


#include<stdio.h>
int main()
{
	int Sn = 0;
	int a = 0;
	int n = 5;
	scanf("%d", &a);
	while (n != 0)
	{
		Sn += n * a;
		a *= 10;
		n--;
	}
	printf("%d\n", Sn);
	return 0;
}
