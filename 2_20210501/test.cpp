////#define _CRT_SECURE_NO_WARNINGS 1
////
////
////int main()
////{
////	int i = 0;
////	int count = 0;
////	for (i = 100; i <= 200; i++)
////	{
////		//�ж�i�Ƿ�Ϊ����
////		//�����жϵĹ���
////		//1.�Գ���
////		//����2->i-1
////		int j = 0;
////		for (j = 2; j < i; j++)
////		{
////			if (i%j == 0)
////			{
////				break;
////			}
////		}
////		//�ߵ��˴�
////		//1.break;
////		//2.ѭ������ д�ڶ��������if
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
////		//�ж�i�Ƿ�Ϊ����
////		//�����жϵĹ���
////		//1.�Գ���
////		//����2->i-1
////		int j = 0;
////		for (j = 2; j < sqrt(i); j++)
////		{
////			if (i%j == 0)
////			{
////				break;
////			}
////		}
////		//�ߵ��˴�
////		//1.break;
////		//2.ѭ������ д�ڶ��������if
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
////		//�ж�i�Ƿ�Ϊ����
////		//�����жϵĹ���
////		//1.�Գ���
////		//����2->i-1
////		int j = 0;
////		for (j = 2; j < sqrt(i); j++)
////		{
////			if (i%j == 0)
////			{
////				break;
////			}
////		}
////		//�ߵ��˴�
////		//1.break;
////		//2.ѭ������ д�ڶ��������if
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
////	//ֻ��һ����� ��j=n��ʱ��Ż���������
////	//���Բ��ü�if(j==n)���ж�����
////	return 1;
////}
////int main()
////{
////	int i = 0;
////	for (i = 100; i <= 200; i++)
////	{
////		//�ж�i�Ƿ�Ϊ����
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
////	//ֻ��һ����� ��j=n��ʱ��Ż���������
////	//���Բ��ü�if(j==n)���ж�����
////	return 1;
////}
////int main()
////{
////	int i = 0;
////	for (i = 100; i <= 200; i++)
////	{
////		//�ж�i�Ƿ�Ϊ����
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
////	//ֻ��һ����� ��j=n��ʱ��Ż���������
////	//���Բ��ü�if(j==n)���ж�����
////	return 1;
////}
////int main()
////{
////	int i = 0;
////	for (i = 101; i <= 200; i += 2)
////	{
////		//�ж�i�Ƿ�Ϊ����
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
//	for (int i = 101; i <= 200; i += 2)//����i++��i��������ʼ+=2,��Ϊż��������������
//	{
//		if (Is_prime2(i) == 1)
//			cout << i << " ";
//	}
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
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
//	//��n�Ľ׳�
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
//	//��n�Ľ׳�
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//int Fac1(int n)//�ݹ�
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac1(n - 1);
//}
//int Fac2(int n)//ѭ��
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



int Fib1(int n)//�ݹ�
{
	if (n <= 2)
		return 1;
	else
		return Fib1(n - 2) + Fib1(n - 1);
}
int Fib2(int n)//ѭ��
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