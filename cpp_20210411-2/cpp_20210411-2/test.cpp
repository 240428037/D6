#include<iostream>
using namespace std;



//int Add(int left, int right)
//{
//	return left + right;
//}
//double Add(double left, double right)
//{
//	return left + right;
//}
//long Add(long left, long right)
//{
//	return left + right;
//}
//////ֻ�Ƿ������Ͳ�ͬ�����ܹ�������
////short Add(int left, int right)
////{
////	return left + right;
////}
//
//
//////�����б�ͬ�����֣�
//////1.����������ͬ-1.2
//////2.�������Ͳ�ͬ-2.3
//////3.����˳��ͬ-4.5
////void TestFunc()
////{}
////void TestFunc(int a)
////{}
////void TestFunc(char a)
////{}
////void TestFunc(int a, char b)
////{}
////void TestFunc(char a, int b)
////{}
//
//
//
////�������صĵ���ԭ��
////�������ڱ���׶Σ���Ժ���ʵ�����ͽ������ݣ��������ݵ�ʵ�ʽ��������ƥ��ĺ������е���
////�����������ȫƥ��ĺ�������ֱ�ӽ��е���
////���û��������ȫƥ��ĺ�������������ʽ����ת���������ʽ����ת�����ɶ�Ӧ�ĺ�������е��ã����û�оͱ���
//int main()
//{
//	//�����ӵ���λ������-ֻ������һ��Add
//	Add(10, 20);//int
//	Add(10.0, 20.0);//double
//	Add(10L, 20L);//long
//	Add('1', '2');//char ->Add(char,char)->Add(int,int) -��ʽ����ת��
//	//Add("hello", "world");//char*  //ERROR
//	
//	
//	//����׶Σ����β����ͽ������ݣ�int double
//	//Add(int,double)->�ú���û���ҵ�
//	//����:int��double֮����Խ�����ʽ����ת�� int->double double->int
//	//Add(int,int)||Add(double,double)ת��֮������������������
//	//��������֪��������һ������ -����
//	//Add(1, 2.2);
//	Add(1, (int)2.2);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int&ra;//�����ʱ������ʼ��
//	int&ra = a;
//	int&rra = a;//һ�����������ж������
//	//int&rra = b;//����һ������һ��ʵ�壬�ٲ�����������ʵ��
//	
//	ra = b;//��������ra��Ϊb�ı�����������b��ra��ֵ
//
//	&ra = b;//ERROR &ra-��raȡ��ַint* =int
//	
//	return 0;
//}


int main()
{
	//a��һ��������a���ܱ��޸�
	const int a = 10;
	//a = 100;//ERROR
	//���ra��������a����ô�Ϳ���ͨ��ra���޸�a;
	//int&ra = a;//ERROR
	const int&ra = a;//��

	//int&b = 10;//ERROR -10��һ��������ͨ���޸�b�����޸�10
	const int&b = 10;//�� 




	double d = 12.34;
	//int&rd = d;//ERROR -���Ͳ�ͬ
	const int&rd = d;//��

	d = 34.56;
	cout << rd << endl;//12

	return 0;
}