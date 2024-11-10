//#include <iostream>
//using namespace std;
//class cemployee
//{
//public:
//	int id;
//	char m_name[128];
//	char depart[128];
//	cemployee()
//	{
//		cout << "调用构造函数" << endl;
//	}
//	~cemployee()
//	{
//		cout << "调用析构函数" << endl;
//	}
//	void outputname()
//	{
//		cout << "调用cemployee类的outputname的成员函数" << endl;
//	}
//};
//class cpoerator :public cemployee
//{
//public:
//	int id;
//	char password[128];
//	void outputname()//子类的函数与父类同名，则子类的函数会将父类同名函数隐藏，不会实现父类函数
//	{
//		cout << "调用coperator类的outputname的成员函数" << endl;
//	}
//};
//
//int main()
//{
//	cemployee* a = new cpoerator();
//	a->outputname();
//	cpoerator p;
//	p.outputname();
//	p.cemployee::outputname();//加一个：：就可以访问父类中的同名函数
//	return 0;
//}