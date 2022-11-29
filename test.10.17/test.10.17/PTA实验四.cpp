#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int y, z, x = 1;
//	scanf("%d %d", &y, &z);
//	while (1)
//	{
//		if (x % 3 == 1 && x % 5 == z && x % 7 == 3)
//		{
//			break;
//		}
//		x++;
//	}
//	printf("%d", x + y);
//	
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d ", &n);
//		if (j > n)
//		{
//			n = j;;
//		}
//		else
//		{
//			j = n;
//		}
//
//	}
//	printf("%d", j);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	int a = 1;
//	int S = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (i = 0; i < n; i++)
//		{
//			ret = ret * a;
//			a++;
//			sum += ret;
//		}
//	}
//	S = sum;
//	printf("%d", S);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		i = i + n % 10;
//		n = n / 10;
//		count++;
//	}
//	printf("%d %d", count, i);
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//    int i = 0;
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
//			if (j > sqrt(i))
//			{
//				ret = ret + i;
//				count++;
//			}
//		
//	}
//	printf("%d %d", count, ret);
//	return 0;
//}