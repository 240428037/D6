#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	vector<string>v;
	int n;
	cin >> n;
	v.resize(n);
	for (auto&str : v){
		cin >> str;
	}
	bool lensort = true;
	bool csort = true;
	for (int i = 1; i<n; i++){
		if (v[i - 1].size()>v[i].size()){
			lensort = false;
			break;
		}
	}
	for (int i = 1; i<n; i++){
		if (v[i - 1]>v[i]){
			csort = false;
			break;
		}
	}
	if (lensort&&csort){
		cout << "both" << endl;
	}
	else if (lensort){
		cout << "lengths" << endl;
	}
	else if (csort){
		cout << "lexicographically" << endl;
	}
	else{
		cout << "none" << endl;
	}
	return 0;
}



#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	//��ʼ��
	vector<string>v;
	int n;
	cin >> n;
	v.resize(n);
	for (auto&str : v){
		cin >> str;
	}
	//�ж�
	bool lensort = true;
	bool csort = true;
	for (int i = 1; i<n; i++){
		if (v[i - 1].size()>v[i].size()){
			lensort = false;
			break;
		}
	}
	for (int i = 1; i<n; i++){
		if (v[i - 1]>v[i]){
			csort = false;
			break;
		}
	}
	//�����ӡ
	if (lensort&&csort){
		cout << "both" << endl;
	}
	else if (lensort){
		cout << "lengths" << endl;
	}
	else if (csort){
		cout << "lexicographically" << endl;
	}
	else{
		cout << "none" << endl;
	}
	return 0;
}



#include<iostream>
using namespace std;
int main(){
	int a, b;
	while (cin >> a >> b){
		int m = max(a, b);
		while (1){
			if (m%a == 0 && m%b == 0){
				cout << m << endl;
				break;
			}
			m++;
		}
	}
	return 0;
}



#include<iostream>
using namespace std;
//շת����������Լ��
int gcd(int a, int b){
	int c;
	while ((c = a%b)){
		a = b;
		b = c;
	}
	return b;
}
int main(){
	int a, b;
	while (cin >> a >> b){
		//��С������=�������ĳ˻��������ǵ����Լ��
		cout << (a*b) / gcd(a, b) << endl;
	}
	return 0;
}



#include<iostream>
using namespace std;
int main(){
	int a, b;
	while (cin >> a >> b){
		int m = max(a, b);
		while (1){
			if (m%a == 0 && m%b == 0){
				cout << m << endl;
				break;
			}
			m++;
		}
	}
	return 0;
}