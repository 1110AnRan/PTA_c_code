

//ʵ��2 ˳���Ĳ���1
// 2-1
//#include<bits/stdc++.h>
//using namespace std;
//int n, m;
//vector<int> v;
//int main()
//{
//	cin >> n;
//	while (n--)
//	{
//		cin >> m;
//		v.push_back(m);
//	}
//	if (v.size() != 0)
//	{
//		cout << v[0];
//		for (int i = 1; i < v.size(); i++)
//		{
//			cout << " " << v[i];
//		}
//		cout << endl;	
//	}
//	return 0;
//}

// 2-2
//#include<bits/stdc++.h>
//using namespace std;
//int n, m;
//vector<int> v;
//int main()
//{
//	cin >> n;
//	while (n--)
//	{
//		cin >> m;
//		v.push_back(m);
//	}
//	cout << v[v.size() - 1];
//	for (int i = v.size() - 2; i >= 0; i--)
//	{
//		cout << " " << v[i];
//	}
//	cout << endl;
//	return 0;
//}

// 2-3
//#include  <stdio.h>
//#include  <stdlib.h>
//#define MAXSIZE 100
//typedef int datatype;
//typedef struct {
//    datatype a[MAXSIZE];
//    int size;
//}sequence_list;
//void initseqlist(sequence_list* L)
//{
//    L->size = 0;
//}
//void input(sequence_list* L)
//{
//    datatype x;
//    initseqlist(L);
//    printf("������һ�����ݣ���0��Ϊ��������\n");
//    scanf("%d", &x);
//    while (x)
//    {
//        L->a[L->size++] = x;
//        scanf("%d", &x);
//    }
//}
//void print(sequence_list L)
//{
//    int i;
//    for (i = 0; i < L.size; i++)
//    {
//        printf("%5d", L.a[i]);
//        if ((i + 1) % 10 == 0) printf("\n");
//    }
//    printf("\n");
//}
//
//int countx(sequence_list L, datatype x)
//{
//    //������
//    int cnt = 0;
//    for (int i = 0; i < L.size; i++)
//    {
//        if (L.a[i] == x)
//        {
//            cnt++;
//        }
//    }
//    return cnt;
//}
//
//int main()
//{
//    sequence_list L;
//    datatype x;            /*����˳���*/
//    input(&L);            /*�����������*/
//    print(L);          /*���ԭ��*/
//    printf("�������ͳ�Ƶ�Ԫ��ֵ��");
//    scanf("%d", &x);
//    printf("��˳�����ֵΪ%d��Ԫ�ظ���Ϊ��", x);
//    printf("%d", countx(L, x));
//    return 0;
//}