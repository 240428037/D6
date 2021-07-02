class LCA {
public:
	int getLCA(int a, int b) {
		while (a != b){
			if (a > b){
				a /= 2;
			}
			if (b > a){
				b /= 2;
			}
		}
		return a;
	}
};



#include<iostream>
using namespace std;
int main(){
	int num;
	while (cin >> num){
		int count = 0;
		int maxcount = 0;
		while (num){
			if (num & 1){
				count++;
				//maxcount���±������if����ڣ��������else������num&1=0������whileѭ����û������
				maxcount = max(count, maxcount);
			}
			else{
				count = 0;
			}
			num = num >> 1;
		}
		cout << maxcount << endl;
	}
	return 0;
}



#include<iostream>
using namespace std;
int main(){
	int num;
	while (cin >> num){
		int count = 0;
		int maxcount = 0;
		//����for(32)ѭ��if�ж�����Ϊnum&(1<<i)
		//��Ҫ��while(num)ѭ��-�������numΪ����-��ѭ��
		//if�ж�����Ϊ(num&1)
		//whileѭ���ĵ�������Ϊnum=num>>1;
		//����maxcount�ĸ���Ҫ����if�ж���
		//��Ȼ���һ��num=0������whileѭ����maxcount�ò�������
		for (int i = 0; i < 32; i++){
			if (num&(1 << i)){
				count++;
			}
			else{
				maxcount = max(count, maxcount);
				count = 0;
			}
		}
		cout << maxcount << endl;
	}
	return 0;
}