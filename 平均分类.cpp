//#include <iostream>
//using namespace std;
//class student
//{
//public:
//	double score;//��ĳ�ſεĳɼ�
//	static double total;//�ܷ�
//	static int count;//ѧ������
//	void scoreTotal(double s);//�������÷��������ֺܷ��ۼ�ѧ������
//	static int person();//���ڷ���ѧ������
//	static int average();//���ڷ�����õ�ƽ����
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
//	cout << "ѧ��������" << student::person() << endl;
//	cout << "ƽ���֣�" << student::average() << endl;
//	return 0;
//}