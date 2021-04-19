#include <iostream>
using namespace std;



//int main()
//{
//	cout << "hehe\n";
//	cout << "hehe" << endl;
//	return 0;
//}


//void Func(int a = 10)
//{
//	cout << a << endl;
//}
//int main()
//{
//	Func(20);//20
//	Func();//10
//}


//void Func1(int a = 10, int b = 20, int c = 30)
//{
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//}
//void Func2(int a, int b = 20, int c = 30)
//{
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//}
//int main()
//{
//	Func1(1);//1 20 30
//	Func1(1,2);//1,2,30
//	Func1(1, 2, 3);//1 2 3
//	Func2(1);// 1 20 30
//	Func2(1, 2);//1 2 30
//	Func2(1, 2, 3);// 1 2 3
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int&ra = a;
//	int&b = a;
//	int&c = b;
//	cout << c << endl;//1 a,ra,b,c共用一块空间
//	 
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int&ra = a;
//	int b = 2;
//	ra = b;//把b赋值给ra
//	cout << a << endl;//2
//	return 0;
//}

//int main()
//{
//	const int a = 0;
//	//int&b = a;//b的类型是int,编译不通过：a是只读，b的类型是int-可读可写，所以编译不通过
//	const int&b = a;//√
//
//	int c = 1;
//	int&d = c;
//	const int&e = c;//√ -c是可读可写，e变成别名只读
//	return 0;
//
//
//	int i = 0;
//	double db = i;//隐式类型转换
//	const double &db1 = 9;//√
//
//	double f1 = 12.34;
//	const int&rf1 = f1;
//}


int main()
{
	int x = 1;
	const int c = x;
	cout << c << endl;
	return 0;
}
