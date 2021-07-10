class Solution {
public:
	void mergesort(vector<int>&nums, vector<int>&tmp, int left, int right){
		//递归的终止条件
		if (left >= right){
			return;
		}
		int mid = (left + right) >> 1;
		mergesort(nums, tmp, left, mid);
		mergesort(nums, tmp, mid + 1, right);
		int left1 = left;
		int left2 = mid + 1;
		int k = left;
		//合并两个有序的子序列
		while (left1 <= mid&&left2 <= right){
			if (nums[left1] < nums[left2]){
				tmp[k++] = nums[left1++];
			}
			else{
				tmp[k++] = nums[left2++];
			}
		}
		while (left1 <= mid){
			tmp[k++] = nums[left1++];
		}
		while (left2 <= right){
			tmp[k++] = nums[left2++];
		}
		//tmp为临时数组-将tmp拷回nums
		for (int k = left; k <= right; k++){
			nums[k] = tmp[k];
		}
	}
	vector<int> sortArray(vector<int>& nums) {
		int n = nums.size();
		vector<int>tmp(n);
		int left = 0;
		int right = n - 1;
		mergesort(nums, tmp, left, right);
		return nums;
	}
};



class Solution {
public:
	void bubblesort1(vector<int>&nums){
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
		bubblesort1(nums);
		return nums;
	}
};