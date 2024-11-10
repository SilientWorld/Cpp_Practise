//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//int main() {
//
//     随机生成一个1到1000之间的整数作为答案
//    srand(time(nullptr));
//    int answer = rand() % 1000 + 1;
//
//     提示用户输入
//    cout << "猜一下这个数字是多少（1-1000）：" << endl;
//
//     循环读入用户的输入，直到猜中为止
//    int guess;
//    while (cin >> guess) {
//        if (guess == answer) {
//            cout << "恭喜你，猜对了！" << endl;
//            break; 
//        }
//        else if (guess < answer) {
//            cout << "猜小了，再试一次吧：" << endl;
//        }
//        else {
//            cout << "猜大了，再试一次吧：" << endl;
//        }
//    }
//
//    return 0;
//}