#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//void inspect_password(char ch[], int len)
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	if (len < 6)
//	{
//		printf("Your password is tai duan le.\n");
//	}
//	else
//	{
//		for (i = 0; i < len; i++)
//		{	
//			if ((ch[i] != '.' && ch[i] < 48) || (ch[i] > 57 && ch[i] < 65) || (ch[i]>90 && ch[i] < 97) || ch[i]>122)
//			{
//				arr[0]++;
//			}
//			//Your password needs shu zi.
//			//else if (ch[i] == '.' || (ch[i] >= 48 && ch[i]<=57) || (ch[i] >= 65 && ch[i]<=90))/*(ch[i] >= 97 && ch[i] <= 122)*/
//			if (ch[i] == '.' || (ch[i] >= 65 && ch[i] <= 90) || (ch[i] >= 97 && ch[i] <= 122))
//			{
//				arr[1]++;
//			}
//			//Your password needs zi mu.
//			//else if (ch[i] == '.' || /*(ch[i] < 48 || ch[i]>57) || (ch[i] < 65 || ch[i]>90) ||*/ (ch[i] >= 97 && ch[i] <= 122))
//			if (ch[i] == '.' || (ch[i] >= 48 && ch[i] <= 57))
//			{
//				arr[2]++;
//			}
//			if (ch[i] == '.' || (ch[i] >= 48 && ch[i] <= 57) || (ch[i] >= 65 && ch[i] <= 90) || (ch[i] >= 97 && ch[i] <= 122))
//			{
//				arr[3]++;
//			}
//		}
//		if (arr[0] != 0)
//		{
//			printf("Your password is tai luan le.\n");
//		}
//		else if (arr[1] == len)
//		{
//			printf("Your password needs shu zi.\n");
//		}
//		else if (arr[2] == len)
//		{
//			printf("Your password needs zi mu.\n");
//		}
//		else if (arr[3] == len)
//		{
//			printf("Your password is wan mei.\n");
//		}
//		for (i = 0; i < 4; i++)
//		{
//			arr[i] = 0;
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	char ch[81];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", ch);
//		int len = strlen(ch);
//		inspect_password(ch, len);
//	}
//	return 0;
//}
//void month_day(int year, int yearday, int* pmonth, int* pday)
//{
//	int i;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };	
//	if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0) { days[2] = 29; }
//	if (yearday - days[1] <= 0)
//	{
//		*pmonth = 1;
//		*pday = yearday;
//	}
//	for (i = 1; yearday - days[i] > 0; i++)
//	{
//		yearday -= days[i];
//		*pmonth = i + 1;
//		*pday = yearday;
//	}
//}
//#include<stdio.h>
////void month_day(int year, int yearday, int* pmonth, int* pday);
//int main(void) 
//{
//	int day, month, year, yearday;
//	scanf("%d %d", &year, &yearday);
//	month_day(year, yearday,&month,&day);
//	printf("%d-%d-%d\n", year, month, day);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	getchar();
//	int i = 0;
//	int count = 0;
//	char ch[100][6];
//	for (i = 0; i < n; i++)
//	{
//		count = 0;
//		gets(ch[i]);
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			if (ch[i][j] == 'Y')
//			{
//				count++;
//			}
//		}
//		if (count >= 3)
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int m = 5;
//	int n;
//	int * p = &n;
//	*p = m;
//	printf("%d %d", *p,n);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, * p = &a[3], * q = p + 2;
//    printf("%d", *p + *q);
//    return(0);
//}
//#include <stdio.h>
//char cchar(char ch)
//{
//    if (ch >= 'A' && ch <= 'Z')
//        ch = ch - 'A' + 'a';
//    return (ch);
//}
//
//int main()
//{
//    char s[] = "ABC+abc=defDEF", * p = s;
//    while (*p)
//    {
//        *p = cchar(*p);
//        p++;
//    }
//    printf("%s", s);
//    return(0);
////}
//#include <stdio.h>
//int main()
//{
//	char* ch = "abcdef";
//	int sz = sizeof(ch) / sizeof(ch[0])-1;
//	printf("%d", sz);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//    int m, i, j, n;
//    char a[6];
//    scanf("%d", &n);
//    for (j = 1; j <= n; j++)
//    {
//        m = 0;
//        scanf("%s", a);
//        for (i = 0; i <= 5; i++)
//        {
//            if (a[i] == 'Y')m++;
//        }
//        if (m >= 3)printf("YES\n");
//        else printf("NO\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, s;
//	int* pa = &a, * pb = &b, * ps = &s;
//	scanf("%d %d", pa, pb);
//	*ps = (*pa + *pb) * (*pa - *pb);
//	printf("%d\n", *ps);
//	return 0;
////}#include <stdio.h>
//#include <stdio.h>
//int main(void)
//{
//    int a[10], data, i, * p = NULL, flag = 0;
//      //首先输入10个原始数组元素数据
//      p = a;
//      for (i = 0; i < 10; i++)
//      {
//          scanf("%d", p+i);
//      }
//        //然后输入一个待查找的数据
//        scanf("%d", &data);
//        //开始查找
//        p =&data;
//        i = 0;
//        while (i < 10)
//        {
//            if (*p == a[i])
//            {
//                flag = 1;//表示找到了
//                printf("%d\n", i);
//                break;//结束循环
//            }
//            i++;
//        }
//        if (flag == 0)//表示没有找到
//        {
//            printf("查无此数！\n");
//        } 
//        return 0;
//}