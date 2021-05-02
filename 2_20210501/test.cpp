////#define _CRT_SECURE_NO_WARNINGS 1
////
////
////int main()
////{
////	int i = 0;
////	int count = 0;
////	for (i = 100; i <= 200; i++)
////	{
////		//判断i是否为素数
////		//素数判断的规则
////		//1.试除法
////		//产生2->i-1
////		int j = 0;
////		for (j = 2; j < i; j++)
////		{
////			if (i%j == 0)
////			{
////				break;
////			}
////		}
////		//走到此处
////		//1.break;
////		//2.循环走完 写第二种情况的if
////		if (j == i)
////		{
////			printf("%d ", i);
////			count++;
////		}
////	}
////	printf("\ncount=%d\n", count);
////	return 0;
////}
////
////
////
////int main()
////{
////	int i = 0;
////	int count = 0;
////	for (i = 100; i <= 200; i++)
////	{
////		//判断i是否为素数
////		//素数判断的规则
////		//1.试除法
////		//产生2->i-1
////		int j = 0;
////		for (j = 2; j < sqrt(i); j++)
////		{
////			if (i%j == 0)
////			{
////				break;
////			}
////		}
////		//走到此处
////		//1.break;
////		//2.循环走完 写第二种情况的if
////		if (j>sqrt(i))
////		{
////			printf("%d ", i);
////			count++;
////		}
////	}
////	printf("\ncount=%d\n", count);
////	return 0;
////}
////
////
////int main()
////{
////	int i = 0;
////	int count = 0;
////	for (i = 101; i <= 200; i += 2)
////	{
////		//判断i是否为素数
////		//素数判断的规则
////		//1.试除法
////		//产生2->i-1
////		int j = 0;
////		for (j = 2; j < sqrt(i); j++)
////		{
////			if (i%j == 0)
////			{
////				break;
////			}
////		}
////		//走到此处
////		//1.break;
////		//2.循环走完 写第二种情况的if
////		if (j>sqrt(i))
////		{
////			printf("%d ", i);
////			count++;
////		}
////	}
////	printf("\ncount=%d\n", count);
////	return 0;
////}
////
////
////int is_prime(int n)
////{
////	int j = 0;
////	for (j = 2; j < n; j++)
////	{
////		if (n%j == 0)
////			return 0;
////	}
////	//只有一种情况 当j=n的时候才会来到这里
////	//所以不用加if(j==n)的判断条件
////	return 1;
////}
////int main()
////{
////	int i = 0;
////	for (i = 100; i <= 200; i++)
////	{
////		//判断i是否为素数
////		if (1 == is_prime(i))
////			printf("%d ", i);
////	}
////	return 0;
////}
////
////
////
////int is_prime(int n)
////{
////	int j = 0;
////	for (j = 2; j <= sqrt(n); j++)
////	{
////		if (n%j == 0)
////			return 0;
////	}
////	//只有一种情况 当j=n的时候才会来到这里
////	//所以不用加if(j==n)的判断条件
////	return 1;
////}
////int main()
////{
////	int i = 0;
////	for (i = 100; i <= 200; i++)
////	{
////		//判断i是否为素数
////		if (1 == is_prime(i))
////			printf("%d ", i);
////	}
////	return 0;
////}
////
////
////int is_prime(int n)
////{
////	int j = 0;
////	for (j = 2; j <= sqrt(n); j++)
////	{
////		if (n%j == 0)
////			return 0;
////	}
////	//只有一种情况 当j=n的时候才会来到这里
////	//所以不用加if(j==n)的判断条件
////	return 1;
////}
////int main()
////{
////	int i = 0;
////	for (i = 101; i <= 200; i += 2)
////	{
////		//判断i是否为素数
////		if (1 == is_prime(i))
////			printf("%d ", i);
////	}
////	return 0;
////}
//
//
//
//#include <stdio.h>
//#include <math.h>
//#include <iostream>
//using namespace std;
//
//
//
//int Is_prime1(int i)
//{
//	for (int j = 2; j < i; j++)
//	{
//		if (i%j == 0)
//			return 0;
//	}
//	return 1;
//
//}
//int Is_prime2(int i)
//{
//	for (int j = 2; j <=sqrt(i); j++)
//	{
//		if (i%j == 0)
//			return 0;
//	}
//	return 1;
//
//}
//int main()
//{
//	for (int i = 101; i <= 200; i += 2)//不用i++，i从奇数开始+=2,因为偶数不可能是素数
//	{
//		if (Is_prime2(i) == 1)
//			cout << i << " ";
//	}
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}
//
//
//
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac1(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//
//int Fac2(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//		return n*Fac2(n - 1);
//}
//
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//int Fac1(int n)//递归
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac1(n - 1);
//}
//int Fac2(int n)//循环
//{
//	int ret = 1;
//	for (int i = 1; i <= n;i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	cout << Fac2(n) << endl;
//}



int Fib1(int n)//递归
{
	if (n <= 2)
		return 1;
	else
		return Fib1(n - 2) + Fib1(n - 1);
}
int Fib2(int n)//循环
{
	int a = 1, b = 1, c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
#include <iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
		cout << Fib2(n) << endl;
	return 0;
}