class Bonus {
public:
	int getMost(vector<vector<int> > board) {
		int row = board.size();
		int col = board[0].size();
		vector<vector<int>>vv(row, vector<int>(col, 0));
		vv[0][0] = board[0][0];
		for (int i = 0; i < row; i++){
			for (int j = 0; j < col; j++){
				if (i == 0 && j == 0)
					continue;
				else if (i == 0){
					vv[i][j] = vv[i][j - 1] + board[i][j];
				}
				else if (j == 0){
					vv[i][j] == vv[i - 1][j] + board[i][j];
				}
				else{
					vv[i][j] = max(vv[i][j - 1], vv[i - 1][j]) + board[i][j];
				}
			}
		}
		return vv[row - 1][col - 1];
	}
};
class Bonus {
public:
	int getMost(vector<vector<int> > board) {
		int row = board.size();
		int col = board[0].size();
		vector<vector<int>> vv(row, vector<int>(col, 0));
		vv[0][0] = board[0][0];
		for (int i = 0; i < row; i++){
			for (int j = 0; j < col; j++){
				if (i == 0 && j == 0){
					continue;
				}
				else if (i == 0){
					vv[i][j] = vv[i][j - 1] + board[i][j];
				}
				else if (j == 0){
					vv[i][j] = vv[i - 1][j] + board[i][j];
				}
				else{
					vv[i][j] = max(vv[i - 1][j], vv[i][j - 1]) + board[i][j];
				}
			}
		}
		return vv[row - 1][col - 1];
	}
};



#include<iostream>
#include<vector>
using namespace std;
int row, col;
vector<vector<int>>vv;
vector<vector<int>>tmp;//临时路径
vector<vector<int>>ret;//最佳路径

void track(int i, int j){
	vv[i][j] = 1;//标记该点已经走过
	tmp.push_back({ i, j });
	//判断是否到达出口
	if (i == row - 1 && j == col - 1){
		//寻找最佳路径
		if (ret.empty() || ret.size() < tmp.size()){
			ret = tmp;
		}
	}
	//上
	if (i - 1 >= 0 && vv[i - 1][j] == 0){
		track(i - 1, j);
	}
	//下
	if (j + 1 < row&&vv[i][j + 1] == 0){
		track(i, j + 1);
	}//左
	if (j - 1 >= 0 && vv[i][j - 1] == 0){
		track(i, j - 1);
	}//右
	if (i + 1 <= col&&vv[i + 1][j] == 0){
		track(i + 1, j);
	}
	//回溯-恢复路径
	vv[i][j] = 0;
	tmp.pop_back();
}

int main(){
	while (cin >> row >> col){
		vv = vector<vector<int>>(row, vector<int>(col, 0));
		tmp.clear();
		ret.clear();
		for (int i = 0; i < row; i++){
			for (int j = 0; j < col; j++){
				cin >> vv[i][j];
			}
		}
		track(0, 0);
		for (int i = 0; i < ret.size(); i++){
			cout << "(" << ret[i][0] << "," << ret[i][1] << ")" << endl;
		}
	}
	return 0;
}


class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		if (head == nullptr){
			return nullptr;
		}
		ListNode*cur = head;
		while (cur->next != nullptr){
			if (cur->val == cur->next->val){
				cur->next = cur->next->next;
			}
			else{
				cur = cur->next;
			}
		}
		return head;
	}
};