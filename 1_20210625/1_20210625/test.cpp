#include<iostream>
#include<string>
using namespace std;
int main(){
	string str1, str2;
	//��Ϊ�ַ����пո�����ʹ��getline����
	//cin�����ո�ͽ���
	getline(cin, str1);
	getline(cin, str2);
	//���鿪256����ΪASCII�����256���ַ�
	int hash[256] = { 0 };
	//�ȱ���str2
	for (int i = 0; i < str2.size(); i++){
		hash[str2[i]]++;
	}
	//��Ž��
	string ret;
	//�ٱ���str1
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
	//�ȷ�ת�����ַ���
	reverse(str.begin(), str.end());
	//��ʹ��˫ָ�뷭תÿ������
	//����֮���Կո���
	//˫ָ�������ת����
	//left right
	auto left = str.begin();
	while (left != str.end()){
		auto right = left;
		//�ո����ַ�ʹ��''
		//*right-right��Ҫ������
		while (right != str.end() && *right != ' '){
			right++;
		}
		//���������1�������2����Ҫreverse,���԰�reverse����if/else����
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