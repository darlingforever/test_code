#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[3] = { 0 };
	int brr[3] = {0};
	
	for (int i = 0; i < 3; i++)
	{
		printf("%p ", &arr[i]);
	}
	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%p ", &brr[i]);
	}
	return 0;
}
