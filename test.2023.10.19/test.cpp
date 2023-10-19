

//6-1
//#include<bits/stdc++.h>
//using namespace std;
//typedef char SeqListData;
//typedef struct SeqListNode
//{
//	SeqListData x;
//	struct SeqListNode* next;
//}SLNode;
//void Push_Back(SLNode** head, SeqListData x)
//{
//	SLNode* newnode = new SLNode();
//	newnode->x = x;
//	newnode->next = nullptr;
//	if (*head == nullptr)
//	{
//		*head = newnode;
//	}
//	else
//	{
//		SLNode* tail = *head;
//		while (tail->next)
//		{
//			tail = tail->next;
//		}
//		tail->next = newnode;
//	}
//}
//void Erase(SLNode** head, int index)
//{
//	if (index == 1)
//	{
//		*head = (*head)->next;
//	}
//	else
//	{
//		SLNode* prev = nullptr;
//		SLNode* cur = *head;
//		SLNode* next = cur->next;
//
//		int i;
//		for (i = 1; i < index; i++)
//		{
//			prev = cur;
//			cur = cur->next;
//			next = cur->next;
//		}
//		prev->next = next;
//		delete cur;
//	}
//}
//void Print(SLNode* head)
//{
//	SLNode* cur = head;
//	while (cur)
//	{
//		cout << cur->x;
//		cur = cur->next;
//	}
//	cout << endl;
//}
//int main()
//{
//	int n, index;
//	SeqListData x;
//	while (cin >> n >> index)
//	{
//		int i;
//		SLNode* head = nullptr;
//		for (i = 0; i < n; i++)
//		{
//			cin >> x;
//			Push_Back(&head, x);
//		}
//		if (index > n || index <= 0)
//		{
//			cout << "location error\n";
//			continue;
//		}
//		Erase(&head, index);
//		Print(head);
//	}
//	return 0;
//}



//6-2
//#include<bits/stdc++.h>
//using namespace std;
//typedef int SeqListData;
//typedef struct SeqListNode
//{
//	SeqListData x;
//	struct SeqListNode* next;
//}SLNode;
//void Push_Back(SLNode** head, SeqListData x,map<int,int>& mymap)
//{
//	if (mymap[x] != 0)
//	{
//		return;
//	}
//	SLNode* newnode = new SLNode();
//	newnode->x = x;
//	newnode->next = nullptr;
//	mymap[x] = 1;
//	if (*head == nullptr)
//	{
//		*head = newnode;
//	}
//	else
//	{
//		SLNode* tail = *head;
//		while (tail->next)
//		{
//			tail = tail->next;
//		}
//		tail->next = newnode;
//	}
//}
//void Print(SLNode* head)
//{
//	SLNode* cur = head;
//	cout << cur->x;
//	cur = cur->next;
//	while (cur)
//	{
//		cout << " " << cur->x;
//		cur = cur->next;
//	}
//	cout << endl;
//}
////void Erase(SLNode** head, map<int, int>& mymap)
////{
////	SLNode* prev = nullptr;
////	SLNode* cur = *head;
////	SLNode* next = cur->next;
////	while (cur)
////	{
////		if (cur == *head)
////		{
////			if (mymap[(*head)->x] > 1)
////			{
////				mymap[(*head)->x]--;
////				*head = (*head)->next;
////				delete cur;
////				cur = *head;
////				if (cur != nullptr)
////				{
////					next = cur->next;
////				}
////				continue;
////			}
////		}
////		else
////		{
////			if (mymap[(*cur).x] > 1)
////			{
////				mymap[(*cur).x]--;
////				prev->next = next;
////				delete cur;
////				cur = next;
////				next = cur->next;
////				continue;
////			}
////		}
////		prev = cur;
////		cur = cur->next;
////		if (cur == nullptr)
////		{
////			break;
////		}
////		else if(cur->next)
////		{
////			next = cur->next;
////		}
////	}
////}
//int main()
//{
//	int n, m;
//	SeqListData x;
//	cin >> m;
//	int i;
//	for (i = 0; i < m; i++)
//	{
//		cin >> n;
//		if (n == 0)
//		{
//			cout << endl;
//			continue;
//		}
//		SLNode* head = nullptr;
//		map<int, int> mymap;
//		for (int j = 0; j < n; j++)
//		{
//			cin >> x;
//			Push_Back(&head, x, mymap);
//		}
//		//Erase(&head, mymap);
//		Print(head);
//	}
//	return 0;
//}

//6-3
//#include<bits/stdc++.h>
//using namespace std;
//typedef int SeqListData;
//typedef struct SeqListNode
//{
//	SeqListData x;
//	struct SeqListNode* next;
//}SLNode;
//void Push_Back(SLNode** head, SeqListData x)
//{
//	SLNode* newnode = new SLNode();
//	newnode->x = x;
//	newnode->next = nullptr;
//	if (*head == nullptr)
//	{
//		*head = newnode;
//	}
//	else
//	{
//		SLNode* tail = *head;
//		while (tail->next)
//		{
//			tail = tail->next;
//		}
//		tail->next = newnode;
//	}
//}
//void Erase(SLNode** head, int _min)
//{
//	SLNode* cur = *head;
//	SLNode* prev = nullptr;
//	while (cur)
//	{
//		if (cur->x == _min)
//		{
//			if (cur == *head)
//			{
//				*head = (*head)->next;
//				delete cur;
//				cur = *head;
//			}
//			else
//			{
//				prev->next = cur->next;
//				delete cur;
//				cur = prev->next;
//			}
//		}
//		else
//		{
//			prev = cur;
//			cur = cur->next;
//		}
//	}
//}
//void Print(SLNode* head)
//{
//	if (head == nullptr)
//	{
//		cout << endl;
//		return;
//	}
//	SLNode* cur = head;
//	cout << cur->x;
//	cur = cur->next;
//	while (cur)
//	{
//		cout << " " << cur->x;
//		cur = cur->next;
//	}
//	cout << endl;
//}
//int main()
//{
//	int n;
//	SeqListData x;
//	while (cin >> n)
//	{
//		int i;
//		int _min = INT_MAX;
//		SLNode* head = nullptr;
//		for (i = 0; i < n; i++)
//		{
//			cin >> x;
//			_min = min(x, _min);
//			Push_Back(&head, x);
//		}
//		Erase(&head, _min);
//		Print(head);
//	}
//	return 0;
//}


#include<bits/stdc++.h>
using namespace std;
typedef char SLDataType;
typedef struct SLNode
{
    SLDataType data;
    struct SLNode* next;
}SLNode;
void CreatSList(SLNode** pphead, int n)
{
    *pphead = new SLNode;
    (*pphead)->next = NULL;
    SLNode* p, *tail;
    tail = *pphead;
    for (int i = 0; i < n; i++)
    {
        p = new SLNode;
        cin >> p->data;
        p->next = nullptr;
        tail->next = p;
        tail = p;
    }
}
void EraseSList(SLNode** pphead, SLNode* pos)
{
    if (pos == *pphead)
    {
        SLNode* next = (*pphead)->next;
        delete pphead;
        *pphead = next;
    }
    else
    {
        SLNode* prev = *pphead;
        while (prev->next != pos)
        {
            prev = prev->next;
        }
        prev->next = pos->next;
        delete pos;
    }
}
void PrintSList(SLNode** pphead)
{
    if (*pphead == nullptr)
    {
        return;
    }
    else
    {
        SLNode* cur = *pphead;
        while (cur)
        {
            cout << cur->data;
            cur = cur->next;
        }
        cout << endl;
    }
}
int main()
{
    int n, pos;
    SLNode* L = nullptr;
    while (cin >> n >> pos)
    {
        if (pos<1 || pos>n)
        {
            cout << "location error" << endl;
        }
        CreatSList(&L, n);
        EraseSList(&L, pos);
        PrintSList(&L);
    }
    return 0;
}