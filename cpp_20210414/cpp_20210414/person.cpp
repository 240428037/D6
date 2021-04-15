#include "person.h"
#include <iostream>
using namespace std;


//如果成员函数放在类外来进行定义
//成员函数名前要加类名::表明该函数是哪个类的成员函数
void Person::InitPerson(char name[], char gender[], int age)
{
	strcpy(_name, name);
	strcpy(_gender, gender);
	_age = age; 
}
void Person::Eat()
{
	cout << "biabia" << endl;
}
void Person::Sleep()
{
	cout << "huhu" << endl;
}
void Person::PrintPersonInfo()
{
	cout << _name << "-" << _gender << "-" << _age << endl;
}