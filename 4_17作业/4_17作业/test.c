#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	for (int i = 0; i < 9; i++)
	{
        for (int j = 0; j <= i; j++)
			printf("%d * %d = %d ", (i + 1), (j + 1), (i + 1) * (j + 1));
		printf("\n");
	}
		
			
}

//
//#include <stdio.h>
//int main()
//{
//	int arr[10] = {0};
//	int max = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//}
 

//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	double sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += (1.0 / i)*a;
//		a = -a;
//	}
//	printf("%lf\n", sum);
//}


//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//			sum++;
//		if (i % 10 == 9)
//			sum++;
//
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,2,2,2,3,4,5,6,7 };
//	int left = 0;
//	int right = sizeof(arr)/sizeof(int)-1;
//	int k = 7;
//	int	mid = (left + right) / 2;
//	int flag = 0;
//	while (left <= right)
//	{
//		if (arr[mid] == k)
//		{
//			printf("找到了，下标是%d\n", mid);
//			flag = 1;
//			break;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else 
//		{
//			right=mid - 1;
//		}
//		mid = (left + right) / 2;
//
//	}
//	if(flag==0)
//		printf("找不到喽！");
//		return 0;
//	}
