//#include <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//class Point
//{
//private:
//    double X, Y;
//public:
//    Point(double a, double b);
//    Point(Point& p);
//    double GetX();
//    double GetY();
//};
//class Line
//{
//private:
//    Point A, B;
//    double length;
//public:
//    Line(Point p1, Point p2);
//    double GetLength();
//};
//Point::Point(double a, double b)
//{
//    X = a;
//    Y = b;
//}
//Point::Point(Point& p)
//{
//    X = p.X;
//    Y = p.Y;
//}
//double Point::GetX()
//{
//    return X;
//}
//double Point::GetY()
//{
//    return Y;
//}
//Line::Line(Point p1, Point p2) :A(p1), B(p2)
//{
//    length = sqrt((p1.GetX() - p2.GetX()) * (p1.GetX() - p2.GetX()) + (p1.GetY() - p2.GetY()) * (p1.GetY() - p2.GetY()));
//}
//double Line::GetLength()
//{
//    return length;
//}
//int main()
//{
//    int i, j, k, l;
//    cin >> i >> j >> k >> l;
//    Point A(i,j), B(k,l);
//    Line line(A, B);
//    cout << fixed<<setprecision(2)<<line.GetLength() << endl;
//    return 0;
//}
