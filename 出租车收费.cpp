//#include <iostream>
//#include <string>
//using namespace std;
//const double base = 8.0;
//const double perprice = 0.7;
//class Station
//{
//protected:
//	string from;//表示起始地名
//	string to;//表示目标地名
//public:
//	Station(string f, string t)//提供起始和目标地名
//	{
//		from = f;
//		to = t;
//	}
//	void disp()//显示起止地名
//	{
//		cout << from << " " << to ;
//	}
//};
//class Mile
//{
//protected:
//	double mile;//表示两地之间的距离，用公里数表示
//public:
//	Mile(double m)//提供两地之间的距离
//	{
//		mile = m;
//	}
//	void disp()  //显示里程数
//	{
//		cout << " "<<mile;
//	}
//};
//class Price :public Station, public Mile
//{
//private:
//	double price; //两地之间打车的总费用
//public:
//	Price(string f, string t, double m) :Station(f, t), Mile(m)//调用基类构造函数并计算费用
//	{
//		if (m <= 3)
//			price = base;
//		else
//			if (m > 3)
//			{
//				int i, j;
//				double k;
//				i = int(m) / 10;
//				j = int(m) % 10;
//				k = m - int(m);
//				if (k < 0.5)
//					k = 0.5;
//				else
//					if (k > 0.5)
//					{
//						k = 0;
//						j = j + 1;
//					}
//				m = i * 10 + j + k;
//				price = base + (m - 3) / 0.5 * perprice;
//			}
//	}
//		void disp()//显示总费用
//		{
//			cout << " " << price << endl;
//		}
//};
//int main()
//{
//	string q, z;
//	double g;
//	cin >> q >> z >> g;
//	Price p(q,z,g);
//	p.Station::disp();
//	p.Mile::disp();
//	p.disp();
//	return 0;
//}