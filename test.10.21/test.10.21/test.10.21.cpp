#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<math.h>
//
//double dist(double x, double y);//此为函数声明
//
//double dist(double x, double y)
//{
//    double z;
//    z = (x - 0) * (x - 0) + (y - 0) * (y - 0);
//    return sqrt(z);
//}
///* 请在这里填写答案 */
//int main()
//{
//    double x, y;
//    scanf("%lf %lf", &x, &y);
//    printf("%.2lf", dist(x, y));
//
//    return 0;
//}
//#include <stdio.h>
//
//#define Cube(x) x*x*x
//
//int IsNarc(int x);
//
//int main()
//{
//    int x;
//    scanf("%d", &x);
//    if (IsNarc(x))
//    {
//        puts("Yes");
//    }
//    else
//    {
//        puts("No");
//    }
//    return 0;
//}
//
///* 你提交的代码将被嵌在这里 */
//
//
//int IsNarc(int x)
//{
//	int a, b, c;
//	a = x % 10;
//	b = x / 10 % 10;
//	c = x / 100;
//	if (x < 100 || x>999) {
//		return 0;
//	}
//	if (Cube(a) + Cube(b) + Cube(c) == x) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}

//#include <stdio.h>
//
///* 你编写的函数将嵌入在这里 */
//int sumEven(int begin, int end)
//{
//    int a, b;
//    for (a = begin; a <= end; a ++)
//    {
//        if (a % 2 == 0)
//        {
//            b = b + a;
//        }
//        
//    }
//    return b;
//}
//
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("SumEven = %d\n", sumEven(a, b));
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int j = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		for (i = 1; i <= j; i++)
//		{
//			printf("%d*%d=%-4d", i,j,i*j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	int j = 0;
//	int ret = 0;
//	scanf("%d %d", &m, &n);
//	for (i = m; i <= n; i++)
//	{
//		if (i >= 2)
//		{
//			for (j = 2; j < sqrt(i); j++)
//			{
//				if (i % j == 0)
//				{
//					break;
//				}
//			}
//		}
//		if (j > sqrt(i))
//		{
//			ret = ret + i;
//			count++;
//		}
//
//	}
//	printf("%d %d", count, ret);
//	return 0;
//}

