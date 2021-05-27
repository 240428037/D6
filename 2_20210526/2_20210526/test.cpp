class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		if (head == nullptr || head->next == nullptr){
			return head;
		}
		ListNode*n1, *n2, *n3;
		n1 = nullptr;
		n2 = head;
		n3 = head->next;
		while (n3 != nullptr){
			if (n2->val != n3->val){
				n1 = n2;
				n2 = n3;
				n3 = n3->next;
			}
			else{
				//先把重复区间[n2,n3)找完
				while (n3 != nullptr&&n3->val == n2->val){
					n3 = n3->next;
				}
				//删除重复区间
				while (n2 != n3){
					ListNode*next = n2->next;
					delete n2;
					n2 = next;
				}
				//n1链接过来
				if (n1 != nullptr){
					n1->next = n3;
				}
				else{
					head = n2;
				}
				if (n3 != nullptr){
					n3 = n3->next;
				}
			}
		}
		return head;
	}
};




class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		ListNode*n1, *n2, *n3;
		n1 = nullptr;
		n2 = head;
		n3 = head->next;
		while (n3 != nullptr){
			if (n2->val == n3->val){
				while (n3 != nullptr&&n3->val == n2->val){
					n3 = n3->next;
				}
				if (n2 != n3){
					ListNode*next = n2->next;
					delete n2;
					n2 = next;
				}
				if (n1 != nullptr){
					n1->next = n3;
				}
				else{
					head = n2;
				}
				if (n3 != nullptr){
					n3 = n3->next;
				}
			}
			else{
				n1 = n2;
				n2 = n3;
				n3 = n3->next;
			}
		}
		return head;
	}
};




class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		if (head == nullptr){
			return nullptr;
		}
		ListNode*n1, *n2, *n3;
		n1 = nullptr;
		n2 = head;
		n3 = head->next;
		while (n3 != nullptr){
			if (n2->val == n3->val){
				while (n3 != nullptr&&n3->val == n2->val){
					n3 = n3->next;
				}
				while (n2 != n3){
					ListNode*next = n2->next;
					delete n2;
					n2 = next;
				}
				if (n1 != nullptr){
					n1->next = n2;
				}
				else{
					head = n2;
				}
				if (n3 != nullptr){
					n3 = n3->next;
				}
			}
			else{
				n1 = n2;
				n2 = n3;
				n3 = n3->next;
			}
		}
		return head;
	}
};