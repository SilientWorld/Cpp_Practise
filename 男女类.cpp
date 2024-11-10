//#include <iostream>
//#include <string>
//using namespace std;
//class Boy;
//class Girl
//{
//private:
//	string name;
//	int age;
//	friend Boy;
//public:
//	Girl(string N, int A);
//	~Girl()
//	{
//		cout << "Girl desconsructing\n";
//	}
//	void Print();
//	void VisitBoy(Boy&);
//};
//class Boy
//{
//private:
//	string name;
//	int age;
//	friend Girl;
//public:
//	Boy(string N, int A);
//	~Boy()
//	{
//		cout << "Boy desconsructing\n";
//	}
//	void Print();
//	void VisitGirl(Girl&);
//};
//Girl::Girl(string N, int A)
//{
//	name = N;
//	age = A;
//	cout << "Girl constructing\n";
//}
//void Girl::Print()
//{
//	cout << "Girl's name:" << name << endl;
//	cout << "Girl's age:" << age << endl;
//}
//void Girl::VisitBoy(Boy& boy)
//{
//	cout << "Boy's name:" << boy.name << endl;
//	cout << "Boy's age:" << boy.age << endl;
//}
//Boy::Boy(string N, int A)
//{
//	name = N;
//	age = A;
//	cout << "Boy constructing\n";
//}
//void Boy::Print()
//{
//	cout << "Boy's name:" << name << endl;
//	cout << "Boy's age:" << age << endl;
//}
//void Boy::VisitGirl(Girl& girl)
//{
//	cout << "Girl's name:" << girl.name << endl;
//	cout << "Girl's age:" << girl.age << endl;
//}
//void VisitBoyGirl(Boy& boy, Girl& girl)
//{
//	cout << "Boy's name:" << boy.name << endl;
//	cout << "Boy's age:" << boy.age << endl;
//	cout << "Girl's name:" << girl.name << endl;
//	cout << "Girl's age:" << girl.age << endl;
//}
//int main()
//{
//	Girl a("Ð¡ºì", 19);
//	Boy b("Ð¡Ã÷", 20);
//	a.VisitBoy(b);
//	b.VisitGirl(a);
//	a.Print();
//	b.Print();
//	return 0;
//}