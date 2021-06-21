class Solution {
public:
	void bubblesort(vector<int>&nums){
		int n = nums.size();
		for (int i = 0; i < n - 1; i++){
			int flag = 0;
			for (int j = 0; j<n - 1 - i; j++){
				if (nums[j]>nums[j + 1]){
					swap(nums[j], nums[j + 1]);
					flag = 1;
				}
			}
			if (flag == 0){
				break;
			}
		}
	}
	void bubblesort2(vector<int>&nums){
		int n = nums.size();
		for (int i = n - 1; i > 0; i--){
			int flag = 0;
			for (int j = 0; j<i; j++){
				if (nums[j]>nums[j + 1]){
					swap(nums[j], nums[j + 1]);
					flag = 1;
				}
			}
			if (flag == 0){
				break;
			}
		}
	}
	vector<int> sortArray(vector<int>& nums) {
		//[25,6,56,24,9,12,55]
		bubblesort2(nums);
		return nums;
	}
};