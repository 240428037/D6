#include "person.h"
#include <iostream>
using namespace std;


//�����Ա�����������������ж���
//��Ա������ǰҪ������::�����ú������ĸ���ĳ�Ա����
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