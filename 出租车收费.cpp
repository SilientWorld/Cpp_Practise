//#include <iostream>
//#include <string>
//using namespace std;
//const double base = 8.0;
//const double perprice = 0.7;
//class Station
//{
//protected:
//	string from;//��ʾ��ʼ����
//	string to;//��ʾĿ�����
//public:
//	Station(string f, string t)//�ṩ��ʼ��Ŀ�����
//	{
//		from = f;
//		to = t;
//	}
//	void disp()//��ʾ��ֹ����
//	{
//		cout << from << " " << to ;
//	}
//};
//class Mile
//{
//protected:
//	double mile;//��ʾ����֮��ľ��룬�ù�������ʾ
//public:
//	Mile(double m)//�ṩ����֮��ľ���
//	{
//		mile = m;
//	}
//	void disp()  //��ʾ�����
//	{
//		cout << " "<<mile;
//	}
//};
//class Price :public Station, public Mile
//{
//private:
//	double price; //����֮��򳵵��ܷ���
//public:
//	Price(string f, string t, double m) :Station(f, t), Mile(m)//���û��๹�캯�����������
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
//		void disp()//��ʾ�ܷ���
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