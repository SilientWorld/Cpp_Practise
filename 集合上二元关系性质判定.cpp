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
//int zifan()//�Է���
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
//int fanzifan()//���Է�
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
//int duichen()//�Գ�
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
//int fanduichen()//���Գ�
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
//int chuandi()//����
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
//void zifanbibao()//�Է��հ�
//{
//	cout << "�Է��հ���";
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
//void duichenbibao()//�ԳƱհ�
//{
//	cout << "�ԳƱհ���";
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
//void Warshall()//���ݱհ�
//{
//	cout << "���ݱհ���";
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
//	cout << "�����뼯����Ԫ�صĸ�����" ;
//	cin >> n;
//	cout << "�����뼯��Ԫ��:" ;
//	for (i = 0; i < n; i++)
//		cin >> a[i];
//	cout << "��������ż������";
//	cin >> m;
//	cout << "�������Ԫ��ϵ��";
//	for (i = 0; i < 2 * m; i++)
//	{
//		if (i % 2 == 0)
//			cin >> x;
//		else
//			cin >> y;
//        if ((i + 1) % 2 == 0 && i)
//		    b[matrix(x)][matrix(y)] = 1;
//	}
//	cout << "��ϵ����:" << endl;
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
//		cout << "�����Է��ԣ�" << endl;
//	else
//		cout << "�������Է��ԣ�" << endl;
//	if (p)
//		cout << "���жԳ��ԣ�" << endl;
//	else 
//		cout << "�����жԳ��ԣ�" << endl;
//	if (q)
//		cout << "���з��Գ��ԣ�"<<endl;
//	else
//		cout << "�����з��Գ��ԣ�" << endl;
//	if (d)
//		cout << "���д����ԣ�" << endl;
//	else
//		cout << "�����д����ԣ�" << endl;
//	if(z)
//		cout << "���з��Է��ԣ�" << endl;
//	else
//		cout << "�����з��Է��ԣ�" << endl;
//	zifanbibao();
//    duichenbibao();
//	Warshall();
//	return 0;
//}