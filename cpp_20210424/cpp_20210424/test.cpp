#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	int hash[256] = { 0 };
	for (int i = 0; i < str2.size(); i++)
	{
		hash[str2[i]]++;
	}
	string ret;
	for (int i = 0; i < str1.size(); i++)
	{
		if (hash[str1[i]] == 0)
			ret += str1[i];
	}
	cout << ret << endl;
	return 0;
}

//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		long long sum = 0;//Ϊ�˱�����Щ������������sum���Ͷ���Ϊlong long
//		vector<int>a;
//		a.resize(3 * n);
//		for (int i = 0; i < 3 * n; i++)
//		{
//			cin >> a[i];
//		}
//		std::sort(a.begin(), a.end());
//		for (int i = 0; i < n; i++)
//		{
//			sum += a[a.size() - 2 * (i + 1)];
//		}
//		cout << sum << endl;
//	}
//}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n=0;
	while (cin>>>n)//��cin>>n����whileѭ������Ϊ�˷�ֹ��������ѭ������
	{
		long long sum = 0;//sum�����Ͷ���Ϊlong long��Ϊ�˷�ֹ������������
		vector<int>a;
		a.resize(3 * n);
		for (int i = 0; i < 3 * n;i++)
		{
			cin >> a[i];
		}
		std::sort(a.begin(), a.end());
		for (int i = 0; i < n;i++)
		{
			sum += a[a.size() - 2*(i + 1)];
		}
		cout << sum << endl;
	}
	return 0;
}


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n = 0;
	while (cin >> n)//cin>>n����whileѭ������Ϊ�˷�ֹ��������ѭ������
	{
		long long sum = 0;//sum���Ͷ���Ϊlong long��Ϊ�˷�ֹ������������
		vector<int>a;
		a.resize(3 * n);
		for (int i = 0; i < 3 * n; i++)
		{
			cin >> a[i];
		}
		std::sort(a.begin(), a.end());
		for (int i = 0; i < n; i++)//forѭ����������i<n���n����������ʽ�Ƶ�����
		{
			sum += a[a.size() - 2 * (1 + i)];
		}
		cout << sum << endl;
	}
	return 0;
}



#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	int hash[256] = { 0 };
	for (int i = 0; i < str2.size(); i++)
	{
		hash[str2[i]]++;
	}
	string ret;
	for (int i = 0; i < str1.size(); i++)
	{
		if (hash[str1[i]] == 0)
			ret += str1[i];
	}
	cout << ret << endl;
	return 0;
}