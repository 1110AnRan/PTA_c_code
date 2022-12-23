#define _CRT_SECURE_NO_WARNINGS 1
//6-1
//#include <stdio.h>
//int f(int n)
//{
//    if (n == 0)
//    {
//        return 1;
//    }
//    else if (n == 1)
//    {
//        return 2;
//    }
//    else
//    {
//        return 2 * (f(n - 1) - f(n - 2));
//    }
//}
//int main() 
//{
//    int n;
//    scanf("%d", &n);
//    printf("%d\n", f(n));
//    return 0;
//}
//
///* 请在这里填写答案 */
//6-2
//#include<stdio.h>
//double discount(double price, double basePrice, double rate, int n, int m)
//{
//    int i = 0;
//    for (i = 0; i < m / n; i++)
//    {
//        price *= rate;
//        if ((price < basePrice) && (price - basePrice < 1e-8))
//        {
//            return basePrice;
//        }
//    }
//    return price;
//}
//int main() 
//{
//    double price, basePrice, rate, sellingPrice;
//    //price:报价，basePrice:底价  rate:折扣率 sellingPrice:售价 
//    int n, m;    //n :折扣周期；m:距离首次报价的天数 。
//    scanf("%lf%lf%lf%d%d", &price, &basePrice, &rate, &n, &m);
//    sellingPrice = discount(price, basePrice, rate, n, m);
//    printf("%.2lf\n", sellingPrice);
//    return 0;
//}
//
///* 请在这里填写答案 */

//7-1
//#include  <stdio.h>
//struct bus
//{
//	int date;
//	char num[5];
//};
//int main()
//{
//	struct bus s = { 0 };
//	scanf("%d %s", &(s.date), s.num);
//	if (s.date % 2 == 0)
//	{
//		if ((s.num[4] - 48) % 2 == 0)
//		{
//			printf("%s Pass", s.num);
//		}
//		else
//		{
//			printf("%s Restriction", s.num);	
//		}
//	}
//	else
//	{
//		if ((s.num[4] - 48) % 2 == 0)
//		{
//			printf("%s Restriction", s.num);
//		}
//		else
//		{
//			printf("%s Pass", s.num);
//		}
//	}
//	return 0;
//}
////7-2
//#include <stdio.h>
//#include <stdlib.h>
//struct team
//{
//	char name[20];
//	int a1;
//	int a2;
//};
//int cmp_by_a1(const void* e1, const void* e2)
//{
//	return (*(struct team*)e2).a1 - (*(struct team*)e1).a1;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	struct team t[40] = { 0 };
//	struct team temp = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %d %d", t[i].name, &(t[i].a1), &(t[i].a2));
//	}
//	qsort(t, n, sizeof(struct team), cmp_by_a1);
//	for (i = 0; i < n - 1; i++)
//	{
//		if (t[i].a1 == t[i + 1].a1)
//		{
//			if ((t[i].a2 < t[i + 1].a2))
//			{
//				temp = t[i];
//				t[i] = t[i + 1];
//				t[i + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d %s %d %d\n", i + 1, t[i].name, t[i].a1, t[i].a2);
//	}
//	return 0;
//}
//#include <stdio.h>
//void printone(char ch)  //输出一个字符
//{
//
//    printf("%c", ch);
//}
//void printmany(int n, char ch)   //在一行里输出n个字符
//{
//    for(int i=0;i<n;i++)
//    printone(ch);
//    printf("\n");
//}
//int main()
//{
//    int m, i;
//    char c;
//    scanf("%d%c", &m, &c);
//    for (i = 1; i <= m; i++)
//        printmany(i, c);
//    return 0;
//}