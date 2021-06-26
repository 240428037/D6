class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		if (numbers.empty()){
			return 0;
		}
		sort(numbers.begin(), numbers.end());
		int mid = numbers[numbers.size() / 2];
		int count = 0;
		for (int i = 0; i<numbers.size(); i++){
			if (mid == numbers[i]){
				count++;
			}
		}
		return count>numbers.size() / 2 ? mid : 0;
	}
};



class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		if (numbers.empty()){
			return 0;
		}
		int result = numbers[0];
		int times = 1;
		for (int i = 1; i < numbers.size(); i++){
			if (times != 0){
				if (result == numbers[i]){
					times++;
				}
				else{
					times--;
				}
			}
			else{
				result = numbers[i];
				times = 1;
			}
		}
		int count = 0;
		for (int i = 0; i<numbers.size(); i++){
			if (result == numbers[i]){
				count++;
			}
		}
		return count>numbers.size() / 2 ? result : 0;
	}
};



class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		if (numbers.empty()){
			return 0;
		}
		int result = numbers[0];
		int times = 1;
		//第一次遍历找到result
		for (int i = 1; i < numbers.size(); i++){
			//times！=0
			if (times != 0){
				if (result == numbers[i]){
					times++;
				}
				else{
					times--;
				}
				//times==0重新赋值
			}
			else{
				result = numbers[i];
				times = 1;
			}
		}
		//第二次遍历判断result出现次数是否超过数组的一半
		int count = 0;
		for (int i = 0; i<numbers.size(); i++){
			if (result == numbers[i]){
				count++;
			}
		}
		return count>numbers.size() / 2 ? result : 0;
	}
};