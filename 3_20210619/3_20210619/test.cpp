class Solution {
public:
	void mergesort(vector<int>& nums, int left, int right, vector<int>&tmp){
		//终止条件
		if (left >= right){
			return;
		}
		//先划分
		int mid = (left + right) >> 1;
		//[left,mid][mid+1,right]//无序
		mergesort(nums, left, mid, tmp);
		mergesort(nums, mid + 1, right, tmp);
		//[left,mid][mid+1,right]//有序
		//归并两段有序区间
		int left1 = left, right1 = mid;
		int left2 = mid + 1, right2 = right;
		int index = left;
		while (left1 <= right1&&left2 <= right2){
			if (nums[left1] < nums[left2]){
				tmp[index++] = nums[left1++];
			}
			else{
				tmp[index++] = nums[left2++];
			}
		}
		if (left1 <= right1){
			while (left1 <= right1){
				tmp[index++] = nums[left1++];
			}
		}
		else{
			while (left2 <= right2){
				tmp[index++] = nums[left1++];
			}
		}
		auto it = tmp.begin();
		while (it != tmp.end()){
			nums.push_back(*it);
			it++;
		}
	}
	vector<int> sortArray(vector<int>& nums) {
		int left = 0;
		int right = nums.size() - 1;
		vector<int>tmp;
		mergesort(nums, left, right, tmp);
		return nums;
	}
};