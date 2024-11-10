//#include <iostream>
//using namespace std;
//class Time
//{
//private:
//	int Hour;
//	int Minute;
//	int Second;
//public:
//	Time(int h = 0, int m = 0, int n = 0);
//	Time(const Time& ob);
//	~Time();
//	void ChangeTime(int h, int m, int s);
//	int GetHour();
//	int GetMinute();
//	int GetSecond();
//	void PrintTime();
//    void IncreaseoneSecond();
//};
//Time::Time(int h, int m, int n)
//{
//	cout << "Constructing¡­¡­" << endl;
//	Hour = h;
//	Minute = m;
//	Second = n;
//}
//Time::Time(const Time& ob)
//{
//	cout << "Copy constructing¡­¡­" << endl;
//}
//Time::~Time()
//{
//	cout << "Deconstructing¡­¡­" << endl;
//}
//void Time::ChangeTime(int h, int m, int n)
//{
//	Hour = h;
//	Minute = m;
//	Second = n;
//}
//int Time::GetHour()
//{
//	return Hour;
//}
//int Time::GetMinute()
//{
//	return Minute;
//}
//int Time::GetSecond()
//{
//	return Second;
//}
//void Time::PrintTime()
//{
//	cout << Hour << ":" << Minute << ":" << Second << endl;
//}
//void Time::IncreaseoneSecond()
//{
//	if (Second < 59)
//		Second++;
//	else
//		if (Second == 59 && Minute == 59 && Hour == 23)
//		{
//			Hour = 0;
//			Minute = 0;
//			Second = 0;
//		}
//		else
//			if (Second == 59 && Minute < 59 && Hour < 23)
//			{
//				Second = 0;
//				Minute++;
//				Hour++;
//			}
//	cout << Hour << ":<" << Minute << ":" << Second << endl;
//}
//void f(Time  t)
//{
//	t.PrintTime();
//	cout << "call f\n";
//}
//int main()
//{
//	Time t1;
//	Time t2(1);
//	Time t3(1, 2);
//	Time t4(1, 2, 3);
//	t1.PrintTime();
//	t2.PrintTime();
//	t3.PrintTime();
//	t4.PrintTime();
//	t1.ChangeTime(4, 5, 6);
//	t2.ChangeTime(4, 5, 6);
//	t3.ChangeTime(4, 5, 6);
//	t4.ChangeTime(4, 5, 6);
//	cout << t1.GetHour() << ":" << t1.GetMinute() << ":" << t1.GetSecond() << endl;
//	cout << t2.GetHour() << ":" << t2.GetMinute() << ":" << t2.GetSecond() << endl;
//	cout << t3.GetHour() << ":" << t3.GetMinute() << ":" << t3.GetSecond() << endl;
//	cout << t4.GetHour() << ":" << t4.GetMinute() << ":" << t4.GetSecond() << endl;
//	return 0;
//}  