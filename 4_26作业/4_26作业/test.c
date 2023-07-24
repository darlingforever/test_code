#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d\n", Fib1(num));
	printf("%d\n", Fib2(num));
}
Fib1(int n)//使用递归
{
	if (n <= 2)
		return 1;
	else
		return Fib1(n - 1)+Fib1(n-2);
}
Fib2(int n)//使用循环
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}


#include <stdio.h>
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	int ret=fun(n, k);
	printf("%d\n", ret);
}
fun(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else
	  return n * fun(n, k - 1);
		

}


#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = DigitSum(n);
	printf("%d\n", ret);
	return 0;
}
int DigitSum(n)
{
	if (n < 10)
		return n;
	else
		return n%10+DigitSum(n / 10);
}


#include <stdio.h>
void reverse_string(char* string);

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	return 0;
}
void reverse_string(char* string)
{
	if (*string != '\0')
	{
		
		reverse_string(string+1);//这里使用string时不要改变string的值
	}
	printf("%c", *string);
    
	
	
}


#include <stdio.h>
int main()
{
	char arr[] = "abcdef";
	int len1 = My_strlen1(arr);
	int len2 = My_strlen2(arr);
	printf("%d\n", len1);//使用递归
	printf("%d\n", len2);//不使用递归
	return 0;
}
int My_strlen1(char* x)
{
	while(*x != '\0')
	{
		return 1+My_strlen1(x+1);//不要写x++,x的值被改变了，写x+1，x的值没有改变
	
	}
	return 0;

}
int My_strlen2(char* y)
{
	int count = 0;
	while (*y != '\0')
	{
		count++;
		y++;
	}
	return count;

}


#include <stdio.h>
int fun1(int n);
int fun2(int n);
int main()
{
	int n = 0;
	scanf("%d", &n);
	int f1=fun1(n);
	int f2=fun2(n);
	printf("%d\n", f1);
	printf("%d\n", f2);
	return 0;
}
int fun1(int n)
{
	if (n == 1)
		return 1;
	return n * fun1(n - 1);
}
int fun2(int n)
{
	int count = 1;
	while (n != 1)
	{
		count *= n;
		n--;
	}
	return count;
}


#include <stdio.h>
void print(int n);
int main()
{
	int x = 0;
	scanf("%d", &x);
	print(x);
	return 0;
}
void print(int n)
{
	if (n <= 9)
		printf("%d ", n);
	else
	{
		print(n / 10);
		printf("%d ",n%10);
	}
		
}
