#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    long long age = 0, seconds = 0;
    scanf("%d", &age);
    seconds = age * 31560000;
    printf("%lld\n", seconds);
    return 0;
}


//int main() {
//    int height = 0, weight = 0;
//    double BMI = 0.0;
//    scanf("%d %d", &weight, &height);
//    BMI = weight / ((double)height / 100) / ((double)height / 100);
//    printf("%.2lf", BMI);
//    return 0;
//}



//int main() {
//    int a, b, c;
//    //scanf("%d %d %d", &a, &b, &c);
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        if (a + b > c && a - b < c && a + c > b && a - c < b && b + c > a &&
//            b - c < a)
//        {
//            if (a == b && a == c)
//                printf("Equilateral triangle!\n");
//            else if (a == b || a == c || b == c)
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//
//
//        }
//        else
//            printf("Not a triangle!\n");
//
//        //scanf("%d %d %d", &a, &b, &c);
//    }
//
//
//
//    return 0;
//}


//int main() {
//    int a;
//    a = printf("\n%d", printf("Hello world!"));
//    return 0;
//}








//int main) {
//	//0~11    2min
//	//12-23   2+4min
//	//24~35   2+4*2min
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", 2 + (n / 12) * 4);
//	return 0;
//}
//int fun(int x, int y);

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", fun(a, b));
//	return 0;
//}
//
//
//int fun(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}


