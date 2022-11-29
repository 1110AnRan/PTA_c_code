#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int count = 0;
//	int Sum = 0;
//	scanf("%d %d", &A, &B);
//	for (C = A; C <= B; C++)
//	{
//		printf("%5d", C);
//		Sum += C;
//		count++;
//		if (count % 5 == 0)
//		{
//			printf("\n");
//		}
//	}
//	if (count % 5 == 0)
//	{
//		printf("\n");
//	}
//	printf("Sum = %d", Sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int M = 0;
//	int N = 0;
//	scanf("%d %d", &M, &N);
//	
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 1;
//	scanf("%d", &j);
//	for (i = 1; i <= j+1; i++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			printf("%-2d*%-2d=%-4d", i, n, i * n);
//		}
//		n++;
//		printf("\n");
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int M, N, a, b;
//    scanf("%d %d", &M, &N);
//    b = M * N;
//    while (M % N)
//    {
//        a = M % N;
//        M = N;
//        N = a;
//    }
//    b = b / N;
//    printf("%d %d", a, b);
//    return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    int q = 0;
//    int j = 0;
//    scanf("%d", &j);
//for (n = 0; n < j; n++)
//{
//    scanf("%d", &m);
//    if (m > 1)
//    {
//        for (q = 2; q < sqrt(m); q++)
//        {
//            if (m % q == 0)
//            {
//                break;
//            }
//        }
//    }
//        if (q > sqrt(m))
//        {
//            printf("yes\n");
//        }
//        else
//        {
//            printf("no\n");
//        }
//    }
//    return 0;
//}
