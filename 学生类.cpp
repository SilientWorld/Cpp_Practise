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
//    Student stu[3] = { Student(13,"wang") };   /*第一个元素用带参构造函数初始化；第二、三个元素由无参构造函数初始化，默认年龄为 0 ，姓名为 "unnamed"*/
//    stu[2].SetMember(12, "zhang");           /*修改第三个元素的数据成员值*/
//    cout << stu[0].Getage() << "," << stu[0].Getname() << "\n";
//    cout << stu[1].Getage() << "," << stu[1].Getname() << "\n";
//    cout << stu[2].Getage() << "," << stu[2].Getname() << "\n"; /*这三句可改用一个循环*/
//    return 0;
//}