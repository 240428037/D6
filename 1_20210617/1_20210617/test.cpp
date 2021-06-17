class Solution {
public:
	void preorder(TreeNode*root, vector<int>&v){
		if (root == nullptr){
			return;
		}
		v.push_back(root->val);
		preorder(root->left, v);
		preorder(root->right, v);
	}
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int>v;
		preorder(root, v);
		return v;
	}
};



class Solution {
public:
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int>v;
		stack<TreeNode*>st;
		TreeNode*cur = root;
		while (cur != nullptr || !st.empty()){
			while (cur != nullptr){
				st.push(cur);
				v.push_back(cur->val);
				cur = cur->left;
			}
			TreeNode*top = st.top();
			st.pop();
			cur = top->right;
		}
		return v;
	}
};



class Solution {
public:
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int>v;
		stack<TreeNode*>st;
		TreeNode*cur = root;
		while (cur != nullptr || !st.empty()){
			//1.������·�ڵ㣬��·�ڵ���ջ
			while (cur != nullptr){
				st.push(cur);
				v.push_back(cur->val);
				cur = cur->left;
			}
			//2.ȡջ�еĽڵ��������������
			TreeNode*top = st.top();
			st.pop();
			cur = top->right;
		}
		return v;
	}
};


class Solution {
public:
	void inorder(TreeNode*root, vector<int>&v){
		if (root == nullptr){
			return;
		}
		inorder(root->left, v);
		v.push_back(root->val);
		inorder(root->right, v);
	}
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int>v;
		inorder(root, v);
		return v;
	}
};


