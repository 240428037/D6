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
		//1.拷贝原链表的每个节点链接到原节点的后面
		//cur copy next1
		Node*cur = head;
		while (cur != nullptr){
			Node*copy = new Node(cur->val);
			Node*next1 = cur->next;
			cur->next = copy;
			copy->next = next1;
			cur = next1;//迭代
		}
		//2.处理拷贝节点的random
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
			cur = copy->next;//迭代
		}
		//3.拆解
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
			cur = next1;//迭代
		}
		return copyhead;
	}
};