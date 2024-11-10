//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//class Matrix
//{
//private:
//    int row, col;
//    int* p;
//public:
//    Matrix(int r, int c) :row(r), col(c)
//    {
//        p = new int[c * r];
//        cout<<"请输入该矩阵元素:" << endl;
//        for (int i = 0; i < row; i++)
//        {
//            for (int j = 0; j < col; j++)
//                cin >> p[i * col + j];
//        }
//    }
//    Matrix()
//    {
//        p = new int[9];
//    }
//    Matrix operator+(Matrix& O)
//    {
//        if (col != O.col || row != O.row)
//        {
//            cout << "program terminated!" << endl;
//            exit(0);
//        }
//        Matrix temp;
//        temp.col = col;
//        temp.row = row;
//        for (int i = 0; i < row; i++)
//            for (int j = 0; j < col; j++)
//                temp.p[i * col + j] = p[i * col + j] + O.p[i * col + j];
//        return temp;
//    }
//    Matrix operator=(Matrix D)
//    {
//        col = D.col;
//        row = D.row;
//        for (int i = 0; i < row; i++)
//        {
//            for (int j = 0; j < col; j++)
//                p[i * col + j] = D.p[i * col + j];
//        }
//        return *this;
//    }
//    void disp()
//    {
//        
//            for (int i = 0; i < row; i++)
//            {
//                cout << '\t';
//                for (int j = 0; j < col; j++)
//                    cout << p[i * col + j] << '\t';
//                cout << endl;
//            }
//        
//    }
//};
//
//int main()
//{
//    int row_a, col_a, row_b, col_b;
//    cout << "请输入am矩阵的行数和列数:" << endl;
//    cin >> row_a >> col_a;
//    Matrix am(row_a, col_a);
//    cout << "请输入bm矩阵的行数和列数:" << endl;
//    cin >> row_b >> col_b;
//    Matrix bm(row_b, col_b), cm;
//    cout << "am:" << endl;
//    am.disp();
//    cout << "bm:" << endl;
//    bm.disp();
//    cm = am + bm;
//    cout << "cm=am+bm:" << endl;
//    cm.disp();
//    am = bm;
//    cout << "am=bm:" << endl;
//    am.disp();
//    return 0;
//}
