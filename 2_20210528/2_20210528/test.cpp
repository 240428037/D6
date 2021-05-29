/*
// Definition for a Node.
class Node {
public:
int val;
Node* next;
Node* random;

Node(int _val) {
val = _val;
next = NULL;
random = NULL;
}
};
*/
class Solution {
public:
	Node* copyRandomList(Node* head) {
		if (head == nullptr){
			return nullptr;
		}
		//1.����ԭ�����ÿ���ڵ����ӵ�ԭ�ڵ�ĺ���
		//cur copy next1
		Node*cur = head;
		while (cur != nullptr){
			Node*copy = new Node(cur->val);
			Node*next1 = cur->next;
			cur->next = copy;
			copy->next = next1;
			cur = next1;//����
		}
		//2.�������ڵ��random
		//cur copy
		cur = head;
		while (cur != nullptr){
			Node*copy = cur->next;
			if (cur->random){
				copy->random = cur->random->next;
			}
			else{
				copy->random = nullptr;
			}
			cur = copy->next;//����
		}
		//3.���
		//cur copy next1
		cur = head;
		Node*copyhead = cur->next;
		while (cur != nullptr){
			Node*copy = cur->next;
			Node*next1 = copy->next;
			cur->next = next1;
			if (next1){
				copy->next = next1->next;
			}
			else{
				copy->next = nullptr;
			}
			cur = next1;//����
		}
		return copyhead;
	}
};