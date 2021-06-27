#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//双指针判断回文
bool iscircle1(const string&str){
	int begin = 0, end = str.size() - 1;
	while (begin < end){
		if (str[begin] != str[end]){
			return false;
		}
		begin++;
		end--;
	}
	return true;
}
//先翻转字符串然后判断相等
//此时传参不能传引cosnt+引用
bool iscircle2(string str){
	string str3 = str;
	reverse(str.begin(), str.end());
	if (str == str3){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	int count = 0;
	//i<=str1.size()因为假如有三个字符可以有四个地方插入
	for (int i = 0; i <= str1.size(); i++){
		string str = str1;
		str.insert(i, str2);
		if (iscircle2(str)){
			count++;
		}
	}
	cout << count << endl;
	return 0;
}

max(dp[i]) = getmax(max((dp[i - 1] + arr[i]), arr[i]))



#include<iostream>
#include<vector>
using namespace std;
int getmax(int a, int b){
	return (a) > (b) ? (a) : (b);
}
int main(){
	int size = 0;
	cin >> size;
	vector<int>nums(size);
	for (int i = 0; i < size; i++){
		cin >> nums[i];
	}
	//初始值不能赋为0，要用nums[0]
	int sum = nums[0];
	int max = nums[0];
	//因为sum和max的初始化为nums[0],所以i从1开始
	for (int i = 1; i < size; i++){
		sum = getmax(sum + nums[i], nums[i]);
		if (sum >= max){
			max = sum;
		}
	}
	cout << max << endl;
	return 0;
}