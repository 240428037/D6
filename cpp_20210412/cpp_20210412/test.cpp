#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


//int main()
//{
//	double d = 12.34;
//	//int&rd = d;//ERROR -类型不同
//	const int&rd = d;//√
//	double&rdd = d;
//	d = 34.56;
//	cout << rd << endl;//12
//	cout << rdd << endl;//34.56
//
//	return 0;
//}


//void Swap(int*pa, int*pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//void Swap1(int&left, int&right)
//{
//	int tmp = left;
//	left = right;
//	right = tmp;
//}
////如果不想通过形参来改变外部实参的情况下，可以用const类型引用作为形参
//void print(const int&r)
//{
//	cout << r << endl;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	Swap1(a, b);
//	print(a);
//	print(b);
//	return 0;
//}




//int& Add(int left, int right)
//{
//	int ret = left + right;
//	cout << "&ret=" << &ret << endl;//&ret=007EF6C4  -3次
//	return ret;
//}
//int main()
//{
//	int& result = Add(1, 2);//result=3
//	Add(3, 4);//result=7
//	Add(5, 6);//result=11
//	cout << "Add(1, 2)is:" << result << endl;//11
//	cout << "&result=" << &result << endl;//&result=007EF6C4
//	return 0;
//}


int& TestRetRef(int&ra)
{
	ra = 10;
	return ra;

}
int main()
{
	int a = 0;
	int&r = TestRetRef(a);
	return 0;
}