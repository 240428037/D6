#include <iostream>
using namespace std;


class Date	
{
public:
	//获取某年某月的天数
	int GetMonthDay(int year, int month)
	{
		int monthdays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		//是二月且是闰年返回29
		if (month == 2 && ((((year % 4 == 0) && (year % 100 != 0))) || (year % 400 == 0)))
		{
			return 29;
		}
		return monthdays[month];
	}
	//全缺省的构造函数
	Date(int year = 0, int month = 1, int day = 1)
	{
		if (year >= 0 && month >= 1 && month <= 12 && day >= 1 && day <= GetMonthDay(year, month))
		{
			_year = year;
			_month = month;
			_day = day;
		}
		else "非法日期" << endl;
		}
	}

	//拷贝构造函数
	//Date d2(d1)
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	////析构函数
	//~Date()
	//{

	//}

	//==运算符重载
	inline bool operator==(const Date&d)
	{
		return _year == d._year&&_month == d._month&&_day == d._day;
	}

	//<运算符重载
	inline bool operator<(const Date&d)
	{
		if (_year < d._year)
			return true;
		else if (_year < d._year&&_month < d._month)
			return true;
		else if (_year < d._year&&_month < d._month&&_day < d._day)
			return true;
		return false;
	}

	//>运算符重载
	bool operator>(const Date&d)
	{
		return !(*this <= d);//复用
	}

	////<=运算符重载
	//bool operator<=(const Date&d)
	//{
	//	if (_year < d._year)
	//		return true;
	//	else if (_year == d._year&&_month < d._month)
	//		return true;
	//	else if (_year == d._year&&_month == d._month&&_day <= d._day)
	//		return true;
	//	return false;
	//}

	//<=运算符重载
	//d1<=d2 -> d1<d2||d1==d2
	//d1.operator<=(&d1,d2);
	bool operator<=(const Date&d)//bool operator<=(Date*this,const Date&d)
	{
		return *this < d || *this == d;//复用上面的来实现
	}

	//>=运算符重载
	bool operator>=(const Date&d)
	{
		return !(*this<d);
	}

	//!=运算符重载
	bool operator>=(const Date&d)
	{
		return !(*this == d);
	}

	//void Print()
	//{
	//	cout <<_year << " " << _month << " " << _day << endl;
	//}

	//d1+10
	//d1+100
	//d1+1000
	Date operator+(int day)
	{
		Date ret(*this);//用d1拷贝构造一个ret
		ret._day += day;
		while (ret._day > GetMonthDay(ret._year, ret._month))
		{
			ret._day -= GetMonthDay(ret._year, ret._month);
			ret._month++;
			if (ret._month==13)
			{
				ret._year++;
				ret._month = 1;
			}
		}
		return ret;
	}

	Date operator+=(int day)
	{
		_day += day;
		while (_day>GetMonthday(_year,_month))
		{
			_day -= Getmonthday(_year, _month);
			month++;
			if (_month == 13)
			{
				++_year;
				_month = 1;
			}
		}
		return *this;
	}


	Date operator-(int day)
	{

	}






	Date operator-=(int day)
	{

	}

private:
	int _year;
	int _month;
	int _day;
};




int main()
{
	Date d1;
	//d1.Print();

	Date d2(2020, 2, 29);
	//d2.Print();

	Date d3(2021.2,29);
	//d2.Print();

	cout << (d1 == d2) << endl;
	cout << (d1 < d2) << endl;
	cout << (d1 > d2) << endl;
	cout << (d1 <= d2) << endl;
	cout << (d1 >= d2) << endl;

	d1 + 10;
	d1 - 10;
	d1 += 10;
	d1 -= 10;

	return 0;
}