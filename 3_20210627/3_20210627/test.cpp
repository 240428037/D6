#include<iostream>
#include<vector>
using namespace std;
int main(){
	int w, h;
	cin >> w >> h;
	int count = 0;
	vector<vector<int>>vv;
	//先初始化二维数组有w行
	vv.resize(w);
	//再初始化二维数组有h列
	//每个数字初始值置为1
	for (auto&e : vv){
		e.resize(h, 1);
	}
	//两层for循环遍历二维数组
	for (int i = 0; i < w; i++){
		for (int j = 0; j < h; j++){
			if (vv[i][j] == 1){
				count++;
				//防止i+2和j+2数组越界
				if (i + 2 < w){
					vv[i + 2][j] = 0;
				}
				if (j + 2 < h){
					vv[i][j + 2] = 0;
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}