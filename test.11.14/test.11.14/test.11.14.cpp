#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    char ch[6];
//    while ((scanf("%d %s", &n, ch)) != EOF)
//    {
//        for (int i = 0; i < 5; i++)
//        {
//            ch[4 - i] = ch[4 - i] + n % 10;
//            n = n / 10;
//        }
//        printf("%s\n", ch);
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char ch[101];
//
//		gets_s(ch);
//		int i = 0;
//		int count = 0;
//		for (i = 0; ch[i] != '\0'; i++)
//		{
//			if (ch[i] != ' ' && (ch[i + 1] == ' ' || ch[i + 1] == '\0'))
//			{
//				count++;
//			}
//		}
//		printf("%d",count);
//	
//		//gets_s(ch);
//		//int i = 0;
//		//int count = 0;
//		//for (i = 0; ch[i] != '\0'; i++)
//		//{
//		//	if (ch[i] != ' ' && ch[i + 1] == ' ' || ch[i + 1] == '\0')
//		//	{
//		//		count++;
//		//	}
//		//}
//		//printf("%d\n", count);
//	
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char ch[100][100];
//	int j = 0;
//	while (gets_s(ch[j]))
//	{
//		int i = 0;
//		int count = 0;
//		for (i = 0; ch[j][i] != 0; i++)
//		{
//			if (ch[j][i] != ' ' && (ch[j][i + 1] == ' ' || ch[j][i + 1] == 0))
//			{
//				count++;
//			}
//		}
//		printf("%d", count);
//		j++;
//	}
//	//while (scanf("%s",ch[j])!=EOF)
//	//{
//
//	//}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char ch[1001];
//	gets_s(ch);
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	int n = 0;
//	char temp = 0;
//	int len = strlen(ch);
//	temp = len;
//	for (i = 0; i < len;i++)
//	{
//		for (n = 0; n < len; n++)
//		{
//			if (ch[m] >= '0' && ch[m] <= '9')
//			{
//				for (j = m; j < temp; j++)
//				{
//					ch[j] = ch[j + 1];
//				}
//				temp--;
//				m = 0;
//			}
//			else
//			{
//				m++;
//			}
//		}
//	}
//	if (temp != len)
//	{
//		for (i = 0; i < temp; i++)
//		{
//			printf("%c", ch[i]);
//		}
//	}
//	else
//	{
//		printf("%s", ch);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	char ch[200001];
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", ch);
//		int len = strlen(ch);
//		for (i = 0; i < len - 1; i++)
//		{
//			if (ch[i] >= 'A' && ch[i] <= 'Z')
//			{
//				if (ch[i] + 32 == ch[i + 1] || ch[i] + 1 == ch[i + 1])
//				{
//					count++;
//				}
//			}
//			if (ch[i] >= 'a' && ch[i] <= 'z')
//			{
//				if (ch[i] - 32 == ch[i + 1] || ch[i] - 1 == ch[i + 1])
//				{
//					count++;
//				}
//			}
//		}
//		if (count == len - 1)
//		{
//			printf("Y\n");
//		}
//		else
//		{
//			printf("N\n");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//void fun(char p1[], char p2[])
//{
//    int len1 = strlen(p1);
//    int len2 = strlen(p2);
//    int i = 0;
//    for (i = 0; i < len2; i++)
//    {
//        p1[len1 + i] = p2[i];
//    }
//
//}
//int main()
//{
//    char s1[80], s2[40];
//    scanf("%s%s", s1, s2);
//    fun(s1, s2);
//    printf("%s", s1);
//    return 0;
//}
//
//
///* 请在这里填写答案 */