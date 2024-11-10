//#include <iostream>
//#include <string>
//using namespace std;
//class BookCard
//{
//private:
//	string id;
//	string stuName;
//	int number;
//public:
//	void display();
//	bool borrow();
//	BookCard(string i="B19010250", string name="Ñ©·å", int n=4);
//};
//BookCard::BookCard(string i, string name, int n)
//{
//	id = i;
//	stuName = name;
//	number = n;
//}
//void BookCard::display()
//{
//	cout << id << "  " << stuName << "  " << number << "  " << endl;
//}
//bool BookCard::borrow()
//{
//	if (number == 10)
//		return false;
//	else
//		if (number < 10||number>0)
//		{
//			number += 1;
//			return true;
//		}
//}
//void f(BookCard& bk)
//{
//	if (!bk.borrow())
//	{
//		bk.display();
//		cout << "you have borrowed 10 books,can not borrow any more!" << endl;
//	}
//	else
//		bk.display();
//}
//int main()
//{
//	BookCard bk1("B20190620", "¶«Æ½", 10), bk2;
//	f(bk1);
//	f(bk2);
//	return 0;
//}