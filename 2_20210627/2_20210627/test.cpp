class Solution {
public:
	int StrToInt(string str) {
		if (str.empty()){
			return 0;
		}
		int flag = 1;
		//str[0]要置为'0'否则for循环内会进入if判断直接跳出循环
		if (str[0] == '-'){
			flag = -1;
			str[0] = '0';
		}
		if (str[0] == '+'){
			flag = 1;
			str[0] = '0';
		}
		int sum = 0;
		for (int i = 0; i < str.size(); i++){
			if (str[i]<'0' || str[i]>'9'){
				sum = 0;
				break;
			}
			sum = sum * 10 + str[i] - '0';
		}
		return flag*sum;
	}
};