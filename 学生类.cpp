//#include <iostream>
//#include <string>
//using namespace std;
//class Student
//{
//private:
//    int age;
//    string name;
//public:
//    Student(int m, string n);
//    Student();
//    void SetMember(int m, string n);
//    int Getage();
//    string Getname();
//};
//Student::Student(int m, string n)
//{
//    age = m;
//    name = n;
//}
//Student::Student()
//{
//    age = 0;
//    name = "unnamed";
//}
//void Student::SetMember(int m, string n)
//{
//    age = m;
//    name = n;
//}
//int Student::Getage()
//{
//    return age;
//}
//string Student::Getname()
//{
//    return name;
//}
//int main()
//{
//    Student stu[3] = { Student(13,"wang") };   /*��һ��Ԫ���ô��ι��캯����ʼ�����ڶ�������Ԫ�����޲ι��캯����ʼ����Ĭ������Ϊ 0 ������Ϊ "unnamed"*/
//    stu[2].SetMember(12, "zhang");           /*�޸ĵ�����Ԫ�ص����ݳ�Աֵ*/
//    cout << stu[0].Getage() << "," << stu[0].Getname() << "\n";
//    cout << stu[1].Getage() << "," << stu[1].Getname() << "\n";
//    cout << stu[2].Getage() << "," << stu[2].Getname() << "\n"; /*������ɸ���һ��ѭ��*/
//    return 0;
//}