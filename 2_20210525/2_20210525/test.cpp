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
				//�Ȱ��ظ�����[n2,n3)����
				while (n3 != nullptr&&n3->val == n2->val){
					n3 = n3->next;
				}
				//ɾ���ظ�����
				while (n2 != n3){
					ListNode*next = n2->next;
					delete n2;
					n2 = next;
				}
				//n1���ӹ���
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
		// 1.����ԭ�����ÿ���ڵ����ӵ�ԭ�ڵ�ĺ���
		Node*cur = head;
		while (cur != nullptr){
			Node*copy = new Node(cur->val);
			Node*next = cur->next;
			cur->next = copy;
			copy->next = next;
			cur = next;
		}
		// 2.�������ڵ��randomָ��-�����ڵ��randomָ��ָ�򱻿����ڵ����ָ�����һ��λ��
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
		// 3.������� �ѿ��������ԭ�����в�����-β��
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
		// 1.����ԭ�����ÿ���ڵ����ӵ�ԭ�ڵ�ĺ���
		Node*cur = head;
		while (cur != nullptr){
			Node*copy = new Node(cur->val);
			Node*next = cur->next;
			cur->next = copy;
			copy->next = next;
			cur = next;
		}
		// 2.�������ڵ��randomָ��-�����ڵ��randomָ��ָ�򱻿����ڵ����ָ�����һ��λ��
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
		// 3.������� �ѿ��������ԭ�����в�����-β��
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