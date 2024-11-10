//#include <iostream>
//using namespace std;
//int n;
//int b[10][10] = { 0 };
//int a[10];
//int matrix(int s)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == s)
//			return i;
//	}
//}
//int zifan()//自反性
//{  
//	int i,sum=0;
//	for (i = 0; i < n; i++)
//	{
//		sum += b[i][i];
//	}
//	for (i = 0; i < n; i++)
//	{
//      if (sum == n && b[i][i] == 1)
//			return 1;
//		else return 0;
//	}
//}
//int fanzifan()//反自反
//{
//	int i, sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += b[i][i];
//	}
//	for(i=0;i<n;i++)
//	{
//		if (sum == 0 && b[i][i] == 0)
//			return 1;
//		else return 0;
//	}
//}
//int duichen()//对称
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <n; j++)
//		{
//			if (b[i][j] != b[j][i])
//				return 0;
//			else return 1;
//		}
//	}
//}
//int fanduichen()//反对称
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (b[i][j] ==1&&i!=j&&b[j][i]!=0)
//				return 0;
//		}
//	}
//}
//int chuandi()//传递
//{
//	int i, j, k;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (b[i][j] == 1)
//			{
//				for (k = 0; k < n; k++)
//				{
//					if (b[j][k] == 1 && b[i][k] != 1)
//						return 0;
//				}
//			}
//		}
//	}
//	return 1;
//}
//void zifanbibao()//自反闭包
//{
//	cout << "自反闭包：";
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (b[i][j] == 1 || (i == j && b[i][j] == 0))
//				cout << "<" << a[i] << "," << a[j] << ">"<<" ";
//		}
//	}
//	cout << endl;
//}
//void duichenbibao()//对称闭包
//{
//	cout << "对称闭包：";
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			if(b[i][j]==1||b[j][i]==1)
//				cout << "<" << a[i] << "," << a[j] << ">" << " ";
//			if(i!=j)
//				cout << "<" << a[j] << "," << a[i] << ">" << " ";
//		}
//	}
//	cout << endl;
//}
//void Warshall()//传递闭包
//{
//	cout << "传递闭包：";
//	int i, j, k;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (b[j][i])
//			{
//				for (k = 0; k < n; k++)
//					b[j][k] += b[i][k];
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (b[i][j])
//				cout << "<" << a[i] << "," << a[j] << ">" << " ";
//		}
//	}
//}
//int main()
//{
//	int m,i,j,k,p,q,d,x,y,z;
//	cout << "请输入集合中元素的个数：" ;
//	cin >> n;
//	cout << "请输入集合元素:" ;
//	for (i = 0; i < n; i++)
//		cin >> a[i];
//	cout << "请输入序偶个数：";
//	cin >> m;
//	cout << "请输入二元关系：";
//	for (i = 0; i < 2 * m; i++)
//	{
//		if (i % 2 == 0)
//			cin >> x;
//		else
//			cin >> y;
//        if ((i + 1) % 2 == 0 && i)
//		    b[matrix(x)][matrix(y)] = 1;
//	}
//	cout << "关系矩阵:" << endl;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//			cout << b[i][j] << " ";
//		cout << endl;
//	}
//	k = zifan();
//	p = duichen();
//	q = fanduichen();
//	d = chuandi();
//	z = fanzifan();
//	if (k)
//		cout << "具有自反性！" << endl;
//	else
//		cout << "不具有自反性！" << endl;
//	if (p)
//		cout << "具有对称性！" << endl;
//	else 
//		cout << "不具有对称性！" << endl;
//	if (q)
//		cout << "具有反对称性！"<<endl;
//	else
//		cout << "不具有反对称性！" << endl;
//	if (d)
//		cout << "具有传递性！" << endl;
//	else
//		cout << "不具有传递性！" << endl;
//	if(z)
//		cout << "具有反自反性！" << endl;
//	else
//		cout << "不具有反自反性！" << endl;
//	zifanbibao();
//    duichenbibao();
//	Warshall();
//	return 0;
//}