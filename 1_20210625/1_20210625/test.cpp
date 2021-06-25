#include<iostream>
#include<string>
using namespace std;
int main(){
	string str1, str2;
	//因为字符串有空格所以使用getline输入
	//cin遇到空格就结束
	getline(cin, str1);
	getline(cin, str2);
	//数组开256是因为ASCII码表有256个字符
	int hash[256] = { 0 };
	//先遍历str2
	for (int i = 0; i < str2.size(); i++){
		hash[str2[i]]++;
	}
	//存放结果
	string ret;
	//再遍历str1
	for (int i = 0; i < str1.size(); i++){
		if (hash[str1[i]] == 0){
			ret += str1[i];
		}
	}
	cout << ret << endl;
}



#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string str;
	getline(cin, str);
	//先翻转整个字符串
	reverse(str.begin(), str.end());
	//再使用双指针翻转每个单词
	//单词之间以空格间隔
	//双指针逐个翻转单词
	//left right
	auto left = str.begin();
	while (left != str.end()){
		auto right = left;
		//空格是字符使用''
		//*right-right需要解引用
		while (right != str.end() && *right != ' '){
			right++;
		}
		//不管是情况1还是情况2都需要reverse,所以把reverse放在if/else外面
		reverse(left, right);
		if (right != str.end()){
			left = right + 1;
		}
		else{
			left = right;
		}
	}
	cout << str << endl;
}