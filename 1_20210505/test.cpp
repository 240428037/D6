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
	//��ʽʵ����
	Add(a1, a2);
	Add(d1, d2);
	//Add(a1, d1);//-1.ǿת��2.ʹ����ʾʵ����
	Add(a1, (int)d1);
	//��ʾʵ����
	Add<int>(a1, d1);//���Ͳ�ƥ��-�������᳢�Խ�����ʽ����ת��-�޷�ת���򱨴�
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
	Add(1, 2);//���ģ�庯��ƥ��-����Ҫģ�庯��ʵ����
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
	Add(1, 2);//�������ģ�庯��ƥ��-����Ҫ����ģ��ʵ����
	Add(1, 2.0);//ģ��ʵ����(��ʽʵ����)
}
