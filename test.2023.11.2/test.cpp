

//8-1
//#include<bits/stdc++.h>
//using namespace std;
//int n, m;
//int main()
//{
//	while (cin >> n >> m)
//	{
//		vector<int> v;
//		int i;
//		int cnt = 1;
//		for (i = 0; i < n; ++i)
//		{
//			int x;
//			cin >> x;
//			if (!(x & 1))
//			{
//				v.push_back(x);
//			}
//			if (v.size() == m)
//			{
//				cout << cnt << ":";
//				++cnt;
//				for (const auto e : v)
//				{
//					cout << e << " ";
//				}
//				cout << endl;
//				v.clear();
//			}
//		}
//	}
//	return 0;
//}


//8-2
//#include<bits/stdc++.h>
//using namespace std;
//int n;
//int main()
//{
//	while (cin >> n)
//	{
//		string s;
//		while (n)
//		{
//			if (n % 16 >= 0 && n % 16 <= 9)
//			{
//				s += '0' + n % 16;
//			}
//			else
//			{
//				s += '0' + 7 + n % 16;
//			}
//			n /= 16;
//		}
//		reverse(s.begin(), s.end());
//		cout << s << endl;
//	}
//	return 0;
//}

//8-3
//#include<bits/stdc++.h>
//using namespace std;
//int m, n, k;
//int main()
//{
//	cin >> m >> n >> k;
//	while (k--)
//	{
//		stack<int> st;
//		vector<int> v;
//		int i;
//		for (i = 0; i < n; ++i)
//		{
//			int x;
//			cin >> x;
//			v.push_back(x);
//		}
//		int cur = 0;
//		for (i = 1; i <= n; ++i)
//		{
//			st.push(i);
//			if (st.size() > m)
//			{
//				cout << "NO\n";
//				break;
//			}
//			while (!st.empty() && v[cur] == st.top())
//			{
//				++cur;
//				st.pop();
//			}
//		}
//		if (i <= n)
//		{
//			continue;
//		}
//		if (st.empty())
//		{
//			cout << "YES\n";
//		}
//		else
//		{
//			cout << "NO\n";
//		}
//	}
//	return 0;
//}