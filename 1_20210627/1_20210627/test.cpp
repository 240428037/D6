#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//˫ָ���жϻ���
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
//�ȷ�ת�ַ���Ȼ���ж����
//��ʱ���β��ܴ���cosnt+����
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
	//i<=str1.size()��Ϊ�����������ַ��������ĸ��ط�����
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
	//��ʼֵ���ܸ�Ϊ0��Ҫ��nums[0]
	int sum = nums[0];
	int max = nums[0];
	//��Ϊsum��max�ĳ�ʼ��Ϊnums[0],����i��1��ʼ
	for (int i = 1; i < size; i++){
		sum = getmax(sum + nums[i], nums[i]);
		if (sum >= max){
			max = sum;
		}
	}
	cout << max << endl;
	return 0;
}