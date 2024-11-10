//#include <iostream>
//#include <string>
//using namespace std;
//class Date
//{
//public:
//	int year, month, day;
//	Date(int y=2000, int m=1, int d=1)
//	{
//		year = y;
//		month = m;
//		day = d;
//	}
//	int Getyear()
//	{
//		return year;
//	}
//	int Getmonth()
//	{
//		return month;
//	}
//	int Getday()
//	{
//		return day;
//	}
//	void re(int y, int m, int d)
//	{
//		year = y;
//		month = m;
//		day = d;
//	}
//};
//class Product
//{
//private:
//	string name;
//	double price;
//	Date deptime;//出厂期
//	string factory;
//	bool easy_break;
//	Date valtime;//有效期
//	string color;
//	double high;
//public:
//	Product(string n);
//	Product(string n, double p);
//	Product(string n, double p, int y, int m, int d);
//	void SetProduct(string n, double p, int y,int m, int d,string f, bool e, int Y,int M,int D,string c, double h);
//	void output();
//};
//Product::Product(string n)
//{
//	cout << "Constrcting One...." << endl;
//	name = n;
//}
//Product::Product(string n, double p)
//{
//	cout << "Constrcting Two...." << endl;
//	name = n;
//	price = p;
//	factory = "unnamed";
//	easy_break = 0;
//}
//Product::Product(string n, double p, int y, int m, int d) :deptime(y, m, d)
//{
//	cout << "Constrcting Three...." << endl;
//	name = n;
//	price = p;
//	factory = "unnamed";
//	easy_break = 0;
//}
//void Product::SetProduct(string n, double p, int y, int m, int d, string f, bool e, int Y, int M, int D, string c, double h) 
//{
//	name = n;
//	price = p;
//	deptime.re(y, m, d);
//	factory = f;
//	easy_break = e;
//	valtime.re(Y,M,D);
//	high = h;
//}
//void Product::output()
//{
//	cout << name << " " << price << endl;
//	cout << deptime.Getyear() << "-" << deptime.Getmonth() << "-" << deptime.Getday() << endl;
//	cout << factory << " " << easy_break << endl;
//	cout << valtime.Getyear() << "-" << valtime.Getmonth() << "-" << valtime.Getday() << endl;
//}
//int main()
//{
//	string  s;
//	cin >> s;
//	Product p1("car");
//	Product p2("glass", 3.00);
//	Product p3("pen", 5.00, 2009, 3, 14);
//	p1.SetProduct("car", 100000.0, 2009, 3, 14, "nanjing", 0, 2010, 10, 14, "red", 1.5);
//	p1.output();
//	p2.output();
//	p3.output();
//	return 0;
//}
