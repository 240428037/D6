#include <iostream>
using namespace std;



//struct Student
//{
//	//�ṹ���еı���
//	char _name[20];
//	char _gender[3];
//	int _age;
//
//	//�ṹ���еĺ���
//	void InitStudent(char name[], char gender[], int age)
//	{
//		strcpy(_name, name);
//		strcpy(_gender, gender);
//		_age = age;
//	}
//	void PrintStudent()
//	{
//		cout << _name << "-" << _gender << "-" << _age << endl;
//	}
//};
//int main()
//{
//	//��C������
//	struct Student s1;
//	s1._age = 10;
//	//��C++��
//	Student s2;
//	s2.InitStudent("peter", "nan", 18);
//	s2.PrintStudent();
//	return 0;
//}


//class Student//classΪ������Ĺؼ���
//{
//	//��Ա���� -�������
//	char _name[20];
//	char _gender[3];
//	int _age;
//
//	//��Ա���� -��ķ���
//	void InitStudent(char name[], char gender[], int age)
//	{
//		strcpy(_name, name);
//		strcpy(_gender, gender);
//		_age = age;
//	}
//	void PrintStudent()
//	{
//		cout << _name << "-" << _gender << "-" << _age << endl;
//	}
//};
//int main()
//{
//	return 0;
//}


//class 
//{
//public:
//protected:
//private:
//};



//class Student//classΪ������Ĺؼ���
//{
//	//��Ա���� -�������
//	char _name[20];
//	char _gender[3];
//	int _age;
//
//	//��Ա���� -��ķ���
//	void InitStudent(char name[], char gender[], int age)
//	{
//		strcpy(_name, name);
//		strcpy(_gender, gender);
//		_age = age;
//	}
//	void PrintStudent()
//	{
//		cout << _name << "-" << _gender << "-" << _age << endl;
//	}
//};
//int main()
//{
//	Student s;
//
//	return 0;
//}

//class A
//{
//public:
//	void SetA(int a)
//	{
//		_a= a;
//	}
//private:
//	int _a;
//};
//
//class B
//{
//public:
//	void TestB()
//	{}
//};
//
//class C
//{};
//
//int main()
//{
//	cout << sizeof(A) << endl;//4
//	cout << sizeof(B) << endl;//1
//	cout << sizeof(C) << endl;//1
//
//	return 0;
//}

//class C
//{};
//
//int main()
//{
//	C c1, c2, c3;
//	cout << &c1 << endl;//007BFA1B
//	cout << &c2 << endl;//007BFA0F
//	cout << &c3 << endl;//007BFA03
//	return 0;
//}


struct AA
{
	int a;
	char b;
	double c;
	char d;

};

int main()
{
	cout << offsetof(AA, c) << endl;
	return 0;
}