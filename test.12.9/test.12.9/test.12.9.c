#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#define N 10
//struct Stu
//{
//	char id[13];
//	char name[21];
//	int grades[2];
//}s[N];
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	getchar();
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %s %d %d", s[i].id, s[i].name, &s[i].grades[0], &s[i].grades[1]);
//		if (s[i].grades[1] >= 60)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	for (i = 0; i < n; i++)
//	{
//		if (s[i].grades[1] >= 60)
//		{
//			printf("%s %s\n", s[i].id, s[i].name);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#define N 10
//struct Stu
//{
//	char id[10];
//	char name[10];
//	int grades[3];
//	double ave;
//}s[N],t;
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %s %d %d %d", s[i].id, s[i].name, &s[i].grades[0], &s[i].grades[1], &s[i].grades[2]);
//		s[i].ave = (s[i].grades[0] + s[i].grades[1] + s[i].grades[2]) / 3.0;
//		if (s[j].ave < s[i].ave)
//		{
//			t = s[j];
//			s[j] = s[i];
//			s[i] = t;
//		}
//	}
//	printf("num:%s,name:%s,average:%.2lf\n", s[j].id, s[j].name, s[j].ave);
//	return 0;
//}
#include <stdio.h>
struct Stu
{
	char id[5];
	char name[5];
	int grades[3];
	float ave;
}s[5];
int main()
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%s %s %d %d %d", s[i].id, s[i].name, &s[i].grades[0], &s[i].grades[1], &s[i].grades[2]);
		s[i].ave = (s[i].grades[0] + s[i].grades[1] + s[i].grades[2]) / 3.0;
		printf("%5s%5s %.1f\n", s[i].id, s[i].name, s[i].ave);
	}
	return 0;
}
//#include <stdio.h>
//#include <string.h>
//#define N 10
//struct Stu
//{
//	char id[12];
//	char name[11];
//	int grades[4];
//}s[N];
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	char Find[11] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %s %d %d %d %d", s[i].id, s[i].name, &s[i].grades[0], &s[i].grades[1], &s[i].grades[2], &s[i].grades[3]);
//
//	}
//	scanf("%s", Find);
//	for (i = 0; i < n; i++)
//	{
//		if (strcmp(Find, s[i].name) == 0)
//		{
//			printf("%s %s %d %d %d %d\n", s[i].id, s[i].name, s[i].grades[0], s[i].grades[1], s[i].grades[2], s[i].grades[3]);
//		}
//		if (strcmp(Find, s[i].name) != 0)
//		{
//			count++;
//		}
//	}
//	if (count == n)
//	{
//		printf("Not Found!");
//	}
//	return 0;
//}
//	
//#include <stdio.h>
//#define N 1000
//struct Stu
//{
//	char id[17];
//	int a1;
//	int a2;
//}s[N];
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %d %d", s[i].id, &s[i].a1, &s[i].a2);
//	}
//	scanf("%d", &m);
//	for(i = 0; i < m; i++)
//	{
//		scanf("%d",&ret);
//		for (j = 0; j < n; j++)
//		{
//			if (ret == s[j].a1)
//			{
//				printf("%s %d",s[j].id,s[j].a2);
//			}
//		}
//	}
//	return 0;
//}