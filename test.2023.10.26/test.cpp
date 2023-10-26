

//7-1
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		int size = 0;
//		bool flag = true;
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (s[i] == 'I')
//			{
//				size++;
//			}
//			else
//			{
//				if (size <= 0)
//				{
//					flag = false;
//				}
//				size--;
//			}
//		}
//		if (size != 0)
//		{
//			cout << "0\n";
//		}
//		else
//		{
//			if (flag == true)
//			{
//				cout << "1\n";
//			}
//			else
//			{
//				cout << "0\n";
//			}
//		}
//	}
//	return 0;
//}

//7-2
//#include<bits/stdc++.h>
//using namespace std;
//string s;
//int main()
//{
//	while (cin >> s)
//	{
//		stack<char> st;
//		int i;
//		int left = 0, right = 0;
//		for (i = 0; i < s.size(); ++i)
//		{
//			if (s[i] == '('
//				|| s[i] == '['
//				|| s[i] == '{')
//			{
//				st.push(s[i]);
//				left++;
//			}
//			else
//			{
//				right++;
//				if (!st.empty())
//				{
//					if (s[i] == ')')
//					{
//						if (st.top() == '(')
//						{
//							st.pop();
//						}
//					}
//					else if (s[i] == ']')
//					{
//						if (st.top() == '[')
//						{
//							st.pop();
//						}
//					}
//					else
//					{
//						if (st.top() == '{')
//						{
//							st.pop();
//						}
//					}
//				}
//			}
//		}
//		if (left == right && st.empty())
//		{
//			cout << "1\n";
//		}
//		else
//		{
//			cout << "0\n";
//		}
//	}
//	return 0;
//}


//7-3
//#include<bits/stdc++.h>
//using namespace std;
//string s;
//int main()
//{
//	cin >> s;
//	if (s.size() % 2 == 1)
//	{
//		cout << "no\n";
//	}
//	else
//	{
//		int left = 0, right = s.size() - 1;
//		while (left < right)
//		{
//			if (s[left] != s[right])
//			{
//				cout << "no\n";
//				break;
//			}
//			left++;
//			right--;
//		}
//		if (left < right)
//		{
//			cout << "no\n";
//		}
//	}
//	return 0;
//}



#include<bits/stdc++.h>
using namespace std;
typedef struct Stack
{
	size_t _size;
	char* _arr;
}mystack;
void init(mystack& s,size_t _size)
{
	s._arr = new char[_size + 1];
	s._size = 0;
}
void push(mystack& s, const char& x)
{
	s._arr[s._size] = x;
	++s._size;
}
void pop(mystack& s)
{
	--s._size;
}
char top(const mystack& s)
{
	return s._arr[s._size];
}
int main()
{
	string s;
	cin >> s;
	int mid = s.size() / 2;
	mystack s1, s2;
	init(s1, s.size());
	init(s2, s.size());
	int i;
	for (i = 0; i < mid; ++i)
	{
		push(s1, s[i]);
	}
	if (s.size() % 2 == 1)
	{
		for (i = s.size() - 1; i > mid; --i)
		{
			push(s2, s[i]);
		}
	}
	else
	{
		for (i = s.size() - 1; i >= mid; --i)
		{
			push(s2, s[i]);
		}
	}
	bool flag = false;
	while (s1._size > 0 && s2._size > 0)
	{
		if (top(s1) != top(s2))
		{
			flag = true;
			break;
		}
		else
		{
			pop(s1);
			pop(s2);
		}
	}
	if (flag == true)
	{
		cout << "no";
	}
	else
	{
		if (s1._size == 0 && s2._size == 0)
		{
			cout << "yes";
		}
		else
		{
			cout << "no";
		}
	}
	return 0;
}