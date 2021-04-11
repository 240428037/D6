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
//////只是返回类型不同，不能构成重载
////short Add(int left, int right)
////{
////	return left + right;
////}
//
//
//////参数列表不同的体现：
//////1.参数个数不同-1.2
//////2.参数类型不同-2.3
//////3.参数顺序不同-4.5
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
////函数重载的调用原理：
////编译器在编译阶段，会对函数实参类型进行推演，根据推演的实际结果找类型匹配的函数进行调用
////如果有类型完全匹配的函数，则直接进行调用
////如果没有类型完全匹配的函数，则会进行隐式类型转换，如果隐式类型转换后由对应的函数则进行调用，如果没有就报错
//int main()
//{
//	//单纯从调用位置来看-只看到了一个Add
//	Add(10, 20);//int
//	Add(10.0, 20.0);//double
//	Add(10L, 20L);//long
//	Add('1', '2');//char ->Add(char,char)->Add(int,int) -隐式类型转换
//	//Add("hello", "world");//char*  //ERROR
//	
//	
//	//编译阶段，对形参类型进行推演：int double
//	//Add(int,double)->该函数没有找到
//	//发现:int和double之间可以进行隐式类型转换 int->double double->int
//	//Add(int,int)||Add(double,double)转换之后发现两个函数都可以
//	//编译器不知道调用哪一个函数 -报错
//	//Add(1, 2.2);
//	Add(1, (int)2.2);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int&ra;//定义的时候必须初始化
//	int&ra = a;
//	int&rra = a;//一个变量可以有多个引用
//	//int&rra = b;//引用一旦引用一个实体，再不能引用其他实体
//	
//	ra = b;//并不是让ra成为b的别名，而是用b给ra赋值
//
//	&ra = b;//ERROR &ra-对ra取地址int* =int
//	
//	return 0;
//}


int main()
{
	//a是一个常量，a不能被修改
	const int a = 10;
	//a = 100;//ERROR
	//如果ra可以引用a，那么就可以通过ra来修改a;
	//int&ra = a;//ERROR
	const int&ra = a;//√

	//int&b = 10;//ERROR -10是一个常量，通过修改b不能修改10
	const int&b = 10;//√ 




	double d = 12.34;
	//int&rd = d;//ERROR -类型不同
	const int&rd = d;//√

	d = 34.56;
	cout << rd << endl;//12

	return 0;
}