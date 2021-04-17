#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//class Date
//{
//public:
//	void SetDate(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void PrintDate()
//	{
//		cout << _year <<"-"<<_month<<"-"<<_day<< endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	d1.SetDate(2020, 10, 11);
//	d1.PrintDate();
//
//	//int c(20);
//	//cout << c << endl;
//
//	Date d4(2020, 10, 13);
//	d4.PrintDate();
//
//	return 0;
//}


class Date
{
public:
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void SetDate(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void PrintDate()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d4(2020, 10, 13);
	d4.PrintDate();

	return 0;
}