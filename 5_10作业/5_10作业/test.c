#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	printf("%d %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d\n", a, b);
	return 0;
}



#include<stdio.h>
int main()
{
	int a = -1;//00000000000000000000000000001111
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((a & 1) == 1)
		{
			count++;
		}
		a = a >> 1;
	}
	printf("%d\n", count);
	return 0;
}


 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
 *
 *
 * @param n int����
 * @return int����
 */
int NumberOf1(int n) {
    // write code here
    int count = 0;
    for (int i = 0; i < 32; i++)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;


    }

    return count;


#include<stdio.h>//û�дﵽ��Ҫ�Ľ��
int main()
{
	int a = 15;
	int b = 1;
	for (int i = 0; i < 32; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d", a&1);//10000000000000000000000000000000()
			

		}a=a >> 1;
     }
	printf("\n");
	a = 15;
	for (int i = 0; i < 32; i++)
	{
		if (i % 2 == 1)
		{
			printf("%d", a&1);
			
		}a=a >> 1;
	}
	return 0;
}


#include<stdio.h>
int main()
{

	return 0;
}


#include <stdio.h>
int fun(int x, int y);
int main() {
    int a = 0;
    int b = 0;
    int count = 0;
    scanf("%d %d", &a, &b);
    for (int i = 0; i < 32; i++)
    {
        if (fun(a, b))
        {
            count++;
        }
        a = a >> 1;
        b = b >> 1;
    }
    printf("%d\n", count);

    return 0;
}
int fun(int x, int y)
{
    if ((x & 1) != (y & 1))
    {
        return 1;
    }
    return 0;

}

