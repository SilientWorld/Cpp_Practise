//#include <iostream>
//using namespace std;
//class cfx
//{
//protected:
//	float length, width;
//public:
//	cfx(float l, float w)
//	{
//		length = l;
//		width = w;
//	}
//	float area()
//	{
//		return length * width;
//	}
//	void disp()
//	{
//		cout << area() << " ";
//	}
//};
//class tj:public cfx
//{
//private:
//	float height;
//public:
//	tj(float l, float w, float h) :cfx(l, w)
//	{
//		height = h;
//	}
//	float calv()
//	{
//		return area() * height;
//	}
//	void disp()
//	{
//		cfx::disp();
//	    cout << calv()<<endl;
//	}
//};
//int main()
//{
//	int c, k, g;
//	cin >> c >> k >> g;
//	tj r(c, k, g);
//	r.disp();
//	return 0;
//}