class Solution {
public:
	TreeNode* _buildTree(vector<int>&preorder, vector<int>&inorder, int&prei, int inbegin, int inend){
		if (inbegin > inend){
			return nullptr;
		}
		TreeNode*root = new TreeNode(preorder[prei]);
		int rooti = inbegin;
		while (rooti <= inend){
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



class Solution {
public:
	TreeNode*_buildTree(vector<int>&inorder, vector<int>&postorder, int&posti, int inbegin, int inend){
		if (inbegin > inend){
			return nullptr;
		}
		TreeNode*root = new TreeNode(postorder[posti]);
		int rooti = inbegin;
		while (rooti <= inend){
			if (postorder[posti] == inorder[rooti]){
				break;
			}
			else{
				rooti++;
			}
		}
		if (rooti + 1 <= inend){
			root->right = _buildTree(inorder, postorder, --posti, rooti + 1, inend);
		}
		else{
			root->right = nullptr;
		}
		if (inbegin <= rooti - 1){
			root->left = _buildTree(inorder, postorder, --posti, inbegin, rooti - 1);
		}
		else{
			root->left = nullptr;
		}

		return root;
	}
	TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
		int posti = postorder.size() - 1;
		int inbegin = 0, inend = inorder.size() - 1;
		return _buildTree(inorder, postorder, posti, inbegin, inend);
	}
};