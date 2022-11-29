#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	int* p1 = &x;
//	int* p2 = NULL;
//	p2 = p1;
//	printf("%p\n%p\n%p",&x,p1, p2);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 2;
//	int* p = &n;
//	int* q = p;
//	//p = q;
//	*p = *q;
//	//n = *q;
//	//p = n;
//	printf("%d %d", *p, *q);
//	return 0;
//}
// 7-1
//int palindrome(char* p,int str)
//{
//	int left = 0;
//	int right = str - 1;
//	int flag = 0;
//	while (left < right)
//	{
//		if (p[left] == p[right])
//		{
//			flag += 1;
//		}
//		left++;
//		right--;
//	}
//	return flag;
//
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char ch[81] = { 0 };
//	gets_s(ch);
//	int len = strlen(ch);
//	int ret = palindrome(ch,len);
//	if (ret == len / 2)
//	{
//		printf("%s\n", ch);
//		printf("Yes");
//	}
//	else
//	{
//		printf("%s\n", ch);
//		printf("No");
//	}
//	return 0;
//}	
//7-2
//void Fibonacci(unsigned long long  arr[], int sz)
//{
//	//if (n >= 3)
//	//{
//	//	return Fibonacci(n - 1) + Fibonacci(n - 2);
//	//}
//	//else
//	//{
//	//	return 1;
//	//}
//	int i = 0;
//	unsigned long long  a = 0;
//	unsigned long long  b = 0;
//	unsigned long long  c = 1;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = c;
//		a = b;
//		b = c;
//		c = a + b;
//	}
//
//}
//unsigned long long Add(unsigned long long* pb, int n)
//{
//	return (pb[n-1]);
//}
//#include <stdio.h>
//int main()
//{
//	unsigned long long arr[60] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Fibonacci(arr , sz);
//	//int ret1 = Fibonacci(m);
//	//int ret2 = Fibonacci(n);
//	//printf("%d", ret1 + ret2);
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	unsigned long long ret1 = Add(arr, n);
//	unsigned long long ret2 = Add(arr, m);
//	printf("%lld", ret1 + ret2);
//	return 0;
//}
//7-4
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int j = 0;
//	int max = 0;
//	int Mxn = 0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d ", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (arr[max][i] < arr[j][i])
//			{
//				arr[max][i] = arr[j][i];
//			}
//		}
//		printf("%d\n", arr[max][i]);
//	}
//	return 0;
//}
//7-2
//#include <stdio.h>
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int n = 0;
//	int arr1[20] = { 0 };
//	int arr2[20] = { 0 };
//	int arr3[40] = { 0 };
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int same = 0;
//	scanf("%d", &n1);
//	for (i = 0; i < n1; i++)
//	{
//		scanf("%d ", &arr1[i]);
//	}
//	scanf("%d", &n2);
//	for (i = 0; i < n2; i++)
//	{
//		scanf("%d ", &arr2[i]);
//	}
//	for (i = 0; i < n1; i++)
//	{
//		count = 0;
//		for (j = 0; j < n2; j++)
//		{
//			if (arr1[i] != arr2[j])
//			{
//				count++;
//			}
//		}
//		if (count == n2)
//		{
//			//printf("%d ", arr1[i]);
//			arr3[n] = arr1[i];
//			n++;
//		}
//	}
//	for (i = 0; i < n2; i++)
//	{
//		count = 0;
//		for (j = 0; j < n1; j++)
//		{
//			if (arr2[i] != arr1[j])
//			{
//				count++;
//			}
//		}
//		if (count == n1)
//		{
//			arr3[n] = arr2[i];
//			n++;
//			//printf("%d", arr2[i]);
//			//if (i != n2 - 1)
//			//{
//			//	printf(" ");
//			//}
//		}
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = i+1; j < n; j++)
//		{
//			if (arr3[i] == arr3[j])
//			{
//				for (int k = j; k < n - 1; k++)
//				{
//					arr3[k] = arr3[k + 1];
//				}
//				n--;
//				j--;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d", arr3[i]);
//		if (i != n - 1)
//		{
//			printf(" ");
//		}
//	}
//	return 0;
//}
#include<stdio.h>
int main() {
    int a[1000], b[1000], c[1000], i, m, n, j, k;
    scanf("%d", &m);
    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (a[i] == b[j]) {break;} 
            if (j = n - 1)
            {
                c[k] = a[i];
                k++;
            }     
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (b[i] == a[j]) { break; }
            if (j == m - 1)
            {
                c[k] = b[i];
                k++;
            }
    printf("%d", c[0]);
    for (i = 1; i < k; i++)
        for (j = 0; j < i; j++)
            if (c[i] == c[j]) { break; }
            if (j == i - 1) { printf("%d ", c[i]); }
    return 0;
}



