//#include <iostream>
//using namespace std;
//class cemployee
//{
//public:
//	int id;
//	char m_name[128];
//	char depart[128];
//	cemployee()
//	{
//		cout << "���ù��캯��" << endl;
//	}
//	~cemployee()
//	{
//		cout << "������������" << endl;
//	}
//	void outputname()
//	{
//		cout << "����cemployee���outputname�ĳ�Ա����" << endl;
//	}
//};
//class cpoerator :public cemployee
//{
//public:
//	int id;
//	char password[128];
//	void outputname()//����ĺ����븸��ͬ����������ĺ����Ὣ����ͬ���������أ�����ʵ�ָ��ຯ��
//	{
//		cout << "����coperator���outputname�ĳ�Ա����" << endl;
//	}
//};
//
//int main()
//{
//	cemployee* a = new cpoerator();
//	a->outputname();
//	cpoerator p;
//	p.outputname();
//	p.cemployee::outputname();//��һ�������Ϳ��Է��ʸ����е�ͬ������
//	return 0;
//}