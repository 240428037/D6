class Solution {
public:
	void bubblesort1(vector<int>&nums){
		int n = nums.size();
		for (int i = 0; i < n - 1; i++){
			int flag = 0;
			for (int j = 0; j<n - 1 - i; j++){
				if (nums[j]>nums[j + 1]){
					swap(nums[j], nums[j + 1]);
					flag = 1;
				}
			}
			if (flag == 0)break;
		}
	}
	void bubblesort2(vector<int>&nums){
		int n = nums.size();
		for (int end = n - 1; end > 0; end--){
			int flag = 0;
			for (int i = 0; i<end; i++){
				if (nums[i]>nums[i + 1])
					flag = 1;
			}
			if (flag == 0)break;
		}
	}
	vector<int> sortArray(vector<int>& nums) {
		bubblesort2(nums);
		return nums;
	}
};


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
	vector<int> sortArray(vector<int>& nums) {
		bubblesort(nums);
		return nums;
	}
};


void bubbleSort(int a[], int n)
{
	for (int i = n - 1; i > 0; i--)
	for (int j = 0; j < i; j++)
	if (a[j] > a[j + 1])
		swap(a[j], a[j + 1]);
}


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
		// for(int i=n-1;i>0;i--){
		//     int flag=0;
		//     for(int j=0;j<i;j++){
		//         if(nums[j]>nums[j+1]){
		//             swap(nums[j],nums[j+1]);
		//         flag=1;
		//         }
		//     }
		//     if(flag==0){
		//         break;
		//     }
		// }
	}

	vector<int> sortArray(vector<int>& nums) {
		bubblesort(nums);
		return nums;
	}
};