#define _CRT_SECURE_NO_WARNINGS 1



//#include<stdio.h>

////�����ռ䶨���ʽ
//namespace N
//{
//	//����
//	//����
//}
//
////���ֶ��巽ʽ
////1.�����ʽ
//namespace N1
//{
//	int a = 10;
//	int b = 20;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//}
////2.�����ռ����Ƕ��
//namespace N2
//{
//	int a = 10;
//	int b = 20;
//	int Sub(int left, int right)
//	{
//		return left - right;
//	}
//	namespace N3
//	{
//		int c = 10;
//		int d = 20;
//		int Mul(int left, int right)
//		{
//			return left*right;
//		}
//	}
//}
//
////3.��ͬһ�������У����Զ�����������ͬ�������ռ�
////�����ͻ
////�������Ὣ�����ͬ���Ƶ������ռ�ϲ���һ��
//namespace N1
//{
//	int Div(int left, int right)
//	{
//		return left / right;
//	}
//}

////�����ռ��ʹ�ã�
////1.�������ռ����Ƽ��������޶���
//namespace N
//{
//	int a = 10;
//	int b = 20;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//}
//int a = 20;
//int main()
//{
//	int a = 30;
//	//�ͽ�ԭ��
//	printf("%d\n",a);//30
//
//	//�������ȫ���������е�a
//	//���������������
//	//����a��ȷ˵��Ҫ����ȫ���������е�a
//	printf("%d\n", ::a);//20
//	//���������ռ��е�a
//	printf("%d\n", N::a);//10
//	return 0;
//}

////2.ʹ��using�������ռ��г�Ա����
//namespace N
//{
//	int a = 10;
//	int b = 20;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//}
////�ó�������N�����ռ���ĳЩ��Ա���ʷǳ�Ƶ��
////����������֮���൱�ڽ�N�����ռ��е�b���ɵ�ǰ�ļ���һ��ȫ�ֱ�����ʹ��
////�ŵ㣺д�������
////ȱ�㣺������ļ�������ͬ���Ƶı������ߺ������ͻ������ͻ
////���������ͻ��ô�죿
////ʹ�÷�ʽ1
//using N::b;
////������ļ���Ҳ��һ��b����Ȼ�������ͻ��ֻ�ܰ��շ�ʽ1������ʹ��
//int b = 10;
//int main()
//{
//	printf("%d\n", b);//20
//	return 0;
//}

////3.ʹ��using namespace�����ռ���������
////����3������N�����ռ�������Ա�ڵ�ǰ�ļ���ʹ�÷ǳ�Ƶ��
////����ǰN�����ռ��е����г�Ա���ɸ��ļ���ȫ�ֱ���
////�ŵ㣺ʹ�ü�
////ȱ�㣺������ͻ�ĸ��ʿ��ܻ�ǳ���-ʹ�÷�ʽ1
//namespace N
//{
//	int a = 10;
//	int b = 20;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//}
//using namespace N;
//int main()
//{
//	printf("%d\n", a);//10
//	printf("%d\n", b);//20
//	return 0;
//}

//C++�е���������
//C++����C���� -C���������������ʽ��C++���Ծɿ���ʹ��
//scanf/getchar/gets
//printf/putchar/puts

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a, b, c;
//	cin >> a;
//	cin >> b >> c;
//	cout << a << "" << b << "" << c<<endl;
//	cout << 10 << "\n";
//	cout << 12.34 << "\n";
//	cout << "hello" << 123<<"world!"<<endl;
//	return 0;
//}

//void TestFunc()
//{
//
//}
//int main()
//{
//	TestFunc();
//	TestFunc(10);
//	return 0;
//}
//#if 0
//#endif



#include <iostream>
using namespace std;

//void TestFun(int a = 10, int b = 20)
//{
//	cout << a << " "<<b << endl;
//}
//int main()
//{
//	TestFun();//10 20
//}

void TestFun(int a = 10, int b = 20, int c = 30)
{
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
}
void TestFun1(int a, int b = 20, int c = 30)
{
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
}
int main()
{
	TestFun();//10 20 30
	TestFun1(20);//20 20 30
}