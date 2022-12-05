#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 1;
//	int* p = &a;
//	a = *p + b;
//	printf("%d", a);
//	return 0;
//}
//#include <stdio.h>
//#define n 100
//struct stu
//{
//	char name[11];
//	int a1;
//	int a2;
//	int a3;
//	double ave;
//}s[n];
//int main()
//{
//	int m = 0;
//	int i = 0;
//	while ((scanf("%d", &m))!=EOF)
//	{
//		for (i = 0; i < m; i++)
//		{
//			scanf("%s %d %d %d", s[i].name, &s[i].a1, &s[i].a2, &s[i].a3);
//			s[i].ave = (s[i].a1 + s[i].a2 + s[i].a3) / 3.0;
//		}
//		for (i = m - 1; i >= 0; i--)
//		{
//			if (s[i].ave >= 60)
//			{
//				printf("%s %d %d %d %.2lf\n", s[i].name, s[i].a1, s[i].a2, s[i].a3, s[i].ave);
//			}
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#define n 10
//struct book
//{
//	char name[31];
//	double price;
//};
//int cmp_by_price(const void* e1, const void* e2)
//{
//	return  ((struct book*)e2)->price - ((struct book*)e1)->price;
//}
//int main()
//{
//	int m = 0;
//	struct book s[n];
//	scanf("%d", &m);
//	getchar();
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		gets(s[i].name);
//		//getchar();
//		scanf("%lf", &s[i].price);
//		getchar();
//	}
//	qsort(s, m, sizeof(s[0]), cmp_by_price);
//	printf("%.2lf %s\n", s[0].price, s[0].name);
//	printf("%.2lf %s\n", s[m-1].price, s[m - 1].name);
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//struct x_y
//{
//	int x1;
//	int y1;
//	int x2;
//	int y2;
//}s;
//int main()
//{
//	int i = 0;
//	scanf("%d %d %d %d", &s.x1, &s.y1, &s.x2, &s.y2);
//	printf("distance = %.2f", sqrt(pow(s.x2 - s.x1, 2) + pow(s.y2 - s.y1, 2)));
//	return 0;
//}