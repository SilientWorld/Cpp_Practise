//#include <iostream>
//using namespace std;
//class complex
//{
//private:
//	float real;
//	float imag;
//public:
//	complex(float r = 0, float i = 0);
//	void print();
//	complex operator+(const complex& a);
//	complex operator+(float x);
//	complex operator++();
//};
//complex::complex(float r, float i)
//{
//	real = r;
//	imag = i;
//}
//void complex::print()
//{
//	cout << real;
//	if (imag != 0)
//	{
//		if (imag > 0)
//			cout << "+";
//		cout << imag << "i";
//	}
//	cout << endl;
//}
//complex complex::operator+(const complex& a)
//{
//	complex temp;
//	temp.real = real + a.real;
//	temp.imag = imag + a.imag;
//	return temp;
//}
//complex complex::operator+(float x)
//{
//	return complex(real + x, imag + x);
//}
//complex complex::operator++()
//{
//	++real;
//	++imag;
//	return *this;
//}
//int main()
//{
//	complex c1(1.5, 2.5), c2(5, 10), c3, c4;
//	cout << "c1=";
//	c1.print();
//	cout << "c2=";
//	c2.print();
//	c3=c1+c2;
//	cout << "c3=c1+c2=";
//	c3.print();
//	c3 = c3 + 5.32f;
//	cout << "c3 = c3 + 5.32f=";
//	c3.print();
//	c4 = ++c2;
//	cout << "c2+1=";
//	c2.print();
//	cout << "c4=";
//	c4.print();
//	return 0;
//}