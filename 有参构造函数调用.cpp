//#include <iostream>
//using namespace std;
//class base
//{
//private:
//	int x;
//public:
//	base(int i)
//	{
//		x = i;
//		cout << "构造base" << endl;
//	}
//	void show()
//	{
//		cout << "x=" << x << endl;
//	}
//};
//class derived :public base
//{
//private:
//	base d;
//public:
//	derived(int i) :base(i), d(i)
//	{
//		cout << "构造derived" << endl;
//	}
//};
//int main()
//{
//	derived a(100);
//	a.show();
//	return 0;
//}