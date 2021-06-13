class Solution {
public:
	bool isnumberorletter(char ch){
		if ((ch >= '0'&&ch <= '9') || (ch >= 'a'&&ch <= 'z')){
			return true;
		}
		else{
			return false;
		}
	}
	bool isPalindrome(string s) {
		if (s.empty()){
			return true;
		}
		for (auto&ch : s){
			if (ch >= 'A'&&ch <= 'Z'){
				ch += 32;
			}
		}
		int begin = 0, end = s.size() - 1;
		while (begin < end){
			while (begin < end&&!isnumberorletter(s[begin])){
				begin++;
			}
			while (begin < end&&!isnumberorletter(s[end])){
				end--;
			}
			if (s[begin] != s[end]){
				return false;
			}
			begin++;
			end--;
		}
		return true;
	}
};