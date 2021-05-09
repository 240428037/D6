struct ListNode *detectCycle(struct ListNode *head) {
	struct ListNode*slow = head, *fast = head;
	while (fast&&fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			break;
	}
	if (fast == NULL || fast->next == NULL)
		return NULL;
	struct ListNode*meet = fast;
	while (head != meet)
	{
		head = head->next;
		meet = meet->next;
	}
	return meet;
}



bool hasCycle(struct ListNode *head) {
	struct ListNode*slow = head, *fast = head;
	while (fast&&fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return true;
	}
	return false;
}



struct ListNode* reverseList(struct ListNode* head){
	struct ListNode*newhead = NULL, *cur = head;
	while (cur)
	{
		struct ListNode*next = cur->next;
		cur->next = newhead;
		newhead = cur;
		cur = next;
	}
	return newhead;
}



struct ListNode* reverseList(struct ListNode* head){
	if (head == NULL || head->next == NULL)
		return head;
	struct ListNode*n1 = NULL, *n2 = head, *n3 = head->next;
	while (n2)
	{
		//�淽��
		n2->next = n1;
		//����
		n1 = n2;
		n2 = n3;
		if (n3)
			n3 = n3->next;
	}
	return n1;
}



class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		struct ListNode*curA = headA, *curB = headB;
		int la = 0, lb = 0;
		while (curA)
		{
			la++;
			curA = curA->next;
		}
		while (curB)
		{
			lb++;
			curB = curB->next;
		}
		struct ListNode*longlist = headA, *shortlist = headB;
		if (la < lb)
		{
			longlist = headB;
			shortlist = headA;
		}
		int gap = abs(la - lb);
		while (gap--)
		{
			longlist = longlist->next;
		}
		while (longlist)
		{
			if (shortlist == longlist)
				return longlist;
			shortlist = shortlist->next;
			longlist = longlist->next;
		}
		return longlist;
	}
};



struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
	if (l1 == NULL)
		return l2;
	if (l2 == NULL)
		return l1;
	struct ListNode*head = NULL, *tail = NULL;
	if (l1->val < l2->val)
	{
		head = tail = l1;
		l1 = l1->next;
	}
	else
	{
		head = tail = l2;
		l2 = l2->next;
	}
	while (l1&&l2)
	{
		if (l1->val < l2->val)
		{
			tail->next = l1;
			l1 = l1->next;
			tail = tail->next;
		}
		else
		{
			tail->next = l2;
			l2 = l2->next;
			tail = tail->next;
		}
	}
	while (l1)
	{
		tail->next = l1;
		l1 = l1->next;
		tail = tail->next;
	}
	while (l2)
	{
		tail->next = l2;
		l2 = l2->next;
		tail = tail->next;
	}
	return head;
}





struct ListNode* middleNode(struct ListNode* head){
	if (head == NULL || head->next == NULL)
		return head;
	struct ListNode*slow = head, *fast = head;
	while (fast&&fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}


struct Node* copyRandomList(struct Node* head) {
	if (head == NULL)
		return NULL;
	//1.����ԭ�����ÿһ�����,���ӵ�ԭ������
	//   11      22        33
	//1      2        3
	struct Node*cur = head;//��ʼ��
	while (cur)
	{
		struct Node*copy = (struct Node*)malloc(sizeof(struct Node));
		copy->next = NULL;
		copy->random = NULL;
		copy->val = cur->val;
		struct Node*next = cur->next;//��ʼ��
		copy->next = cur->next;
		cur->next = copy;
		cur = next;//����
	}
	//2.����������random
	cur = head;//��ʼ��
	while (cur)
	{
		struct Node*copy = cur->next;//��ʼ��
		if (cur->random)
			copy->random = cur->random->next;
		else
			copy->random = NULL;
		cur = cur->next->next;//����
	}
	//3.�ѿ�������ԭ�����в�����-3��ָ��
	//     copy
	//cur        next
	cur = head;//��ʼ��
	struct Node*copyhead = head->next;//����copyhead
	while (cur)
	{
		struct Node*copy = cur->next;//��ʼ��
		struct Node*next = copy->next;//��ʼ��
		cur->next = next;//�Ͽ�
		if (next)
			copy->next = next->next;//����������һ�����
		else
			copy->next = NULL;//�ÿ�
		cur = next;//����
	}
	return copyhead;
}