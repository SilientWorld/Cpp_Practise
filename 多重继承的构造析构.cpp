//#include <iostream>
//using namespace std;
//class grand
//{
//private:
//	int a;
//public:
//	grand(int n) :a(n)
//	{
//		cout << "构造grand,a=" << a << endl;
//	}
//	~grand()
//	{
//		cout << "析构grand" << endl;
//	}
//};
//class father :public grand
//{
//private:
//	int b;
//public:
//	father(int n1, int n2) :grand(n2), b(n1)
//	{
//		cout << "构造父亲,b=" << b << endl;
//	}
//	~father()
//	{
//		cout << "析构父亲" << endl;
//	}
//};
//class mother
//{
//private:
//	int c;
//public:
//	mother(int n) :c(n)
//	{
//		cout << "构造母亲,c=" << c << endl;
//	}
//	~mother()
//	{
//		cout << "析构母亲" << endl;
//	}
//};
//class son :public father, public mother
//{
//private:
//	int d;
//public:
//	son(int n1, int n2, int n3, int n4) :mother(n2), father(n3, n4), d(n1)
//	{
//		cout << "构造儿子,d=" << d << endl;
//	}
//	~son()
//	{
//		cout << "析构儿子" << endl;
//	}
//};
//int main()
//{
//	son s(1, 2, 3, 4);
//	return 0;
//}