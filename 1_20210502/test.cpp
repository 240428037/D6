////#define _CRT_SECURE_NO_WARNINGS 1
////
////
////int main()
////{
////	int a = 1;
////	if (1 == *(char*)&a)
////	{
////		printf("С��\n");
////	}
////	else
////	{
////		printf("���\n");
////	}
////	return 0;
////}
////
////
////int check_sys()
////{
////
////	int a = 1;
////
////	//����3
////	return *(char*)&a;
////
////	////����1
////	//char*p = (char*)&a;
////	//if (*p == 1)
////	//      return 1;
////	//else
////	//      return 0;
////
////	////����2
////	//char*p = (char*)&a;
////	//return *p;
////}
////int main()
////{
////	int ret = check_sys();
////	if (1 == ret)
////	{
////		printf("С��\n");
////	}
////	else
////	{
////		printf("���\n");
////	}
////	return 0;
////}
////
////
////
////int check_sys()
////{
////	union Un
////	{
////		char c;
////		int i;
////	}u;
////	u.i = 1;
////	return u.c;
////}
////int main()
////{
////	int a = 1;
////	int ret = check_sys();
////	if (1 == ret)
////	{
////		printf("С��\n");
////	}
////	else
////	{
////		printf("���\n");
////	}
////	return 0;
////}
//
//
//
//#include <iostream>
//using namespace std;
//int check1()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int check2()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int ret = check2();
//	if (ret == 1)
//		cout << "С��" << endl;
//	else
//		cout << "���" << endl;
//}
//
//
////int check2()
////{
////	union Un
////	{
////		char c;
////		int i;
////	}u;
////	u.i = 1;
////	return u.c;
////}
////int main()
////{
////	int ret = check2();
////	if (ret == 1)
////		cout << "С��" << endl;
////	else
////		cout << "���" << endl;
////}



int check1()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	int ret = check1();
	if (ret == 1)
		cout << "С��" << endl;
	else
		cout << "���" << endl;
}



int check2()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	int ret = check2();
	if (ret == 1)
		cout << "С��" << endl;
	else
		cout << "���" << endl;
}