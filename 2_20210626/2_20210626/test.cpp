#include<iostream>
using namespace std;
int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int A = (a + c) / 2;
	int B1 = (b + d) / 2;
	int B2 = (c - a) / 2;
	int C = (d - b) / 2;
	if (B1 != B2){
		cout << "No" << endl;
	}
	else{
		cout << A << " " << B1 << " " << C << endl;
	}
	return 0;
}



#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	//m=123 n=10
	//123%10=3 123/10=12
	//12%10=2 12/10=1
	//1%10=1 1/10=0
	int m, n;
	cin >> m >> n;
	string s, table = "0123456789ABCDEF";
	bool flag = true;
	if (m < 0){
		m = -m;
		flag = false;
	}
	while (m != 0){
		s = s + table[m%n];
		m /= n;
	}
	if (flag == false){
		s += "-";
	}
	reverse(s.begin(), s.end());
	cout << s << endl;
	return 0;
}