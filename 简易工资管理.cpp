//#include<iostream>
//#include <string>
//using namespace std;
//class Employee
//{
//protected:
//	string name;   //����
//	int working_years;   //����
//public:
//	Employee(string nm = "unnamed", int wy = 0) {
//		name = nm; working_years = wy;
//	}
//	string Getname() {
//		return name;
//	}
//	double ComputePay() {
//		return 35 * working_years;
//	}   //���乤�ʣ����ǣ�����*35
//	void SetWorkyears(int wy) {
//		working_years = wy;
//	}
//};
//class Worker :public Employee {
//private:
//	double pay_per_hour;  //ÿСʱ���ʶ�
//	int work_time;             //���¹���ʱ��
//public:
//	Worker(string n, int t, int m) {
//		name = n; work_time = m; working_years = t;
//	}
//	double count_pay() {
//		return pay_per_hour * work_time + ComputePay();
//	}             //���㹤�ʣ�������˵���ļ������
//	void SetWorktime(int wt) {
//		work_time = wt;
//	}    //���õ��¹���ʱ��
//	void Setpay_per_hour(int x) {
//		pay_per_hour = x;
//	} //����ÿСʱ���ʶ�
//};
//class SalesPerson :public Employee {
//private:
//	double pay_per_hour;   //ÿСʱ���ʶ�
//	double saleroom;       //�����۳���Ʒ���
//	int work_time;         //���¹���ʱ��
//public:
//	SalesPerson(string n, int y, int s, int wt) {
//		name = n; working_years = y; saleroom = s; work_time = wt;
//	}
//	double count_pay() {
//		return pay_per_hour * work_time + saleroom * 0.01 + ComputePay();
//	}          //���㹤�ʣ�������˵���ļ������
//	void SetWorktime(int wt) {
//		work_time = wt;
//	}    //���õ��¹���ʱ��
//	void Setpay_per_hour(int x) {
//		pay_per_hour = x;
//	}  //����ÿСʱ���ʶ�
//	void Setsalesroom(double sr) {
//		saleroom = sr;
//	} //���õ����۳���Ʒ���
//};
//class Manager :public Employee {
//public:
//	Manager(string nm, int wy) {
//		name = nm; working_years = wy;
//	}
//	double count_pay() {
//		return 1000 + working_years * 35;
//	}    //���㹤�ʣ�������˵���ļ������ 
//};
//
//int main()
//{
//	Worker work("zhangqiang", 3, 200);
//	work.Setpay_per_hour(50);
//	cout << "����=" << work.count_pay() << endl;
//	work.SetWorktime(180);
//	work.SetWorkyears(10);
//	work.Setpay_per_hour(30);
//	cout << work.Getname() << "  " << work.count_pay() << endl;
//
//
//	SalesPerson sales("wangjun", 5, 300000, 25);
//
//
//
//	sales.SetWorktime(40);
//	sales.Setpay_per_hour(80);
//	sales.Setsalesroom(450000);
//	cout << sales.Getname() << "  " << sales.count_pay() << endl;
//
//
//
//	Manager mana("sunchao", 20);
//	cout << mana.Getname() << "  " << mana.count_pay() << endl;
//	return 0;
//}