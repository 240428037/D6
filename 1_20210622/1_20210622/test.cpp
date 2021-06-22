class Solution {
public:
	void mergesort(vector<int>&nums, int left, int right, vector<int>&tmp){
		if (left >= right){
			return;
		}
		int mid = (left + right) >> 1;
		mergesort(nums, left, mid, tmp);
		mergesort(nums, mid + 1, right, tmp);
		int left1 = left;
		int left2 = mid + 1;
		int k = left;
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
		for (int k = left; k <= right; k++){
			nums[k] = tmp[k];
		}
	}
	vector<int> sortArray(vector<int>& nums) {
		vector<int>tmp(nums.size());
		int left = 0, right = nums.size() - 1;
		mergesort(nums, left, right, tmp);
		return nums;
	}
};