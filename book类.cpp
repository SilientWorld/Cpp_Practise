//#include <iostream>
//#include <string>
//using namespace std;
//class book
//{
//public:
//	string bookname;//书名
//	double bookprice;//书价
//	int booknumber;//书数
//	void display();//显示图书情况
//	int borrow();//将存书量减1，并显示当前存书数量
//	int restore();//将存书量加1，并显示当前存书数量
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
//	cout << "书名：" << bookname << " " << "价格:" << bookprice << " " << "数量:" << booknumber << endl;
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
//	book a("平凡的世界", 20.56, 15);
//	book b("活着", 15.78, 20);
//	a.borrow();
//	a.display();
//	b.restore();
//	b.display();
//	return 0;
//}