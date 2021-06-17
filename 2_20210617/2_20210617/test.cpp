class Solution {
public:
	void postorder(TreeNode*root, vector<int>&v){
		if (root == nullptr){
			return;
		}
		postorder(root->left, v);
		postorder(root->right, v);
		v.push_back(root->val);
	}
	vector<int> postorderTraversal(TreeNode* root) {
		vector<int>v;
		postorder(root, v);
		return v;
	}
};



class Solution {
public:
	vector<int> postorderTraversal(TreeNode* root) {
		vector<int>v;
		stack<TreeNode*>st;
		TreeNode*cur = root;
		TreeNode*prev = nullptr;
		while (cur != nullptr || !st.empty()){
			while (cur != nullptr){
				st.push(cur);
				cur = cur->left;
			}
			TreeNode*top = st.top();
			if (top->right == nullptr || prev == top->right){
				v.push_back(top->val);
				st.pop();
				prev = top;
			}
			else{
				cur = top->right;
			}
		}
		return v;
	}
};



class Solution {
public:
	TreeNode*_buildTree(vector<int>&preorder, vector<int>&inorder, int&prei, int inbegin, int inend){
		if (inbegin > inend){
			return nullptr;
		}
		TreeNode*root = new TreeNode(preorder[prei]);
		int rooti = inbegin;
		while (rooti <= inend){
			if (inorder[rooti] == preorder[prei]){
				break;
			}
			else{
				rooti++;
			}
		}
		if (inbegin <= rooti - 1){
			root->left = _buildTree(preorder, inorder, ++prei, inbegin, rooti - 1);
		}
		else{
			root->left = nullptr;
		}
		if (rooti + 1 <= inend){
			root->right = _buildTree(preorder, inorder, ++prei, rooti + 1, inend);
		}
		else{
			root->right = nullptr;
		}
		return root;
	}
	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
		int prei = 0;
		int inbegin = 0, inend = inorder.size() - 1;
		return _buildTree(preorder, inorder, prei, inbegin, inend);
	}
};