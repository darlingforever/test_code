#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	long long sum=0; 
//		for (int i = 1; i <= 30; i++)
//		{
//			int ret = 1;
//			 for (int j = 1; j <=i; j++)
//				{
//					ret = ret * j;
//				 }
//		sum+= ret;
//		}
//		printf("%lld\n", sum);
//		return 0;
//		
//}
 
 

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//升序
	//printf("%d\n", sizeof(arr));//计算的数组的总大小，单位是字节
	//printf("%d\n", sizeof(arr[0]));//4
	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	int k = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//1
	int left = 0;
	int right = sz-1;
	int flag = 0;//flag的作用是标志是否找到了
	//2
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] == k)
		{
			printf("找到了,下标是:%d\n", mid);
			flag = 1;
			break;
		}
		else if (arr[mid] < k)
		{
			left = mid;
		}
		else
		{
			right = mid;
		}
	}
	//1 2
	if (flag == 0)
		printf("没找到\n");

	return 0;
}
