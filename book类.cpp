//#include <iostream>
//#include <string>
//using namespace std;
//class book
//{
//public:
//	string bookname;//����
//	double bookprice;//���
//	int booknumber;//����
//	void display();//��ʾͼ�����
//	int borrow();//����������1������ʾ��ǰ��������
//	int restore();//����������1������ʾ��ǰ��������
//	book(string name, double price, int number);
//};
//book::book(string name, double price, int number)
//{
//	bookname = name;
//	bookprice = price;
//	booknumber = number;
//}
//void book::display()
//{
//	cout << "������" << bookname << " " << "�۸�:" << bookprice << " " << "����:" << booknumber << endl;
//}
//int book::borrow()
//{
//	booknumber--;
//	return booknumber;
//}
//int book::restore()
//{
//	booknumber++;
//	return booknumber;
//}
//int main()
//{
//	book a("ƽ��������", 20.56, 15);
//	book b("����", 15.78, 20);
//	a.borrow();
//	a.display();
//	b.restore();
//	b.display();
//	return 0;
//}