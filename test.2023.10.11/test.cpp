
//5-1
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	string s;
//	int n;
//	char ch1;
//	while (cin >> n >> ch1)
//	{
//		char ch2;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> ch2;
//			s += ch2;
//		}
//		int pos = s.find(ch1, 0);
//		if (pos != -1)
//		{
//			cout << pos + 1 << endl;
//		}
//		else
//		{
//			cout << "not found" << endl;
//		}
//		s.clear();
//	}
//	return 0;
//}


//5-2
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	string s;
//	int n, index;
//	char x;
//	while (cin >> n >> index >> x)
//	{
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			char ch;
//			cin >> ch;
//			s += ch;
//		}
//		if (index - 1 > s.size())
//		{
//			cout << "location error\n";
//		}
//		else
//		{
//			s.insert(index - 1, 1, x);
//			cout << s << endl;
//		}
//		s.clear();
//	}
//	return 0;
//}


//5-3
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	string s;
//	int n;
//	char ch1;
//	while (cin >> n >> ch1)
//	{
//		char ch2;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> ch2;
//			s += ch2;
//		}
//		int pos = s.find(ch1, 0);
//		if (pos != -1)
//		{
//			s.erase(pos, 1);
//			cout << s << endl;
//		}
//		else
//		{
//			cout << "not found" << endl;
//		}
//		s.clear();
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//typedef char Element;
//typedef struct Node
//{
//	Element x;
//	struct Node *next;
//}Node;
//int n;
//char ch;
//Node* BuyNewListNode(Element x)
//{
//	Node* newnode = new Node;
//	newnode->x = x;
//	newnode->next = nullptr;
//	return newnode;
//}
//void ListPush_Back(Node** head, Element x)
//{
//	Node* newnode = BuyNewListNode(x);
//	if (*head == nullptr)
//	{
//		*head = newnode;
//	}
//	else
//	{
//		Node* tail = *head;
//		while (tail->next != nullptr)
//		{
//			tail = tail->next;
//		}
//		tail->next = newnode;
//	}
//}
//bool ListErase(Node** head, Element x)
//{
//	Node* prev = nullptr;
//	Node* cur = *head;
//	if (cur->x == x)
//	{
//		*head = (*head)->next;
//		delete cur;
//		cur = nullptr;
//		return true;
//	}
//	else
//	{
//		while (cur->x != x)
//		{
//			prev = cur;
//			cur = cur->next;
//			if (cur == nullptr)
//			{
//				return false;
//			}
//		}
//		prev->next = cur->next;
//		delete cur;
//		return true;
//	}
//}
//void ListPrint(Node** head)
//{
//	Node* cur = *head;
//	while (cur)
//	{
//		cout << cur->x;
//		cur = cur->next;
//	}
//	cout << endl;
//}
//int main()
//{
//	while (cin >> n >> ch)
//	{
//		Node* head = nullptr;
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			char x;
//			cin >> x;
//			ListPush_Back(&head, x);
//		}
//		if (ListErase(&head, ch))
//		{
//			ListPrint(&head);
//		}
//		else
//		{
//			cout << "not found\n";
//		}
//	}
//	return 0;
//}