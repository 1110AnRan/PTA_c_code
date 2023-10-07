

//7-1 ������Ľ����ͱ���
//#include<bits/stdc++.h>
//using namespace std;
//int n, m;
//vector<int> v;
//int main() 
//{
//	while (cin >> n)
//	{
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			cin >> m;
//			v.push_back(m);
//		}
//		if (n != 0)
//		{
//			cout << v[0];
//			for (i = 1; i < v.size(); i++)
//			{
//				cout << " " << v[i];
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}

//7-2 �����������
//#include<bits/stdc++.h>
//using namespace std;
//typedef struct Student
//{
//	string name;
//	int score;
//}Student;
//vector<Student>v;
//string name;
//int score;
//int main()
//{
//	while (cin >> name >> score)
//	{
//		v.push_back({ name,score });
//	}
//	int i;
//	for (i = v.size() - 1; i >= 0; i--)
//	{
//		if (i != 0)
//		{
//			cout << v[i].name << "," << v[i].score << "->";
//		}
//		else
//		{
//			cout << v[i].name << "," << v[i].score;
//		}
//	}
//	cout << endl;
//	return 0;
//}

//7-3 ѧ����Ϣ������
//#include<bits/stdc++.h>
//using namespace std;
//typedef struct Student
//{
//	int id;
//	string name;
//	int score;
//}Student;
//vector<Student> v;
//int n;
//int id, score;
//string name;
//int main()
//{
//	while (cin >> n)
//	{
//		v.clear();
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			cin >> id >> name >> score;
//			v.push_back({ id,name,score });
//		}
//		for (i = v.size() - 1; i >= 0; i--)
//		{
//			if (i != 0)
//			{
//				cout << v[i].id << "," << v[i].name << "," << v[i].score << "->";
//			}
//			else
//			{
//				cout << v[i].id << "," << v[i].name << "," << v[i].score;
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}


/* ��������ɾ�Ĳ���� */
#include<stdio.h>
#define MAXN 10000    /* ������ų�����ʾ����a�ĳ��� */

int Count = 0;        /* ��ȫ�ֱ���Count��ʾ����a�д������Ԫ�ظ��� */
void select(int a[], int option, int value); /* ��������������a���к��ֲ����Ŀ��ƺ��� */
int input_array(int a[]);    /* ������������a�ĺ��� */
void print_array(int a[]);    /* �����������a�ĺ��� */
int insert(int a[], int value);    /* ����������a�в���һ��ֵΪvalue��Ԫ�صĺ��� */
int del(int a[], int value);    /* ɾ����������a�е���value��Ԫ�صĺ��� */
int modify(int a[], int value1, int value2); /* ����������a�е���value1��Ԫ�أ��滻Ϊvalue2 */
int query(int a[], int value);     /* �ö��ַ�����������a�в���Ԫ��value�ĺ��� */

int main(void)
{
    int option, value, a[MAXN];

    if (input_array(a) == -1) {     /* ���ú��������������� a */
        printf("Error");        /* a�����������飬�������Ӧ����Ϣ */
        return 0;
    }

    printf("[1] Insert\n");    /* ����4����ʾ�˵�*/
    printf("[2] Delete\n");
    printf("[3] Update\n");
    printf("[4] Query\n");
    printf("[Other option] End\n");
    while (1) {            /* ѭ�� */
        scanf("%d", &option);         /* �����û�����ı�� */
        if (option < 1 || option > 4) {    /* �������1��2��3��4����ı�ţ�����ѭ�� */
            break;
        }
        scanf("%d", &value);         /* �����û�����Ĳ���value */
        select(a, option, value);         /* ���ÿ��ƺ��� */
        printf("\n");
    }
    printf("Thanks.");            /* �������� */

    return 0;
}

/* ���ƺ��� */
void select(int a[], int option, int value)
{
    int index, value2;

    switch (option) {
    case 1:
        index = insert(a, value);      /* ���ò��뺯������������ a �в���Ԫ��value */
        if (index == -1) {        /* ���������Ѵ��ڣ��������Ӧ����Ϣ */
            printf("Error");
        }
        else {
            print_array(a);        /* ������������������������������a */
        }
        break;
    case 2:
        index = del(a, value);      /* ����ɾ���������������� a ��ɾ��Ԫ��value */
        if (index == -1) {        /* û�ҵ�value���������Ӧ����Ϣ */
            printf("Deletion failed.");
        }
        else {
            print_array(a);         /* ����������������ɾ�������������a */
        }
        break;
    case 3:
        scanf("%d", &value2);         /* �����û�����Ĳ���value2 */
        index = modify(a, value, value2);      /* �����޸ĺ������������� a ���޸�Ԫ��value��ֵΪvalue2 */
        if (index == -1) {            /* û�ҵ�value����vaule2�Ѵ��ڣ��������Ӧ����Ϣ */
            printf("Update failed.");
        }
        else {
            print_array(a);         /* �����������������޸ĺ����������a */
        }
        break;
    case 4:
        index = query(a, value);     /* ���ò�ѯ�������������� a �в���Ԫ��value */
        if (index == -1) {        /* û�ҵ�value���������Ӧ����Ϣ */
            printf("Not found.");
        }
        else {            /* �ҵ����������Ӧ���±� */
            printf("%d", index);
        }
        break;
    }
}

/* ��������뺯�� */
int input_array(int a[])
{
    scanf("%d", &Count);
    for (int i = 0; i < Count; i++) {
        scanf("%d", &a[i]);
        if (i > 0 && a[i] <= a[i - 1]) {    /* a������������ */
            return -1;
        }
    }

    return 0;
}

/* ������������ */
void print_array(int a[])
{
    for (int i = 0; i < Count; i++) { /* ���ʱ�������ּ���һ���ո�ֿ�����ĩ�޿ո� */
        if (i == 0) {
            printf("%d", a[i]);
        }
        else {
            printf(" %d", a[i]);
        }
    }
}

/* ����������д�� */
int insert(int a[], int value)
{
    int idex = -1;
    for (int i = 0; i < Count;i++)
    {
        if (a[i] == value)
        {
            return -1;
        }
    }
    for (int i = 0; i < Count; i++)
    {
        if(value < a[i])
        {
            idex = i;
            break;
        }
    }
    if (idex == -1)
    {
        a[Count] = value;
    }
    else
    {
        for (int i = Count; i >= idex; i--)
        {
            a[i] = a[i - 1];
        }
        a[idex] = value;
        Count++;
    }
    return 1;
}
int del(int a[], int value)
{
    int idex = -1;
    int i;
    for (i = 0; i < Count;i++)
    {
        if (a[i] == value)
        {
            idex = i;
            break;
        }
    }
    if (i != Count)
    {
        for (int j = idex; j < Count; j++)
        {
            a[j] = a[j + 1];
        }
        Count--;
        return 1;
    }
    else
    {
        return -1;
    }
}
int modify(int a[], int value1, int value2)
{
    for (int i = 0; i < Count; i++)
    {
        if (a[i] == value2)
        {
            return -1;
        }
    }
    for (int i = 0; i < Count; i++)
    {
        if (a[i] == value1)
        {
            a[i] = value2;
            for (int j = 0; j < Count - 1; j++)
            {
                int flag = 1;
                for (int k = 0; k < Count - j - 1; k++)
                {
                    if (a[k] > a[k + 1])
                    {
                        int temp = a[k];
                        a[k] = a[k + 1];
                        a[k + 1] = temp;
                        flag = 0;
                    }
                }
                if (flag == 1)
                {
                    break;
                }
            }
            return 1;
        }
    }
}
int query(int a[], int value)
{
    int l = 0;
    int  r = Count - 1;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        if (value < a[mid])
        {
            r = mid - 1;
        }
        else if (value > a[mid])
        {
            l = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}