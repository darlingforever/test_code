#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int a = 40, c = 212, sum = 0;
    sum = (-8 + 22) * a - 10 + c / 2;
    printf("%d\n", sum);
    return 0;
   
}

int main4() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d", a / b, a % b);
    return 0;

int main3() {
    int x, a, b, c;
    scanf("%d", &x);
    a = x % 60;
    b = x / 60 % 60;
    c = x / 60 / 60;
    printf("%d %d %d\n", c, b, a);
    return 0;
}
int main2()
{
    int x = 0;
    int y = 0;
    scanf("%d", &x);
    if (x < 0)
        y = 1;
    else if (x == 0)
        y = 0;
    else
        y = -1;

    printf("%d\n", y);
    return 0;
}

int main1()
{
    int n = 0;
    scanf("%d", &n);
    if (n % 5 == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

