class Solution {
public:
	int partsort(vector<int>&nums, int left, int right){
		//right作key left先走
		int key = nums[right];
		int keyindex = right;
		while (left < right){
			//<=和>=不加=会死循环 5-最左 5 5-最右 三个数永远动不了
			//left找大-找到出while
			while (left < right&&nums[left] <= key){
				left++;
			}
			//right找小-找到出while
			while (left < right&&nums[right] >= key){
				right--;
			}
			//交换
			swap(nums[left], nums[right]);
		}
		swap(nums[left], nums[keyindex]);
		return left;//返回相遇的位置
	}
	void quicksort(vector<int>&nums, int left, int right){
		if (left >= right){
			return;//这个区间没有值了 不用排了 return 
		}
		int pos = partsort(nums, left, right);
		quicksort(nums, left, pos - 1);
		quicksort(nums, pos + 1, right);
	}
	vector<int> sortArray(vector<int>& nums) {
		int left = 0;
		int right = nums.size() - 1;
		quicksort(nums, left, right);
		return nums;
	}
};




class Solution {
public:
	void quicksort1(vector<int>&nums, int left, int right){
		//right作key left先走
		int key = nums[right];
		int keyindex = right;
		while (left < right){
			//<=和>=不加=会死循环 5-最左 5 5-最右 三个数永远动不了
			//left找大-找到出while
			while (left < right&&nums[left] <= key){
				left++;
			}
			//right找小-找到出while
			while (left < right&&nums[right] >= key){
				right--;
			}
			//交换
			swap(nums[left], nums[right]);
		}
		swap(nums[left], nums[keyindex]);
		if (left >= right){
			return;//这个区间没有值了 不用排了 return 
		}
		int pos = left;
		quicksort1(nums, left, pos - 1);
		quicksort1(nums, pos + 1, right);
	}
	vector<int> sortArray(vector<int>& nums) {
		int left = 0;
		int right = nums.size() - 1;
		quicksort1(nums, left, right);
		return nums;
	}
};





void quicksort2(vector<int>&nums, int left, int right){
	int key = nums[right];
	while (left < right){
		//找大
		while (left < right&&nums[left] <= key){
			left++;
		}
		nums[right] = nums[left];//找到大扔到右边的坑里去 同时right形成新的坑
		while (left < right&&nums[right] >= key){
			right--;
		}
		nums[left] = nums[right];//找到小扔到左边的坑里去 同时left形成新的坑
	}
	nums[left] = key;
	if (left >= right){
		return;//这个区间没有值了 不用排了 return 
	}
	int pos = left;
	quicksort2(nums, left, pos - 1);
	quicksort2(nums, pos + 1, right);
}
vector<int> sortArray(vector<int>& nums) {
	int left = 0;
	int right = nums.size() - 1;
	quicksort2(nums, left, right);
	return nums;
}
};




//前后指针法
void quicksort3(vector<int>&nums, int left, int rihgt){
	int prev = left - 1;
	int cur = left;
	int key = nums[right];
	while (cur < rihgt){
		if (nums[cur] < key&&prev++ != cur){
			swap(nums[prev], nums[cur]);
		}
		cur++;
	}
	prev++;
	swap(nums[prev], nums[right]);
	if (left >= right){
		return;//这个区间没有值了 不用排了 return 
	}
	int pos = prev;
	quicksort3(nums, left, pos - 1);
	quicksort3(nums, pos + 1, right);
}
vector<int> sortArray(vector<int>& nums) {
	int left = 0;
	int right = nums.size() - 1;
	quicksort3(nums, left, right);
	return nums;
}
};






int getmid(vector<int>& nums, int left, int right){
	int mid = (left + right) >> 1;
	//left mid
	if (nums[left] < nums[mid]){
		//left mid right
		if (nums[mid] < nums[right]){
			return mid;
		}
		//left right mid
		else if(nums[left] < nums[right]){
			return right;
		}
		//right left mid
		else{
			return left;
		}
	}
	//mid left
	else{
		//right mid left 
		if (nums[right] < nums[mid]){
			return mid;
		}
		//mid left right
		else if(nums[left] < nums[mid]){
			return left;
		}
		//mid left right
		else{
			return right;
		}
	}
}






class Solution {
public:
	// //左右指针法-hoare法
	// void quicksort1(vector<int>&nums,int left,int right){
	//     //right作key left先走
	//     int key=nums[right];
	//     int keyindex=right;
	//     while(left<right){
	//         //<=和>=不加=会死循环 5-最左 5 5-最右 三个数永远动不了
	//         //left找大-找到出while
	//         while(left<right&&nums[left]<=key){
	//             left++;
	//         }
	//         //right找小-找到出while
	//         while(left<right&&nums[right]>=key){
	//             right--;
	//         }
	//         //交换
	//         swap(nums[left],nums[right]);
	//     }
	//     swap(nums[left],nums[keyindex]);
	//     if(left>=right){
	//         return;//这个区间没有值了 不用排了 return 
	//     }
	//     int pos=left;
	//     quicksort1(nums,left,pos-1);
	//     quicksort1(nums,pos+1,right);
	// } 
	//挖坑法
	void quicksort2(vector<int>&nums, int left, int right){
		int mid = getmid(nums, left, right);
		swap(nums[right], nums[mid]);
		int key = nums[right];
		while (left < right){
			//找大
			while (left < right&&nums[left] <= key){
				left++;
			}
			nums[right] = nums[left];//找到大扔到右边的坑里去 同时right形成新的坑
			while (left < right&&nums[right] >= key){
				right--;
			}
			nums[left] = nums[right];//找到小扔到左边的坑里去 同时left形成新的坑
		}
		nums[left] = key;
		if (left >= right){
			return;//这个区间没有值了 不用排了 return 
		}
		int pos = left;
		quicksort2(nums, left, pos - 1);
		quicksort2(nums, pos + 1, right);
	}
	//前后指针法
	// void quicksort3(vector<int>&nums,int left,int rihgt){
	//     int prev=left-1;
	//     int cur=left;
	//     int key=nums[right];
	//     while(cur<rihgt){
	//         if(nums[cur]<key&&prev++!=cur){
	//             swap(nums[prev],nums[cur]);
	//         }
	//         cur++;
	//     }
	//     prev++;
	//     swap(nums[prev],nums[right]);
	//     if(left>=right){
	//         return;//这个区间没有值了 不用排了 return 
	//     }
	//     int pos=prev;
	//     quicksort3(nums,left,pos-1);
	//     quicksort3(nums,pos+1,right);
	// }
	int getmid(vector<int>& nums, int left, int right){
		int mid = (left + right) >> 1;
		//left mid
		if (nums[left] < nums[mid]){
			//left mid right
			if (nums[mid] < nums[right]){
				return mid;
			}
			//left right mid
			else if(nums[left] < nums[right]){
				return right;
			}
			//right left mid
			else{
				return left;
			}
		}
		//mid left
		else{
			//right mid left 
			if (nums[right] < nums[mid]){
				return mid;
			}
			//mid left right
			else if(nums[left] < nums[mid]){
				return left;
			}
			//mid left right
			else{
				return right;
			}
		}
	}
	vector<int> sortArray(vector<int>& nums) {
		int left = 0;
		int right = nums.size() - 1;
		quicksort2(nums, left, right);
		return nums;
	}
};






class Solution {
public:
	void quicksortstack(vector<int>& nums, int left, int right){
		stack<int>st;
		st.push(left);
		st.push(right);
		while (!st.empty()){
			int right = st.top();
			st.pop();
			int left = st.top();
			st.pop();
			int keyindex = partsort(nums, left, right)
			if (left < keyindex - 1)
		}{
			st.push(left);
			st.push(keyindex - 1);
		}
		if (keyindex + 1 < right){
			st.push(keyindex + 1);
			st.push(right);
		}
	}
}
vector<int> sortArray(vector<int>& nums) {
	int left = 0;
	int right = nums.size() - 1;
	quicksortstack(nums, left, right);
	return nums;
}
};




class Solution{
public:
	vector<int> sortArray(vector<int>& nums) {
		int n = nums.size();
		srand((unsigned)time(nullptr));
		quickSort(nums, 0, n - 1);
		return nums;
	}
	void quickSort(vector<int>& nums, int start, int end)
	{
		if (start < end)
		{
			int mid = divide(nums, start, end);
			quickSort(nums, start, mid - 1);
			quickSort(nums, mid + 1, end);
		}
	}
	int divide(vector<int>& nums, int start, int end)
	{
		int i = rand() % (end - start + 1) + start;
		swap(nums[start], nums[i]);
		int cur = nums[start];
		while (start < end)
		{
			while (start < end && nums[end] >= cur)--end;
			nums[start] = nums[end];
			while (start < end && nums[start] <= cur)++start;
			nums[end] = nums[start];
		}
		nums[start] = cur;
		return start;
	}
};