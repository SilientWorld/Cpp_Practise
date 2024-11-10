//#include <iostream>
//using namespace std;
//class Point
//{
//private:
//	double x, y;
//public:
//	Point(double xx = 0.0, double yy = 0.0);
//	friend Point operator+(Point& a,Point&b);
//	friend Point operator+(Point& a, double b);
//	Point operator++();
//	Point operator-(Point& c);
//	friend ostream& operator<<(ostream& out, const Point& com);
//};
//Point::Point(double xx, double yy)
//{
//	x = xx;
//	y = yy;
//}
//Point Point:: operator++()
//{
//	++x;
//	++y;
//	return *this;
//}
//Point Point::operator-(Point& c)
//{
//	Point temp;
//	temp.x = x - c.x;
//	temp.y = y - c.y;
//	return temp;
//}
//Point operator+(Point& a, Point& b)
//{
//	Point temp;
//	temp.x = a.x + b.x;
//	temp.y = a.y + b.y;
//	return temp;
//}
//Point operator+(Point& a, double b)
//{
//	Point temp;
//	temp.x = a.x + b;
//	temp.y = a.y + b;
//	return temp;
//}
//ostream& operator<<(ostream& out, const Point& com)
//{
//	out << "(" << com.x << "," << com.y <<")"<< endl;
//	return out;
//}
//int main()
//{
//	Point pt1(10.5, 20.8), pt2(-5.3, 18.4), pt3;
//	cout << "original pt1,pt2,pt3 are:\n";
//	cout << pt1 << pt2 << pt3;
//	pt3 = pt1 + 100.8;
//	cout << "after pt3=pt1+100.8, pt3 is:" << pt3;
//	pt3 = pt1 + pt2;
//	cout << "after pt3=pt1+pt2, pt3 is:" << pt3;
//	pt3 = ++pt1;
//	++pt2;
//	cout << "after ++ pt1,pt2,pt3 are:\n";
//	cout << pt1 << pt2 << pt3;
//	pt3 = pt1 - pt2;
//	cout << "after pt3=pt1-pt2, pt3 is:" << pt3;
//	return 0;
//}