class Solution {
public:
	int maxDepth(TreeNode* root) {
		if (root == nullptr){
			return 0;
		}
		int leftdepth = maxDepth(root->left);
		int rightdepth = maxDepth(root->right);
		return leftdepth > rightdepth ? leftdepth + 1 : rightdepth + 1;
	}
};



class Solution {
public:
	int maxdepth(TreeNode* root){
		if (root == nullptr){
			return 0;
		}
		int leftdepth = maxdepth(root->left);
		int rightdepth = maxdepth(root->right);
		return leftdepth > rightdepth ? leftdepth + 1 : rightdepth + 1;
	}
	bool isBalanced(TreeNode* root) {
		if (root == nullptr){
			return true;
		}
		int leftdepth = maxdepth(root->left);
		int rightdepth = maxdepth(root->right);
		return abs(leftdepth - rightdepth) < 2 && isBalanced(root->left) && isBalanced(root->right);
	}
};



class Solution {
public:
	TreeNode* _buildTree(vector<int>&preorder, vector<int>&inorder, int&prei, int inbegin, int inend){
		if (inbegin>inend){
			return nullptr;
		}
		TreeNode*root = new TreeNode(preorder[prei]);
		int rooti = inbegin;
		while (rooti != inend){
			if (preorder[prei] == inorder[rooti]){
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