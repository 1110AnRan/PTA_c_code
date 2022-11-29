#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//
//double dist(double x1, double y1, double x2, double y2)
//{
//    double a,b,c;
//    a = pow(x1 - x2, 2);
//    b = pow(y1 - y2, 2);
//    c = sqrt(a + b);
//    return c;
//}
//
//int main()
//{
//    double x1, y1, x2, y2;
//
//
//    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
//    printf("dist = %.2f\n", dist(x1, y1, x2, y2));
//
//    return 0;
//}
//////#include <stdio.h>
//////#include <math.h>
//////float fun(float x);
//////int main()
//////{
//////	float x, y;
//////	scanf("%f", &x);
//////	y = fun(x);
//////	printf("y=%f", y);
//////	return 0;
//////}
//////
///////* 请在这里填写答案 */
//////float fun(float x)
//////{
//////	float z = 0;
//////	if (x < 0)
//////	{
//////		z = fabsf (1 - x);
//////	}
//////	else if (x >= 0 && x <= 1)
//////	{
//////		z = 1 - x;
//////	}
//////	else
//////	{
//////		z = pow(1 - x, 2);
//////	}
//////	return z;
//////}
//#include <stdio.h>
//
//int gcd(int x, int y);
//
//int main()
//{
//    int x, y;
//
//    scanf("%d %d", &x, &y);
//    printf("%d\n", gcd(x, y));
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int gcd(int x, int y)
//{
//    int z = 0;
//    while (x % y)
//    {
//        z = x % y;
//        x = y;
//        y = z;
//    }
//    return y;   
//}
//#include <stdio.h>
//#include <math.h>
//
//int prime(int p);
//int PrimeSum(int m, int n);
//
//int main()
//{
//    int m, n, p;
//
//    scanf("%d %d", &m, &n);
//    printf("Sum of ( ");
//    for (p = m; p <= n; p++)
//    {
//        if (prime(p) != 0)
//            printf("%d ", p);
//    }
//    printf(") = %d\n", PrimeSum(m, n));
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int prime(int p)
//{
//    int i = 0;
//    if (p >= 2)
//    {
//        for (i = 2; i < sqrt(p); i++)
//        {
//            if (p % i == 0)
//            {
//                break;
//            }
//        }
//        if (i > sqrt(p))
//        {
//            return 1;
//        }
//        else
//        {
//            return 0;
//        }
//    }
//    return 0;
//}
//int PrimeSum(int m, int n)
//{
//    int p = 0;
//    int sum = 0;
//    for (p = m; p <= n; p++)
//    {
//        if (prime(p) != 0)
//        {
//            sum += p;
//        }
//        
//    }
//    return sum;
//}
//#include <stdio.h>
//
//double mypow(double x, int n);
//
//int main()
//{
//    double x;
//    int n;
//
//    scanf("%lf %d", &x, &n);
//    printf("%f\n", mypow(x, n));
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//#include <math.h>
//
//double mypow(double x, int n)
//{
//    double z = 0;
//        z = pow(x, n);
//    return z;
//}#include <stdio.h>
//#include <stdio.h>
//int SunFun(int n);
//int f(int x);
//
//int main(void) 
//{
//    printf("The sun=%d\n", SunFun(10));
//    return 0;
//}
//int SunFun(int n) 
//{
//    int x, s=0;
//    for (x = 0; x <= n; x++)
//    {
//        s = s + x * x * x + 1;
//    }
//        return s;
//}
//int f(int x)
//{
//    return x;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//// 正整数的个位数字
//int UnitDigit(int number);
//
//int main()
//{
//    int x, y;
//    scanf("%d", &x);
//    y = UnitDigit(x);
//    printf("%d\n", y);
//    return 0;
//}
//
//// 正整数的个位数字
//int UnitDigit(int number)
//{
//    return number % 10;
//}






