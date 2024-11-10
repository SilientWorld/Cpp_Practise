////或运算 |  , 与运算 &   ,单条件 ->  ,双条件 <=> ,非运算 !
//
//#include <cstdio>//将stdio.h的内容用c++的头文件形式表示
//#include <iostream>
//#include <vector>//vector是一个类模板
//#include <string>
//#include <cstdlib>
//#include <queue>//queue是一个类模板
//#include <stack>//STL栈的头文件
//#include <map>//映射
//#include <sstream>//把字符串根据空格分开
//using namespace std;
//string zhong;  //中缀表达式
//char hou[1000];   //后缀表达式
//string alpha;   //存放所有字母变量
//map<char, int> M;   //映射，将字母变量与0或1一一对应
//
//struct note
//{
//    int a[100];
//};
//vector<note> zhen;  //不定长数组，存放主析取范式对应字母变量的01情况，也就是表达式真值为T
//vector<note> jia;  //不定长数组，存放主合取范式对应字母变量的01情况，也就是表达式真值是F
//
//void ddd()   //预处理，去除中缀表达式中条件->中的>,和双条件<=>中的= and > ,将这两个运算符当成一个字符处理，更方便
//{
//    string::iterator i = zhong.begin();
//    int flag = 1;
//    while (flag)
//    {
//        flag = 0;
//        for (i = zhong.begin(); i != zhong.end(); ++i)
//        {
//            if (*i == '>')
//            {
//                zhong.erase(i);
//                flag = 1;
//                break;
//            }
//            if (*i == '=')
//            {
//                zhong.erase(i);
//                flag = 1;
//                break;
//            }
//        }
//    }
//}
//
//int icp(char a)
//{
//    if (a == '#') return 0;
//    if (a == '(') return 12;
//    if (a == '!') return 10;
//    if (a == '&') return 8;
//    if (a == '|') return 6;
//    if (a == '-') return 4;
//    if (a == '<') return 2;
//    if (a == ')') return 1;
//}
//int isp(char a)
//{
//    if (a == '#') return 0;
//    if (a == '(') return 1;
//    if (a == '!') return 11;
//    if (a == '&') return 9;
//    if (a == '|') return 7;
//    if (a == '-') return 5;
//    if (a == '<') return 3;
//    if (a == ')') return 12;
//}
//
//
//void change()    //中缀表达式转换后缀表达式
//{
//    int j = 0;
//    stack<char> s;
//    char ch, y;
//    s.push('#');//将x接到队列的末端
//    char t1, t2;
//    stringstream ss(zhong);
//    while (ss >> ch, ch != '#')
//    {
//        if (isalpha(ch))
//        {
//            hou[j++] = ch;
//            if (alpha.find(ch) == -1)
//            {
//                alpha.push_back(ch);
//            }
//        }
//        else if (ch == ')')
//        {
//            for (y = s.top(), s.pop(); y != '('; y = s.top(), s.pop())
//            {//s.pop 将栈顶元素出栈
//                hou[j++] = y;
//            }
//        }
//        else
//        {
//            for (y = s.top(), s.pop(); icp(ch) <= isp(y); y = s.top(), s.pop())
//            {
//                hou[j++] = y;
//            }
//            s.push(y);
//            s.push(ch);
//        }
//    }
//    while (!s.empty())//栈空返回true，否则false
//    {
//        y = s.top();
//        s.pop();
//        if (y != '#')
//        {
//            hou[j++] = y;
//        }
//    }
//    hou[j] = '#';
//}
//
//
//int cal()   //对赋值后的后缀表达式进行计算
//{
//    stack<int> s;
//    char ch;
//    int j = 0;
//    int t1, t2;
//    while (1)
//    {
//        ch = hou[j];
//        if (ch == '#') break;
//        if (ch == 0) break;
//        j++;
//        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//        {
//            s.push(M[ch]);
//        }
//        else
//        {
//            if (ch == '!')
//            {
//                t1 = s.top();
//                s.pop();
//                s.push(!t1);
//            }
//            else if (ch == '&')
//            {
//                t1 = s.top();
//                s.pop();
//                t2 = s.top();
//                s.pop();
//                if (t1 == 1 && t2 == 1)
//                {
//                    s.push(1);
//                }
//                else
//                {
//                    s.push(0);
//                }
//            }
//            else if (ch == '|')
//            {
//                t1 = s.top();
//                s.pop();
//                t2 = s.top();
//                s.pop();
//                if (t1 == 0 && t2 == 0)
//                {
//                    s.push(0);
//                }
//                else
//                {
//                    s.push(1);
//                }
//            }
//            else if (ch == '-')
//            {
//                t1 = s.top();
//                s.pop();
//                t2 = s.top();
//                s.pop();
//                if (t1 == 0 && t2 == 1)
//                {
//                    s.push(0);
//                }
//                else
//                {
//                    s.push(1);
//                }
//            }
//            else if (ch == '<')
//            {
//                t1 = s.top();
//                s.pop();
//                t2 = s.top();
//                s.pop();
//                if ((t1 == 1 && t2 == 1) || (t1 == 0 && t2 == 0))
//                {
//                    s.push(1);
//                }
//                else
//                {
//                    s.push(0);
//                }
//            }
//        }
//    }
//    int ans = s.top();
//    return ans;
//}
//
//
//
//
//
//
//
//
//
//void dfs(int cur)   //递归枚举每一种字符变量的取值情况
//{
//    if (cur == alpha.size())
//    {
//        int ans = cal();
//        for (int i = 0; i < alpha.size(); i++)
//        {
//            if (M[alpha[i]])
//            {
//                printf("T\t");
//            }
//            else
//            {
//                printf("F\t");
//            }
//        }
//        if (ans == 1)   //真值为T 计入到zhen数组，以待后面主析取范式使用
//        {
//            printf("T\n");
//            note t;
//            for (int i = 0; i < alpha.size(); i++)
//            {
//                t.a[i] = M[alpha[i]];
//            }
//            zhen.push_back(t);
//        }
//        else   //真值为F  计入到jia数组，以待后面主合取范式使用
//        {
//            printf("F\n");
//            note t;
//            for (int i = 0; i < alpha.size(); i++)
//            {
//                t.a[i] = M[alpha[i]];
//            }
//            jia.push_back(t);
//        }
//        return;
//    }
//    M[alpha[cur]] = 1;
//    dfs(cur + 1);
//    M[alpha[cur]] = 0;
//    dfs(cur + 1);
//}
//
//
//
//
//
//int main()
//{
//    while (true)
//    {
//        int i;
//        M.clear();
//        alpha.clear();
//        zhen.clear();
//        jia.clear();
//        printf("或运算为 |  , 与运算为 &   ,单条件为 ->  ,双条件我 <=> ,非运算为 !\n");
//        printf("请输入表达式\n");
//        cin >> zhong;
//        zhong.append("#");
//        ddd();
//        change();
//        for (i = 0; i < alpha.size(); i++)
//        {
//            printf("%c\t", alpha[i]);
//        }
//        printf("表达式真值\n");
//        dfs(0);
//        printf("主析取范式为\n");
//        int lena = zhen.size();
//        for (i = 0; i < lena; i++)
//        {
//            if (i != 0) printf("∨");
//            int* p = zhen[i].a;
//            printf("(");
//            for (int j = 0; j < alpha.size(); j++)
//            {
//                if (j != 0) printf("∧");
//                if (p[j] == 1)
//                {
//                    printf("%c", alpha[j]);
//                }
//                else
//                {
//                    printf("￢%c", alpha[j]);
//                }
//            }
//            printf(")");
//        }
//        printf("\n");
//       printf("主合取范式为\n");
//        for (i = 0; i < jia.size(); i++)
//        {
//            if (i != 0) printf("∧");
//            int* p = jia[i].a;
//            printf("(");
//            for (int j = 0; j < alpha.size(); j++)
//            {
//                if (j != 0) printf("∨");
//                if (p[j] == 0)
//                {
//                    printf("%c", alpha[j]);
//                }
//                else
//                {
//                    printf("￢%c", alpha[j]);
//                }
//            }
//            printf(")");
//        }
//        printf("\n\n");
//    }
//    return 0;
//}
//
