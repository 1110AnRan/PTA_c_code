#define _CRT_SECURE_NO_WARNINGS 1
//6-1
//#include <stdio.h>
//#include <string.h>
//#define  N  8
//struct student
//{
//	char  num[10];
//	int  year, month, day;
//};
//struct student fun(struct student* std, char* num)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < N; i++)
//	{
//		if (strcmp((std + i)->num, num) == 0)
//		{
//			return *(std+i);
//		}
//		else
//		{
//			count++;
//		}
//	}
//	if (count == 8)
//	{
//		(std->num[0]) = 0;
//		return *std;
//	}
//}
//int main()
//{
//	struct student  std[N] = { {"111111",1984,2,15},{"222222",1983,9,21},{"333333",1984,9,1},{"444444",1983,7,15},{"555555",1984,9,28},{"666666",1983,11,15},{"777777",1983,6,22},{"888888",1984,8,19} };
//	struct student  p;
//	char  n[10] = "666666";
//	p = fun(std, n);
//	if (p.num[0] == 0)
//	{
//		printf("Not found !\n");
//	}
//	else
//	{
//		printf("Succeed !\n  ");
//		printf("%s   %d-%d-%d\n", p.num, p.year, p.month, p.day);
//	}
//	return 0;
//}
///* 请在这里填写答案 */
//6-2
//#include <stdio.h>
//#define MAXN 10
//struct student 
//{
//    int num;
//    char name[20];
//    int score;
//    char grade;
//};
//int set_grade(struct student* p, int n)
//{
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < n; i++)
//    {
//        if ((p+i)->score >= 85 && (p + i)->score <= 100)
//        {
//            (p + i)->grade = 'A';
//        }
//        else if ((p + i)->score >= 70 && (p + i)->score <= 84)
//        {
//            (p + i)->grade = 'B';
//        }
//        else if ((p + i) ->score >= 60 && (p + i)->score <= 69)
//        {
//            (p + i)->grade = 'C';
//        }
//        else
//        {
//            (p + i)->grade = 'D';
//            count++;
//        }
//    }
//    return count;
//}
//int main()
//{
//    struct student stu[MAXN], * ptr;
//    int n, i, count;
//    ptr = stu;
//    scanf("%d\n", &n);
//    for (i = 0; i < n; i++) 
//    {
//        scanf("%d%s%d", &stu[i].num, stu[i].name, &stu[i].score);
//    }
//    count = set_grade(ptr, n);
//    printf("The count for failed (<60): %d\n", count);
//    printf("The grades:\n");
//    for (i = 0; i < n; i++)
//    {
//        printf("%d %s %c\n", stu[i].num, stu[i].name, stu[i].grade);
//    }
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//
//6-3
//#include <stdio.h>
//struct student   /*学生信息结构定义*/
//{       
//    int num;            /* 学号 */
//    char name[10];      /* 姓名 */
//    int math, english, computer;   /* 三门课程成绩 */
//};
//int update_score(struct student* p, int n, int num, int course, int score)/*函数声明*/
//{
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < n; i++)
//    {
//        if ((p + i)->num == num)
//        {
//            if (course == 1)
//            {
//                (p + i)->math = score;
//            }
//            else if (course == 2)
//            {
//                (p + i)->english = score;
//            }
//            else if (course == 3)
//            {
//                (p + i)->computer = score;
//            }
//            return i;
//        }
//        else
//        {
//            count++;
//        }
//    }
//    if (count == n)
//    {
//        return -1;
//    }
//}
//int main(void)
//{
//    int i, pos, n, num, course, score;
//    struct student students[50];   /* 定义结构数组 */
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) 
//    {
//        scanf("%d", &students[i].num);
//        scanf("%s", students[i].name);
//        scanf("%d", &students[i].math);
//        scanf("%d", &students[i].english);
//        scanf("%d", &students[i].computer);
//    }
//    /* 输入待修改学生信息 */
//    scanf("%d", &num);
//    scanf("%d", &course);
//    scanf("%d", &score);
//    /*调用函数，修改学生成绩*/
//    pos = update_score(students, n, num, course, score);
//    /*输出修改后的学生信息*/
//    if (pos == -1)
//    {
//        printf("Not found!\n");
//    }
//    else
//    {
//        printf("%d,%d,%d,%d\n", students[pos].num, students[pos].math, students[pos].english, students[pos].computer);
//    }
//    return 0;
//}
//
///* 请在这里填写答案 */
//6-4
//#include <stdio.h>
//struct student
//{
//	char  name[10];
//	int  age;
//};
//struct student fun(struct student  std[], int  n)
//{
//	int i = 0;
//	struct student *p1= &std[0];
//	for (i = 0; i < 5; i++)
//	{
//		if (p1->age < std[i].age)
//		{
//			*p1 = std[i];
//		}
//	}
//	return *p1;
//}
//int main()
//{
//	struct student std[5] = { "aaa",17,"bbb",16,"ccc",18,"ddd",17,"eee",15 };
//	struct student  max;
//	max = fun(std, 5);
//	printf("\nThe result:\n");
//	printf("\nName : %s,   Age :  %d\n", max.name, max.age);
//	return 0;
//}
///* 请在这里填写答案 */
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#define N 20
//struct student
//{
//	char name[21];
//	float a1;
//	float a2;
//	float a3;
//	float ave;
//}s[N];
//int cmp_by_ave(const void* e1, const void* e2)
//{
//	if ((((struct student*)e2)->ave > ((struct student*)e1)->ave))
//	{
//		return 1;
//	}
//	else if ((((struct student*)e2)->ave < ((struct student*)e1)->ave))
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//void reqsort(struct student* p1, int n)
//{
//	int i = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		if ((p1 + i)->ave - (p1 + i + 1)->ave <= 1E-2)
//		{
//			if (strcmp((p1 + i)->name, (p1 + i + 1)->name) > 0)
//			{
//				char ch[21];
//				strcpy(ch, p1 + i);
//				strcpy(p1 + i, p1 + i + 1);
//				strcpy(p1 + i + 1, ch);
//			}
//		}
//	}
//
//}
//void Print(struct student s[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%s %.2f", s[i].name, s[i].ave);
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %f %f %f", s[i].name, &s[i].a1, &s[i].a2, &s[i].a3);
//		s[i].ave = (s[i].a1 + s[i].a2 + s[i].a3) / 3;
//	}
//	qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmp_by_ave);
//	reqsort(s, n);
//	Print(s, n);
//	return 0;
//}