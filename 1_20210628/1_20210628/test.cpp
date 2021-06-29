#include<iostream>
using namespace std;
int main(){
	int f, f1 = 0, f2 = 1;
	int left = 0, right = 0;
	int N;
	cin >> N;
	while (1){
		f = f1 + f2;
		f1 = f2;
		f2 = f;
		if (f < N){
			left = f;
		}
		else{
			right = f;
			break;
		}
	}
	cout << min(N - left, right - N) << endl;
	return 0;
}


class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		stack<char>sc;
		for (auto ch : A)
		{
			switch (ch)
			{
			case'(':
				sc.push(ch);
				break;
			case')':
			{
					   if (sc.empty() || sc.top() != '(')
						   return false;
					   else
						   sc.pop();
			}
				break;
			default:
				return false;
			}
		}
		return true;
	}
};




class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		// write code here
		stack<char>st;
		for (auto&ch : A){
			switch (ch){
			case'(':
				st.push(ch);
				break;
			case')':
				if (st.empty() || st.top() != '('){
					return false;//À¨ºÅ²»Æ¥Åä
				}
				st.pop();
				break;
			default:
				return false;//²»ÊÇÀ¨ºÅ×Ö·û
			}
		}
		return true;
	}
};