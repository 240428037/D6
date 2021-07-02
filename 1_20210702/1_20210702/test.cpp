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
				//maxcount更新必须放在if语句内，如果放在else语句最后num&1=0不进入while循环就没法更新
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
		//采用for(32)循环if判断条件为num&(1<<i)
		//不要用while(num)循环-否则如果num为负数-死循环
		//if判断条件为(num&1)
		//while循环的迭代条件为num=num>>1;
		//而且maxcount的更新要放在if判断内
		//不然最后一次num=0不进入while循环，maxcount得不到更新
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