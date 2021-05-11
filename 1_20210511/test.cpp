class LCA {
public:
	int getLCA(int a, int b) {
		while (a != b){
			if (a > b){
				a /= 2;
			}
			else{
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
		int count = 0, maxcount = 0;
		while (num){
			if (num & 1){
				count++;
				maxcount = max(count, maxcount);
			}
			else{
				count = 0;
			}
			num >>= 1;
		}
		cout << maxcount << endl;
	}
}


#include<iostream>
using namespace std;
int main(){
	int num;
	while (cin >> num){
		int count = 0, maxcount = 0;
		for (int i = 0; i < 32; i++){
			if (num&(1 << i)){
				count++;
				maxcount = max(count, maxcount);
			}
			else{
				count = 0;
			}
		}
		cout << maxcount << endl;
	}
}