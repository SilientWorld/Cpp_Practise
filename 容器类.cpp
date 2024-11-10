//#include <iostream>
//using namespace std;
//#include <cmath>
//const double pi = 3.14;
//class Container
//{
//protected:
//	double radius;
//public:
//	Container(double r)
//	{
//		radius = r;
//	}
//	virtual double area() = 0;
//	virtual double volume() = 0;
//	virtual void print() = 0;
//};
//class Cube :public Container
//{
//public:
//	Cube(double a) :Container(a){}
//	double s, v;
//	double area()
//	{
//		s = radius * radius * 6;
//		return s;
//	}
//	double volume()
//	{
//		v = pow(radius,3);
//		return v;
//	}
//	void print()
//	{
//		cout << "正方体的表面积：" << s << endl;
//		cout << "正方体的体积：" << v << endl;
//	}
//}; 
//class Sphere :public Container
//{
//public:
//	Sphere(double a) :Container(a) {}
//	double s, v;
//	double area()
//	{
//		s = 4 * pi * radius * radius;
//		return s;
//	}
//	double volume()
//	{
//		v = 4.0/3*pi*pow(radius, 3);
//		return v;
//	}
//	void print()
//	{
//		cout << "球体的表面积：" << s << endl;
//		cout << "球体的体积：" << v << endl;
//	}
//};
//class Cylinder :public Container
//{
//private:
//	double h;
//public:
//	Cylinder(double a, double h) :Container(a)
//	{
//		this->h = h;
//	}
//	double s, v;
//	double area()
//	{
//		s =2*pi* radius * radius+pi*radius*h;
//		return s;
//	}
//	double volume()
//	{
//		v = pi*radius*radius*h;
//		return v;
//	}
//	void print()
//	{
//		cout << "圆柱体的表面积：" << s << endl;
//		cout << "圆柱体的体积：" << v << endl;
//	}
//};
//int main()
//{
//	Container* p;
//	Cube a(3);
//    Sphere b(4);
//	Cylinder c(3,4);
//	p = &a;
//	cout << p->area() << endl;
//	cout << p->volume() << endl;
//	p->print();
//	p = &b;
//	cout << p->area() << endl;
//	cout << p->volume() << endl;
//	p->print();
//	p = &c;
//	cout << p->area() << endl;
//	cout << p->volume() << endl;
//	p->print();
//	return 0;
//}