//#include <iostream>
//using namespace std;
//int n;
//int b[10][10] = { 0 };
//int a[100];
//int matrix(int s)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == s)
//			return i;
//	}
//}int zifan()//自反
//{
//	int i, sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += b[i][i];
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (sum == n && b[i][i] == 1)
//			return 1;
//		else return 0;
//	}
//}
//int fanduichen()//反对称
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (b[i][j] == 1 && i != j && b[j][i] != 0)
//				return 0;
//		}
//	}
//	return 1;
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
////除主对角线上的数字外，如果第i行全为0，那么第i个元素为极大元
////除主对角线上的数字外，如果第i列全为0，那么第i个元素为极小元
////除主对角线上的数字外，如果第i行全为1，那么第i个元素为最小元
////除主对角线上的数字外，如果第i列全为1，那么第i个元素为最大元
//int main()
//{
//	int m, i, k, q, d, x, y, j, p, s = 0, h = 0, e;
//	cout << "请输入集合中元素的个数：";
//	cin >> n;
//	cout << "请输入集合元素:";
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
//		if ((i + 1) % 2 == 0 && i)
//			b[matrix(x)][matrix(y)] = 1;
//	}
//	k = zifan();
//	q = fanduichen();
//	d = chuandi();
//	if (k)
//		cout << "具有自反性！" << endl;
//	else
//		cout << "不具有自反性！" << endl;
//	if (q)
//		cout << "具有反对称性！" << endl;
//	else
//		cout << "不具有反对称性！" << endl;
//	if (d)
//		cout << "具有传递性！" << endl;
//	else
//		cout << "不具有传递性！" << endl;
//	if (k != 0 && q != 0 && d != 0)
//		cout << "具有偏序关系！" << endl;
//	cout << "关系矩阵:" << endl;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//			cout << b[i][j] << " ";
//		cout << endl;
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			e = j + i * n;
//			a[e] = b[i][j];
//		}
//	}
//	for (e = 0; e < n * n; e++)
//		cout << a[e] << " ";
//	cout << endl;
//	cout << "删除恒等关系后的矩阵为：" << endl;
//	for (i = 0; i < n; i++)
//	{
//		if (b[i][i] == 1)
//			b[i][i] = 0;
//		for (j = 0; j < n; j++)
//			cout << b[i][j] << " ";
//		cout << endl;
//	}
//	cout << "删除传递关系后的矩阵为：" << endl;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (b[i][j] == 1)
//			{
//				for (p = 0; p < n; p++)
//				{
//					if (b[j][p] == 1 && b[i][p] == 1)//判断盖住关系
//					{
//						b[i][p] = 0;
//					}
//				}
//			}
//		}
//	}
//	cout << "按行展开：" << endl;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//			cout << b[i][j] << " ";
//		cout << endl;
//	}
//	cout << "盖住关系为：" << endl;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (b[i][j] == 1)
//				cout << "<" << i + 1 << "," << j + 1 << ">";
//		}
//	}
//	cout << endl;
//	do
//	{
//		int i = 0;
//		a[i] == 1;
//		i++;
//		s++;
//	} while (i >= n * n);
//	if (s == n)
//		cout << "具有全下界！,最小元是：" << i << endl;
//	do
//	{
//		int i = 4;
//		a[i] == 1;
//		i += n;
//		h++;
//	} while (i >= n * n);
//	if (h == n)
//		cout << "具有全上界！,最大元是" << j << endl;//判断有界格
//	if (s == 1 && h == 1)
//	{
//		cout << "该关系是有界格！" << endl;
//		cout << "该关系是有界格！" << endl;
//	}
//	if (((i || j) >= j) && ((i || j) <= i))//判断有补格
//		cout << "该关系是有补格！" << endl;
//	return 0;
//}