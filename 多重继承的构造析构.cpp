//#include <iostream>
//using namespace std;
//class grand
//{
//private:
//	int a;
//public:
//	grand(int n) :a(n)
//	{
//		cout << "����grand,a=" << a << endl;
//	}
//	~grand()
//	{
//		cout << "����grand" << endl;
//	}
//};
//class father :public grand
//{
//private:
//	int b;
//public:
//	father(int n1, int n2) :grand(n2), b(n1)
//	{
//		cout << "���츸��,b=" << b << endl;
//	}
//	~father()
//	{
//		cout << "��������" << endl;
//	}
//};
//class mother
//{
//private:
//	int c;
//public:
//	mother(int n) :c(n)
//	{
//		cout << "����ĸ��,c=" << c << endl;
//	}
//	~mother()
//	{
//		cout << "����ĸ��" << endl;
//	}
//};
//class son :public father, public mother
//{
//private:
//	int d;
//public:
//	son(int n1, int n2, int n3, int n4) :mother(n2), father(n3, n4), d(n1)
//	{
//		cout << "�������,d=" << d << endl;
//	}
//	~son()
//	{
//		cout << "��������" << endl;
//	}
//};
//int main()
//{
//	son s(1, 2, 3, 4);
//	return 0;
//}