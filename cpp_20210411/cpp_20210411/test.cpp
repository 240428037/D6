#define _CRT_SECURE_NO_WARNINGS 1



//#include<stdio.h>

////命名空间定义格式
//namespace N
//{
//	//变量
//	//函数
//}
//
////三种定义方式
////1.最常见方式
//namespace N1
//{
//	int a = 10;
//	int b = 20;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//}
////2.命名空间可以嵌套
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
////3.在同一个工程中，可以定义多个名字相同的命名空间
////不会冲突
////编译器会将多个相同名称的命名空间合并成一个
//namespace N1
//{
//	int Div(int left, int right)
//	{
//		return left / right;
//	}
//}

////命名空间的使用：
////1.加命名空间名称及作用域限定符
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
//	//就近原则
//	printf("%d\n",a);//30
//
//	//如果访问全局作用域中的a
//	//：：作用域运算符
//	//：：a明确说明要访问全局作用域中的a
//	printf("%d\n", ::a);//20
//	//访问命名空间中的a
//	printf("%d\n", N::a);//10
//	return 0;
//}

////2.使用using将命名空间中成员引入
//namespace N
//{
//	int a = 10;
//	int b = 20;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//}
////该场景：对N命名空间中某些成员访问非常频繁
////该条语句加上之后，相当于将N命名空间中的b当成当前文件的一个全局变量来使用
////优点：写代码简单了
////缺点：如果该文件中有相同名称的变量或者函数，就会产生冲突
////如果产生冲突怎么办？
////使用方式1
//using N::b;
////如果该文件中也有一个b，必然会产生冲突，只能按照方式1来进行使用
//int b = 10;
//int main()
//{
//	printf("%d\n", b);//20
//	return 0;
//}

////3.使用using namespace命名空间名称引入
////场景3：假设N命名空间中许多成员在当前文件中使用非常频繁
////将当前N命名空间中的所有成员当成该文件的全局变量
////优点：使用简单
////缺点：产生冲突的概率可能会非常大-使用方式1
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

//C++中的输入和输出
//C++兼容C语言 -C语言中输入输出方式在C++中仍旧可以使用
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