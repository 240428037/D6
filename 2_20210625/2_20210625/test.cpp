#include<iostream>
#include<string>
using namespace std;
int main(){
	//cur��ʱ
	//ret���
	string str, cur, ret;
	getline(cin, str);
	//i<=str.size()�����=
	//��Ϊ���������ִ���ĩβ
	//���һ��if�жϺ�cur+=��������else;��i++������ͽ��벻��forѭ����Ҳ��û����cur����ret;
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