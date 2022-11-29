#define _CRT_SECURE_NO_WARNINGS 1
//7-1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char ch1[81];
//	int ch2[81];
//	gets_s(ch1);
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 0; i < strlen(ch1); i++)
//	{
//		if (ch1[i] >= '0' && ch1[i] <= '9')
//		{
//			ch2[j] = ch1[i];
//			j++;
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		sum = sum * 10 + (ch2[i] - '0');
//
//	}
//	printf("%d",sum );
//	return 0;
//}
// 7-2
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int max = 0;
//	int len = 0;
//	scanf("%d", &n);
//	char ch[n][81];
//	for (i = 0; i < n; i++)
//	{
//		gets_s(ch[i]);
//		len = strlen(ch[i]);
//		if (len > max)
//		{
//			max = len;
//			j = i;
//		}
//	}
//	printf("The longest is: %s\n", ch[j]);
//	return 0;
//}
//7-3
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char ch[80] = { 0 };
//	gets_s(ch);
//	int len = strlen(ch);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < len / 2; i++)
//	{
//		if (ch[i] == ch[len - i - 1])
//		{
//			count++;
//		}
//	}
//	if (count == len / 2)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//
//	return 0;
//}
//7-5
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int del_ch(char p1[],int str)
//{
//	for (int i = 0; i < str - 1; i++)
//	{
//		for (int j = i + 1; j < str; j++)
//		{
//			if (p1[i] == p1[j])
//			{
//				for (int k = j; k < str - 1; k++)
//				{
//					p1[k] = p1[k + 1];
//				}
//				str--;
//				j--;
//			}
//		}
//	}
//	p1[str] = '\0';
//	return str;
//
//}
//int cmp_by_ch(const void* e1, const void* e2)
//{
//	return (*(char*)e1 - *(char*)e2);
//
//}
//////void sort(char p1[], int sz)
//////{
//////	for (int i = 0; i < sz - 1; i++)
//////	{
//////		int flag = 1;
//////		for (int j = i; j < sz - 1 - i; j++)
//////		{
//////			int temp = 0;
//////			if (p1[j]>p1[j+1])
//////			{
//////				temp = p1[j];	
//////				p1[j] = p1[j + 1];
//////				p1[j + 1] = temp;
//////			}
//////		}
//////	}
//////}
//int main()
//{
//	char ch[80] = { 0 };
//	gets_s(ch);
//	int str = strlen(ch);
//	int len=del_ch(ch,str);
//	qsort(ch, len, sizeof(ch[0]), cmp_by_ch);
//	//sort(ch, len);
//	printf("%s", ch);
//	return 0;
//}
//7-4
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char ch[80];
//	int n = 0;
//	int i = 0;
//	gets_s(ch);
//	scanf("%d", &n);
//	n = n % 26;
//	for (i = 0; i < strlen(ch); i++)
//	{
//		if (n < 0)
//		{
//			if (ch[i] >= 'a' && ch[i] <= 'z')
//			{
//				ch[i] = (ch[i] - 'a' + n + 26) % 26 + 'a';
//			}
//			else if (ch[i] >= 'A' && ch[i] <= 'Z')
//			{
//				ch[i] = (ch[i] - 'A' + n + 26) % 26 + 'A';
//			}
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (n >= 0)
//	{
//		printf("Invalid.");
//	}
//	else
//	{
//		printf("%s", ch);
//	}
//	return 0;
//}
