#include<iostream>
#include<vector>
using namespace std;
int main(){
	int w, h;
	cin >> w >> h;
	int count = 0;
	vector<vector<int>>vv;
	//�ȳ�ʼ����ά������w��
	vv.resize(w);
	//�ٳ�ʼ����ά������h��
	//ÿ�����ֳ�ʼֵ��Ϊ1
	for (auto&e : vv){
		e.resize(h, 1);
	}
	//����forѭ��������ά����
	for (int i = 0; i < w; i++){
		for (int j = 0; j < h; j++){
			if (vv[i][j] == 1){
				count++;
				//��ֹi+2��j+2����Խ��
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