//#include <iostream>
//using namespace std;
//const double PI = 3.1415;
//class shape
//{
//public:
//	virtual double volume() = 0;
//};
//class cylinder : public shape
//{
//private:
//	double r, h;
//public:
//	cylinder(double radius, double high) :r(radius), h(high)
//	{
//	}
//	double volume()
//	{
//		return PI * r * r * h;
//	}
//};
//class sphere :public shape
//{
//private:
//	double r;
//public:
//	sphere(double radius) :r(radius)
//	{
//	}
//	double volume()
//	{
//		return 4 * PI * r * r * r / 3;
//	}
//};
//int main() {
//	shape* p;
//	double  r, h;
//	cout << "input r & h£º" << endl;
//	cin >> r >> h;
//	cylinder cy(r, h);
//	sphere sp(r);
//	p = &cy;
//	cout << p->volume() << endl;
//	p = &sp;
//	cout << p->volume() << endl;
//	return 0;
//}