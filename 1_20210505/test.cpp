template<class T>
void Swap(T&left, T&right)
{
	T tmp = left;
	left = right;
	right = tmp;
}
template<class T>
T Add(const T&left, const T&right)
{
	return left + right;
}



template<class T>
T Add(const T&left, const T&right)
{
	return left + right;
}
int main()
{
	int a1 = 10, a2 = 20;
	double d1 = 10.0, d2 = 20.0;
	//隐式实例化
	Add(a1, a2);
	Add(d1, d2);
	//Add(a1, d1);//-1.强转；2.使用显示实例化
	Add(a1, (int)d1);
	//显示实例化
	Add<int>(a1, d1);//类型不匹配-编译器会尝试进行隐式类型转换-无法转换则报错
}


int Add(int left, int right)
{
	return left + right;
}
template<class T>
T Add(T left,T right)
{
	return left + right;
}

int main()
{
	Add(1, 2);//与非模板函数匹配-不需要模板函数实例化
	Add<int>(1, 2);
}


int Add(int left, int right)
{
	return left + right;
}
template<class T1,class T2>
T1 Add(T1 left,T2 right)
{
	return left + right;
}
int main()
{
	Add(1, 2);//优先与非模板函数匹配-不需要函数模板实例化
	Add(1, 2.0);//模板实例化(隐式实例化)
}
