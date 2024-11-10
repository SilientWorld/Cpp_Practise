//#include <iostream>
//using namespace std;
//class student
//{
//public:
//	double score;//存某门课的成绩
//	static double total;//总分
//	static int count;//学生人数
//	void scoreTotal(double s);//用于设置分数，求总分和累计学生人数
//	static int person();//用于返回学生人数
//	static int average();//用于返回求得的平均分
//};
//double student::total = 0;
//int student::count = 0;
//void student::scoreTotal(double s)
//{
//	score = s;
//	count++;
//	total += score;
//}
//int student::person()
//{
//	return count;
//}
//int student::average()
//{
//	return total / count;
//}
//int main()
//{
//	student s[5];
//	student t;
//	double sc;
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		cin >> sc;
//		s[i].scoreTotal(sc);
//	}
//	t.scoreTotal(sc);
//	cout << "学生人数：" << student::person() << endl;
//	cout << "平均分：" << student::average() << endl;
//	return 0;
//}