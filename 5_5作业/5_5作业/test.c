#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = (3, 4);
//	printf("%d\n", a);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 10,9,8,7,6 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n\n");
//	for (int i = 0; i < sz; i++)
//	{
//		int temp = 0;
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	
//	
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//void init(int arr[], int len);
//void print(int arr[], int len);
//void reverse(int arr[], int len);
//void test(int arr[], int len);
//int main()
//{
//	int arr[10] = { 1,2,3 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	print(arr, len);
//	printf("\n");
//	init(arr,len);
//	print(arr, len);
//	printf("\n");
//	test(arr, len);
//	reverse(arr, len);
//	print(arr, len);
//	
//
//	return 0;
//}
//void init(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//void reverse(int arr[], int len)
//{
//	int left = 0;
//	int right = len-1;
//	while(left<right)
//	{
//		int* temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//
//}
//void test(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		 scanf("%d", &arr[i]);
//		
//	}
//}


#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10-1; i++)
	{
		for (int j = 0; j <10-1-i ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}


		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
