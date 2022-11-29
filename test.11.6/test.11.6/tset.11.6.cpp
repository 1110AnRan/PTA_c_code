#define _CRT_SECURE_NO_WARNINGS 1
//// 7-3
//#include <stdio.h>
//int main()
//{
//    int i, j, m, n, maxi = 0, maxj = 0;
//    scanf("%d %d", &m, &n);
//    int a[m][n];
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &a[i][j]);
//            if (a[i][j] > a[maxi][maxj])
//            {
//                maxi = i;
//                maxj = j;
////            }
////        }
////    }
////
////    printf("%d,%d,%d", maxi, maxj, a[maxi][maxj]);
////
////    return 0;
//}
//7-4
//#include <stdio.h>
//int main()
//{
//	int n;
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	int arr[10][10];
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d ", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		sum += arr[i][i]+ arr[i][n - i - 1];
//	}
//	if (n % 2 == 0)
//	{
//		printf("%d", sum);
//		return 0;
//	}
//	else
//	{
//		sum = sum - arr[n / 2][n / 2];
//		printf("%d", sum);
//		return 0;
//	}
//}
//7-2
//#include <stdio.h>
//int main()
//{
//	int t = 0;
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int count = 0;
//	scanf("%d", &t);
//	int arr[n][n];;
//	for (i = 0; i < t; i++)
//	{
//		sum = 0;
//		scanf("%d", &n);
//		int arr[n][n];
//		for (j = 1; j < n; j++)
//		{
//			sum += j;
//		}
//		for (j = 0; j < n; j++)
//		{
//			for (m = 0; m < n; m++)
//			{
//				scanf("%d", &arr[j][m]);
//			}
//		}
//		for (j = 1; j < n; j++)
//		{
//			for (m = 0; m < j; m++)
//			{
//				if (arr[j][m] == 0)
//				{
//					count++;
//				}
//			}
//		}
//		if (sum == count)
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//	
//	return 0;
//}
//7-1
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int arr[20][20]={0};
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			else if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d", arr[i][j]);
//			if (j < i)
//			{
//				printf(" ");
//			}
//
//		}
//		printf("\n");
//	}
//	return 0;
//}