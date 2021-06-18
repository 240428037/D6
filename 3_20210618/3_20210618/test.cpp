class Solution {
public:
	void adjustdown(vector<int>&nums, int n, int root){
		int parent = root;
		int child = parent * 2 + 1;
		while (child<n){
			//选出左右孩子中大的那一个
			if (child + 1 < n&&nums[child + 1] > nums[child]){
				child++;
			}
			//如果孩子比父亲大 交换 继续向下调整
			//如果孩子小于父亲 则调整结束
			if (nums[child]>nums[parent]){
				swap(nums[child], nums[parent]);
				parent = child;
				child = parent * 2 + 1;
			}
			else{
				break;
			}
		}
	}
	void heapsort(vector<int>&nums){
		int n = nums.size();
		//堆排升序 建大堆 O(N)
		for (int i = (n - 1 - 1) / 2; i >= 0; i--){
			adjustdown(nums, n, i);
		}
		int end = n - 1;
		while (end > 0){
			//把堆顶当前最大的数依次换到最后
			swap(nums[0], nums[end]);
			//调堆选出剩下的数当中最大的
			adjustdown(nums, end, 0);
			end--;
		}
	}
	vector<int> sortArray(vector<int>& nums) {
		heapsort(nums);
		return nums;
	}
};




class Solution {
public:
	void adjustdown(vector<int>&nums, int n, int root){
		int parent = root;
		int child = parent * 2 + 1;
		while (child<n){
			//选出左右孩子中大的那一个
			if (child + 1 < n&&nums[child + 1] > nums[child]){
				child++;
			}
			//如果孩子比父亲大，交换，继续向下调整
			if (nums[child]>nums[parent]){
				swap(nums[child], nums[parent]);
				parent = child;
				child = parent * 2 + 1;
			}
			//如果孩子小于父亲，则调整结束
			else{
				break;
			}
		}
	}
	void heapsort(vector<int>&nums){
		int n = nums.size();
		//建大堆
		for (int i = (n - 1 - 1) / 2; i >= 0; i--){
			adjustdown(nums, n, i);
		}
		for (int end = n - 1; end > 0; end--){
			//把堆顶当前最大的数依次换到最后
			swap(nums[0], nums[end]);
			//调堆选出剩下的数中最大的
			adjustdown(nums, end, 0);
		}
	}
	vector<int> sortArray(vector<int>& nums) {
		heapsort(nums);
		return nums;
	}
};