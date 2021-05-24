class Solution {
public:
	int StrToInt(string str) {
		int flag = 1;
		if (str[0] == '-'){
			flag = -1;
			str[0] = '0';
		}
		if (str[0] == '+'){
			flag = 1;
			str[0] = '0';
		}
		int sum = 0;
		for (int i = 0; i < str.size(); i++){
			if (str[i]<'0' || str[i]>'9'){
				sum = 0;
				break;
			}
			sum = sum * 10 + (str[i] - '0');
		}
		return flag*sum;
	}
};




class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		if (head == nullptr){
			return nullptr;
		}
		ListNode*n1, *n2, *n3;
		n1 = nullptr;
		n2 = head;
		n3 = n2->next;
		while (n2 != nullptr){
			n2->next = n1;
			n1 = n2;
			n2 = n3;
			if (n3 != nullptr){
				n3 = n3->next;
			}
		}
		return n1;
	}
};



class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		if (head == nullptr){
			return nullptr;
		}
		ListNode*n1, *n2, *n3;
		n1 = nullptr;
		n2 = head;
		n3 = n2->next;
		while (n2 != nullptr){
			n2->next = n1;
			n1 = n2;
			n2 = n3;
			if (n3 != nullptr){
				n3 = n3->next;
			}
		}
		return n1;
	}
};


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr){
            return nullptr;
        }
        ListNode*n1,*n2,*n3;
        n1=nullptr;
        n2=head;
        n3=head->next;
        while(n2!=nullptr){
            n2->next=n1;
            n1=n2;
            n2=n3;
            if(n3!=nullptr){
                n3=n3->next;
            }
        }
        return n1;
    }
};



class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode*cur = head;
		ListNode*newhead = nullptr;
		while (cur != nullptr){
			ListNode*next = cur->next;
			cur->next = newhead;
			newhead = cur;
			cur = next;
		}
		return newhead;
	}
};




class Solution {
public:
	bool isPalindrome(ListNode* head) {
		vector<int>v;
		ListNode*cur = head;
		while (cur != nullptr){
			v.push_back(cur->val);
			cur = cur->next;
		}
		int left = 0, right = v.size() - 1;
		while (left < right){
			if (v[left] != v[right]){
				return false;
			}
			left++;
			right--;
		}
		return true;
	}
};




class Solution {
public:
	bool isPalindrome(ListNode* head) {
		ListNode*slow = head, *fast = head;
		while (fast&&fast->next){
			slow = slow->next;
			fast = fast->next->next;
		}
		ListNode*cur = slow;
		ListNode*newhead = nullptr;
		while (cur != nullptr){
			ListNode*next = cur->next;
			cur->next = newhead;
			newhead = cur;
			cur = next;
		}
		while (newhead != nullptr&&head != nullptr){
			if (newhead->val != head->val){
				return false;
			}
			newhead = newhead->next;
			head = head->next;
		}
		return true;
	}
};
