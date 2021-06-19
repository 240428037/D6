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



class Solution {
	vector<int> tmp;
	void mergeSort(vector<int>& nums, int l, int r) {
		if (l >= r) return;
		int mid = (l + r) >> 1;
		mergeSort(nums, l, mid);
		mergeSort(nums, mid + 1, r);
		int i = l, j = mid + 1;
		int cnt = 0;
		while (i <= mid && j <= r) {
			if (nums[i] <= nums[j]) {
				tmp[cnt++] = nums[i++];
			}
			else {
				tmp[cnt++] = nums[j++];
			}
		}
		while (i <= mid) {
			tmp[cnt++] = nums[i++];
		}
		while (j <= r) {
			tmp[cnt++] = nums[j++];
		}
		for (int i = 0; i < r - l + 1; ++i) {
			nums[i + l] = tmp[i];
		}
	}
public:
	vector<int> sortArray(vector<int>& nums) {
		tmp.resize((int)nums.size(), 0);
		mergeSort(nums, 0, (int)nums.size() - 1);
		return nums;
	}
};


class Solution {
public:
	void mergesort(vector<int>&nums, int left, int right, vector<int>&tmp){
		if (left >= right){
			return;
		}
		int mid = (left + right) >> 1;
		mergesort(nums, left, mid, tmp);
		mergesort(nums, mid + 1, right, tmp);
		int left1 = left, right1 = mid;
		int left2 = mid + 1, right2 = right;
		int count = 0;
		while (left1 <= right1&&left2 <= right2){
			if (nums[left1] < nums[left2]){
				tmp[count++] = nums[left1++];
			}
			else{
				tmp[count++] = nums[left2++];
			}
		}
		while (left1 <= right1){
			tmp[count++] = nums[left1++];
		}
		while (left2 <= right2){
			tmp[count++] = nums[left2++];
		}
		for (int i = 0; i < right; i++){
			nums[i + 1] = tmp[i];
		}
	}
	vector<int> sortArray(vector<int>& nums) {
		vector<int>tmp;
		int left = 0, right = nums.size() - 1;
		mergesort(nums, left, right, tmp);
		return nums;
	}
};