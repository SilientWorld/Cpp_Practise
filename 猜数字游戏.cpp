//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//int main() {
//
//     �������һ��1��1000֮���������Ϊ��
//    srand(time(nullptr));
//    int answer = rand() % 1000 + 1;
//
//     ��ʾ�û�����
//    cout << "��һ����������Ƕ��٣�1-1000����" << endl;
//
//     ѭ�������û������룬ֱ������Ϊֹ
//    int guess;
//    while (cin >> guess) {
//        if (guess == answer) {
//            cout << "��ϲ�㣬�¶��ˣ�" << endl;
//            break; 
//        }
//        else if (guess < answer) {
//            cout << "��С�ˣ�����һ�ΰɣ�" << endl;
//        }
//        else {
//            cout << "�´��ˣ�����һ�ΰɣ�" << endl;
//        }
//    }
//
//    return 0;
//}