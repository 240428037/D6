#include <iostream>
using namespace std;



//int main()
//{
//	int a = 10;
//	int*pa = &a;
//	*pa = 100;
//
//	int &ra = a;
//	ra = 100;
//	return 0;
//}


//int main()
//{
//	const int a = 10;
//	int*pa =(int*) &a;//&a�����ͣ�const int*
//	*pa = 100;
//	cout << a << endl;//10
//	cout << *pa << endl;//100
//
//	return 0;
//}


////cpp������ͨ��
//int main()
//{
//	const int a = 10;
//	int array[a];
//	return 0;
//}



////��C++�У�һ����ڱȽ϶�С�ĺ���������д����������
//inline int Add(int left, int right)
//{
//	return left + right;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c=Add(a, b);
//	cout << c << endl;
//	return 0;
//}






//C++11�е��﷨��
//auto


//int Add(int left, int right)
//{
//	return left + right;
//}
//int main()
//{
//	int a = 10;
//
//	auto b = a;
//	auto c = 'c';
//	auto d = 12.34;
//	auto r = Add(10, 20);
//
//	//��ӡ����
//	cout << typeid(a).name() << endl;//int
//	cout << typeid(b).name() << endl;//int
//	cout << typeid(c).name() << endl;//char
//	cout << typeid(d).name() << endl;//double
//	cout << typeid(r).name() << endl;//int
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	auto pa1 = &a;
//	auto* pa2 = &a;
//	cout << typeid(pa1).name() << endl;//int*
//	cout << typeid(pa2).name() << endl;//int*
//
//	int b = 10;
//	//rb1���¶�����һ�����εı���
//	auto rb1 = b;
//	//rb2��b�ı���
//	auto&rb2 = b;
//
//	cout << typeid(rb1).name() << endl;//int
//	cout << typeid(rb2).name() << endl;//int
//
//	return 0;
//}

//int main()
//{
//	auto a = 1, b = 2;//��
//	auto c = 3, d = 4.0;//��
//	return 0;
//}


//int main()
//{
//	int a1[] = { 1, 2, 3, 4, 5 };
//	for (int i = 0; i < sizeof(a1) / sizeof(a1[0]); i++)
//		a1[i] *= 2;
//	for (int i = 0; i < sizeof(a1) / sizeof(a1[0]); i++)
//		cout << a1[i] << " ";
//	cout << endl;
//
//	//C++11�У�
//	int a2[] = { 1, 2, 3, 4, 5 };
//	for (auto& e : a2)
//		e *= 2;
//	for (auto& e : a2)
//		cout << e << " ";
//	cout << endl;
//	return 0;
//
//}

//void Print(int array[])
//{
//	//�������ʧ��-�������޷�֪��array����ķ�Χ
//	//���鴫�Σ�������������Ԫ�صĵ�ַ
//	for (auto& e : array)
//		cout << e << " ";
//	cout << endl;
//}
//int main()
//{
//	int a[] = { 1, 2, 3 };
//	Print(a);
//	return 0;
//}