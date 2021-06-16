class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		queue<TreeNode*>q;
		vector<vector<int>>vv;
		if (root){
			q.push(root);
		}
		while (!q.empty()){
			vector<int>v;
			int levelsize = q.size();
			for (int i = 0; i < levelsize; i++){
				TreeNode*front = q.front();
				q.pop();
				v.push_back(front->val);
				if (front->left){
					q.push(front->left);
				}
				if (front->right){
					q.push(front->right);
				}
			}
			vv.push_back(v);
		}
		return vv;
	}
};



class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		queue<TreeNode*>q;
		vector<vector<int>>vv;
		if (root){
			q.push(root);
		}
		while (!q.empty()){
			vector<int>v;
			int levelsize = q.size();
			//�����ڿ�ʼforѭ��֮ǰ��q.size()��ֵ��levelszie
			//��Ϊһ����ʼforѭ��q.size()��ֵ�ͻᷢ���仯
			for (int i = 0; i < levelsize; i++){
				TreeNode*front = q.front();
				q.pop();
				v.push_back(front->val);
				if (front->left){
					q.push(front->left);
				}
				if (front->right){
					q.push(front->right);
				}
			}
			vv.push_back(v);
		}
		return vv;
	}
};