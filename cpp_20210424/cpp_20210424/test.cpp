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
//		long long sum = 0;//为了避免有些测试用例过大，sum类型定义为long long
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
	while (cin>>>n)//把cin>>n套在while循环里是为了防止测试用例循环输入
	{
		long long sum = 0;//sum的类型定义为long long是为了防止测试用例过大
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
	while (cin >> n)//cin>>n放在while循环里是为了防止测试用例循环输入
	{
		long long sum = 0;//sum类型定义为long long是为了防止测试用例过大
		vector<int>a;
		a.resize(3 * n);
		for (int i = 0; i < 3 * n; i++)
		{
			cin >> a[i];
		}
		std::sort(a.begin(), a.end());
		for (int i = 0; i < n; i++)//for循环控制条件i<n这个n是由上述公式推导出的
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