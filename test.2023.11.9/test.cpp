

//9-1
//#include<bits/stdc++.h>
//using namespace std;
//typedef struct ListNode
//{
//	int x;
//	struct ListNode* next;
//}Node;
//void Push_Bcak(Node** head, int x)
//{
//	Node* newnode = new Node;
//	newnode->x = x;
//	newnode->next = nullptr;
//	if (*head == nullptr)
//	{
//		*head = newnode;
//	}
//	else
//	{
//		Node* tail = *head;
//		while (tail->next)
//		{
//			tail = tail->next;
//		}
//		tail->next = newnode;
//	}
//}
//int n;
//int main()
//{
//	cin >> n;
//	while (n--)
//	{
//		int s, t, len;
//		Node* head = nullptr;
//		cin >> s >> t;
//		cin >> len;
//		int i;
//		for (i = 0; i < len; ++i)
//		{
//			int m;
//			cin >> m;
//			Push_Bcak(&head, m);
//		}
//		Node* cur = head;
//		int ans = 0;
//		while (cur)
//		{
//			if (cur->x >= s && cur->x <= t)
//			{
//				++ans;
//			}
//			cur = cur->next;
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}

//9-2
//#include<bits/stdc++.h>
//using namespace std;
//typedef struct ListNode
//{
//	int x;
//	struct ListNode* next;
//}Node;
//void Push_Bcak(Node** head, int x)
//{
//	Node* newnode = new Node;
//	newnode->x = x;
//	newnode->next = nullptr;
//	if (*head == nullptr)
//	{
//		*head = newnode;
//	}
//	else
//	{
//		Node* tail = *head;
//		while (tail->next)
//		{
//			tail = tail->next;
//		}
//		tail->next = newnode;
//	}
//}
//void Insert(Node** head, int x)
//{
//	Node* prev = nullptr;
//	Node* cur = *head;
//	Node* newnode = new Node;
//	newnode->x = x;
//	if (cur->x > x)
//	{
//		*head = newnode;
//		newnode->next = cur;
//	}
//	else
//	{
//		while (cur && cur->x < x)
//		{
//			prev = cur;
//			cur = cur->next;
//		}
//		prev->next = newnode;
//		newnode->next = cur;
//	}
//}
//int n, m;
//int main()
//{
//	cin >> n;
//	Node* head = nullptr;
//	int i;
//	for (i = 0; i < n; ++i)
//	{
//		int x;
//		cin >> x;
//		Push_Bcak(&head, x);
//	}
//	cin >> m;
//	Insert(&head, m);
//	Node* cur = head;
//	while (cur)
//	{
//		cout << cur->x << ",";
//		cur = cur->next;
//	}
//	cout << endl;
//	return 0;
//}


//9-3
//#include<bits/stdc++.h>
//using namespace std;
//int n, m;
//int main()
//{
//	while (cin >> n)
//	{
//		vector<int> v;
//		map<int, int> mp;
//		int i;
//		for (i = 0; i < n; ++i)
//		{
//			cin >> m;
//			v.push_back(m);
//			mp[m]++;
//		}
//		int num = INT_MAX;
//		int max_cnt = 0;
//		for (auto it = mp.begin(); it != mp.end(); ++it)
//		{
//			if (it->second > max_cnt)
//			{
//				max_cnt = it->second;
//				num = it->first;
//			}
//		}
//		cout << num << endl;
//	}
//	return 0;
//}

//9-4
//#include<bits/stdc++.h>
//using namespace std;
//int n;
//void Change(int x)
//{
//	if (n == 0)
//	{
//		cout << 0 << endl;
//		return;
//	}
//	string s;
//	int cur = n;
//	if (cur < 0)
//	{
//		cur = -cur;
//	}
//	while (cur)
//	{
//		if (cur % x >= 0 && cur % x <= 9)
//		{
//			s += ('0' + cur % x);
//		}
//		else
//		{
//			s += ('0' + 7 + cur % x);
//		}
//		cur /= x;
//	}
//	if (n < 0)
//	{
//		s += "-";
//	}
//	reverse(s.begin(), s.end());
//	cout << s << endl;
//
//}
//int main()
//{
//	while (cin >> n)
//	{
//		Change(16);
//		Change(2);
//	}
//	return 0;
//}

