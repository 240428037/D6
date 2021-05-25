class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		if (head == nullptr || head->next == nullptr){
			return head;
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
					delete n2;
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
		return head;
	}
};


class Solution {
public:
	Node* copyRandomList(Node* head) {
		if (head == nullptr){
			return nullptr;
		}
		// 1.拷贝原链表的每个节点链接到原节点的后面
		Node*cur = head;
		while (cur != nullptr){
			Node*copy = new Node(cur->val);
			Node*next = cur->next;
			cur->next = copy;
			copy->next = next;
			cur = next;
		}
		// 2.处理拷贝节点的random指针-拷贝节点的random指针指向被拷贝节点随机指针的下一个位置
		cur = head;
		while (cur != nullptr){
			Node*copy = cur->next;
			if (cur->random == nullptr){
				copy->random = nullptr;
			}
			else{
				copy->random = cur->random->next;
			}
			cur = copy->next;
		}
		// 3.拆解链表 把拷贝链表从原链表中拆解出来-尾插
		cur = head;
		Node*copyhead = head->next;
		while (cur != nullptr){
			Node*copy = cur->next;
			Node*next = copy->next;
			cur->next = next;
			if (next){
				copy->next = next->next;
			}
			else{
				copy->next = nullptr;
			}
			cur = next;
		}
		return copyhead;
	}
};



class Solution {
public:
	Node* copyRandomList(Node* head) {
		if (head == nullptr){
			return nullptr;
		}
		// 1.拷贝原链表的每个节点链接到原节点的后面
		Node*cur = head;
		while (cur != nullptr){
			Node*copy = new Node(cur->val);
			Node*next = cur->next;
			cur->next = copy;
			copy->next = next;
			cur = next;
		}
		// 2.处理拷贝节点的random指针-拷贝节点的random指针指向被拷贝节点随机指针的下一个位置
		cur = head;
		while (cur != nullptr){
			Node*copy = cur->next;
			if (cur->random == nullptr){
				copy->random = nullptr;
			}
			else{
				copy->random = cur->random->next;
			}
			cur = copy->next;
		}
		// 3.拆解链表 把拷贝链表从原链表中拆解出来-尾插
		cur = head;
		//Node*copyhead=head->next;
		Node*copyhead, *copytail;
		copyhead = copytail = new Node(0);
		while (cur != nullptr){
			Node*copy = cur->next;
			Node*next = copy->next;
			cur->next = next;
			// if(next){
			//     copy->next=next->next;
			// }
			// else{
			//     copy->next=nullptr;
			// }
			copytail->next = copy;
			copytail = copy;
			cur = next;
		}
		Node*copylist = copyhead->next;
		delete copyhead;
		return copylist;
	}
};