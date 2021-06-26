#include<iostream>
#include<string>
using namespace std;
int main(){
	//cur临时
	//ret结果
	string str, cur, ret;
	getline(cin, str);
	//i<=str.size()必须加=
	//因为如果最长的数字串在末尾
	//最后一次if判断后cur+=；不进入else;再i++迭代后就进入不了for循环，也就没法把cur赋给ret;
	for (int i = 0; i <= str.size(); i++){
		if (str[i] >= '0'&&str[i] <= '9'){
			cur += str[i];
		}
		else{
			if (cur.size() > ret.size()){
				ret = cur;
			}
			else{
				cur.clear();
			}
		}
	}
	cout << ret << endl;
	return 0;
}