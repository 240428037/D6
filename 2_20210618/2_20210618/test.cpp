class Solution {
public:
	void quicksort(vector<int>&nums, int left, int right){
		if (left >= right){
			return;
		}
		int pos = partsort3(nums, left, right);
		quicksort(nums, left, pos - 1);
		quicksort(nums, pos + 1, right);
	}
	//�ڿӷ�
	int partsort2(vector<int>&nums, int left, int right){
		int mid = getmid(nums, left, right);
		swap(nums[right], nums[mid]);
		int key = nums[right];
		while (left < right){
			while (left < right&&nums[left] <= key){
				left++;
			}
			nums[right] = nums[left];
			while (left < right&&nums[right] >= key){
				right--;
			}
			nums[left] = nums[right];
		}
		nums[left] = key;
		return left;
	}
	//����ָ�뷨
	int partsort1(vector<int>&nums, int left, int right){
		int mid = getmid(nums, left, right);
		swap(nums[right], nums[mid]);
		int key = nums[right];
		int keyindex = right;
		while (left < right){
			while (left < right&&nums[left] <= key){
				left++;
			}
			while (left < right&&nums[right] >= key){
				right--;
			}
			swap(nums[left], nums[right]);
		}
		swap(nums[left], nums[keyindex]);
		return left;
	}
	//ǰ��ָ�뷨
	int partsort3(vector<int>&nums, int left, int right){
		int prev = left - 1;
		int cur = left;
		int mid = getmid(nums, left, right);
		swap(nums[right], nums[mid]);
		int key = nums[right];
		while (cur < right){
			if (nums[cur] < key&&prev++ != cur){
				swap(nums[prev], nums[cur]);
			}
			cur++;
		}
		prev++;
		swap(nums[prev], nums[right]);
		return prev;
	}
	//����ȡ�з�ѡkey
	int getmid(vector<int>&nums, int left, int right){
		//left mid right
		int mid = (left + right) >> 1;
		//left<mid
		if (nums[left] < nums[mid]){
			//right left mid 
			if (nums[right] < nums[left]){
				return left;
			}
			//left mid right
			else if (nums[mid] < nums[right]){
				return mid;
			}
			//left right mid
			else{
				return right;
			}
		}
		//mid<left
		else{
			//right mid left
			if (nums[right] < nums[mid]){
				return mid;
			}
			//mid left right
			else if (nums[left] < nums[right]){
				return left;
			}
			//mid right left 
			else{
				return right;
			}
		}
	}
	//���ŷǵݹ�
	void quicksortstack(vector<int>&nums, int left, int right){
		stack<int>st;
		st.push(left);
		st.push(right);
		while (!st.empty()){
			int right = st.top();
			st.pop();
			int left = st.top();
			st.pop();
			int pos = partsort2(nums, left, right);
			if (left < pos - 1){
				st.push(left);
				st.push(pos - 1);
			}
			if (pos + 1 < right){
				st.push(pos + 1);
				st.push(right);
			}
		}
	}
	vector<int> sortArray(vector<int>& nums) {
		int left = 0, right = nums.size() - 1;
		quicksort(nums, left, right);
		//quicksortstack(nums,left,right);
		return nums;
	}
};