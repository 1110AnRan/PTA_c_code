
//1
//#include <bits/stdc++.h>
//using namespace std;
//int n, x, y;
//vector<int> v1, v2;
//int main()
//{
//	cin >> n;
//	int i;
//	for (i = 0; i < n; ++i)
//	{
//		int m;
//		cin >> m;
//		v1.push_back(m);
//	}
//	cin >> x >> y;
//	for (auto it = v1.begin(); it != v1.end(); ++it)
//	{
//		if (!(*it >= x && *it <= y))
//		{
//			v2.push_back(*it);
//		}
//	}
//	auto it2 = v2.begin();
//	cout << *it2;
//	++it2;
//	while (it2 != v2.end())
//	{
//		cout << " " << *it2;
//		++it2;
//	}
//	cout << endl;
//	return 0;
//}


//2
//#include <bits/stdc++.h>
//using namespace std;
//int n, m, x;
//vector<int> v;
//int main()
//{
//	cin >> n;
//	int i;
//	for(i = 0; i < n; ++i)
//	{
//		cin >> m;
//		v.push_back(m);
//	}
//	cin >> x;
//	auto it = v.begin();
//	while (it!=v.end() && *it < x)
//	{
//		it++;
//	}
//	v.insert(it, x);
//	for (i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << ",";
//	}
//	cout << endl;
//	return 0;
//}

//3
//#include <bits/stdc++.h>
//using namespace std;
//int n1, n2, m;
//vector<int> v1;
//map<int, int> mp;
//int main()
//{
//	cin >> n1;
//	int i;
//	for (i = 0; i < n1; ++i)
//	{
//		cin >> m;
//		v1.push_back(m);
//		mp[m] = 1;
//	}
//	cin >> n2;
//	for (i = 0; i < n2; ++i)
//	{
//		cin >> m;
//		if (!mp[m])
//		{
//			mp[m] = 1;
//			v1.push_back(m);
//		}
//	}
//	for (i = 0; i < v1.size(); ++i)
//	{
//		cout << v1[i] << " ";
//	}
//	return 0;
//}




//4
//#include <bits/stdc++.h>
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
//SLNode* reverseList(SLNode** head)
//{
//	if (*head == NULL || (*head)->next == NULL)
//	{
//		return *head;
//	}
//	SLNode* cur = (*head)->next;
//	SLNode* pre = *head;
//	pre->next = NULL;
//	while (cur && cur->next)
//	{
//		SLNode* next = cur->next;
//		cur->next = pre;
//		pre = cur;
//		cur = next;
//		next = next->next;
//	}
//	cur->next = pre;
//	return cur;
//}
//void Print(SLNode* head)
//{
//	SLNode* cur = head;
//	cout << cur->x;
//	cur = cur->next;
//	while (cur != nullptr)
//	{
//		cout << " " << cur->x;
//		cur = cur->next;
//	}
//	cout << endl;
//}
//int t;
//int main()
//{
//	cin >> t;
//	while (t--)
//	{
//		int n;
//		SLNode* head = nullptr;
//		while (cin >> n)
//		{
//			if(n != -1)
//			{
//				Push_Back(&head, n);
//			}
//			else
//			{
//				break;
//			}
//		}
//		SLNode* newhead = reverseList(&head);
//		Print(newhead);
//	}
//	return 0;
//}
