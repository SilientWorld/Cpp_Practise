//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//int m, n,i,j,f,z,w;
//using namespace std;
//int a[100][100],p[100][100],q[100][100],r[100][100],g[100],d[100][100];
//void Produce()//随机生成简单无向图
//{
//	int b, c,count=0;
//	cout << "生成简单无向图：" << endl;
//	srand(time(NULL));
//	while (count < m)
//	{
//		b = rand() % n;
//		c = rand() % n;
//		if (b != c && a[b][c] == 0)
//		{
//			a[b][c] = 1;//无向图是对称的
//			a[c][b] = 1;
//			count++;
//		}
//	}
//	cout << "图的邻接矩阵：" << endl;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			cout <<a[i][j]<<" ";
//		}
//		cout << endl;
//	}
//}
//int judgeConnect()//判断连通性
//{
//	int k,s=0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				p[i][j] = a[i][j];//可达性矩阵
//				q[i][j] = a[i][j];//存储矩阵相乘后的结果
//			}
//		}
//			for (i = 0; i < n; i++)
//			{
//				for (j = 0; j < n; j++)
//				{
//					for (k = 0; k < n; k++)
//						s += q[i][k] * a[k][j];
//				}
//				if (s == 0)
//					r[i][j] = 0;
//				else
//					r[i][j] = 1;
//			}
//			for (i = 0; i < n; i++)
//			{
//				for (j = 0; j < n; j++)
//					q[i][j] = r[i][j];
//			}
//			for (i = 0; i < n; i++)
//			{
//				for (j = 0; j < n; j++)
//				{
//					if (p[i][j] > 0 || q[i][j] > 0)
//						p[i][j] = 1;
//				}
//			}
//			for (i = 0; i < n; i++)
//			{
//				for (j = 0; j < n; j++)
//				{
//					if (i != j && p[i][j] == 0)
//						return 0;
//				}
//			}
//		return 1;
//}
//int judgeEuler()//欧拉图
//{
//	int result = 0,count=0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (a[i][j] == 1)
//				count++;
//		}
//		if (count % 2 == 1)
//			result++;
//	}
//		if (result == 0)
//			return 0;
//		else
//			if (result == 2)
//				return 1;
//}
//int cot;
//void circuit(int f)//欧拉回路
//{
//	if (z == 1 && w == 1)
//		return;
//	if (cot == m + 1)
//	{
//		for (i = 0; i < cot; i++)
//		{
//			if (i == 0)
//				cout << g[i];
//			else
//				cout << "->" << g[i];
//		}
//		cout << endl;
//		w = 1;
//	}
//	else
//	{
//		for (i = 0; i < n; i++)
//		{
//			if (a[f][i] == 1 && d[f][i] == 0)
//			{
//				d[i][f] = d[f][i] = 1;
//				g[cot++] = i;
//				circuit(i);
//				cot--;
//				d[i][f] = d[f][i] = 0;
//			}
//		}
//	}
//}
//int main()
//{
//	do
//	{
//		cout << "输出结点个数：";
//		cin >> n;
//		cout << "输出边的个数：";
//		cin >> m;
//		if (m > n * (n - 1) / 2)
//		{
//			cout << "生成" << n << "个结点的边最多有" << n * (n - 1) / 2 << "条" << endl;
//		}
//	} while (m > n * (n - 1) / 2);
//	Produce();
//	if (judgeConnect()==0)
//		cout << "该图不是连通图，不存在欧拉图和半欧拉图！" << endl;
//	else
//	{
//		cout << "该图是连通图!" << endl;
//		int h = judgeEuler();
//			if (h == 0)
//			{
//				cout << "该图是欧拉图!" << endl;
//				cout << "一条欧拉回路：" << endl;
//				for (i = 0; i < n; i++)
//				{
//					g[cot++] = i;
//					circuit(i);
//					cot--;
//				}
//			}
//			else
//			{
//				if (h == 1)
//				{
//					cout << "该图为半欧拉图！" << endl;
//					cout << "一条欧拉路：" << endl;
//					for (i = 0; i < n; i++)
//					{
//						int s=0;
//						for (j = 0; j < n; j++)
//						{
//							if (a[i][j] == 1)
//								s++;
//						}
//						if (s % 2 == 1)
//						{
//							g[cot++] = i;
//							circuit(i);
//							cot--;
//						}
//					}
//				}
//			}
//	}
//	return 0;
//}