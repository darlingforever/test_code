#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main() {
    int a, b, c, d;
    int temp = 0;
    scanf("%d %d", &a, &b);
    int arr1[1000] = { 0 };
    int arr2[1000] = { 0 };
    int arr3[2000] = { 0 };
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &c);
        arr1[i] = c;
    }
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &d);
        arr2[i] = d;
    }
    for (int i = 0; i < a + b; i++)
    {
        if (i < a)
            arr3[i] = arr1[i];
        else
            arr3[i] = arr2[i - a];
    }

    for (int i = 0; i < a + b - 1; i++)//1  11
    {
        for (int j = 0; j < a + b - i - 1; j++)//1  11
        {
            if (arr3[j] > arr3[j + 1])
            {
                temp = arr3[j];
                arr3[j] = arr3[j + 1];
                arr3[j + 1] = temp;
            }



        }

    }
    for (int i = 0; i < a + b; i++)
    {
        printf("%d ", arr3[i]);
    }




    return 0;
}

//有序数组判断

#include <stdio.h>


int main() {
    int a = 0;
    int b = 0;
    int flag1 = 0;
    int flag2 = 0;
    scanf("%d", &a);
    int arr[50] = { 0 };
    for (int i = 0; i < a; i++) {
        scanf("%d", &b);
        arr[i] = b;
    }


    for (int i = 0; i < a - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            flag1 = 1;
            break;
        }
    }
    for (int i = 0; i < a - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            flag2 = 1;
            break;
        }
    }


    if (flag1 == 1) {
        if (flag2 == 1)
            printf("unsorted");
        else
            printf("sorted");
    }


    else if (flag1 == 0)
        printf("sorted");
    else
        printf("sorted");
    return 0;
}
//输入year 和month 判断该月份天数(闰年平年二月天数不一样)
#include <stdio.h>
int fun(int year);
int main() {
    int year = 0;
    int month = 0;
    while (scanf("%d %d", &year, &month) != EOF)
    {
        int a = fun(year);
        switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31\n");
            break;
        case 2:
        {
            if (a == 1)
                printf("29\n");
            else
                printf("28\n");
            break;


        }
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30\n");
            break;



        }
    }

    return 0;
}
int fun(int year) {
    return((year % 400 == 0) || (year % 100 != 0) && (year % 4 == 0));