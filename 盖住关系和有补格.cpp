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
//}int zifan()//�Է�
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
//int fanduichen()//���Գ�
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
////�����Խ����ϵ������⣬�����i��ȫΪ0����ô��i��Ԫ��Ϊ����Ԫ
////�����Խ����ϵ������⣬�����i��ȫΪ0����ô��i��Ԫ��Ϊ��СԪ
////�����Խ����ϵ������⣬�����i��ȫΪ1����ô��i��Ԫ��Ϊ��СԪ
////�����Խ����ϵ������⣬�����i��ȫΪ1����ô��i��Ԫ��Ϊ���Ԫ
//int main()
//{
//	int m, i, k, q, d, x, y, j, p, s = 0, h = 0, e;
//	cout << "�����뼯����Ԫ�صĸ�����";
//	cin >> n;
//	cout << "�����뼯��Ԫ��:";
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
//		if ((i + 1) % 2 == 0 && i)
//			b[matrix(x)][matrix(y)] = 1;
//	}
//	k = zifan();
//	q = fanduichen();
//	d = chuandi();
//	if (k)
//		cout << "�����Է��ԣ�" << endl;
//	else
//		cout << "�������Է��ԣ�" << endl;
//	if (q)
//		cout << "���з��Գ��ԣ�" << endl;
//	else
//		cout << "�����з��Գ��ԣ�" << endl;
//	if (d)
//		cout << "���д����ԣ�" << endl;
//	else
//		cout << "�����д����ԣ�" << endl;
//	if (k != 0 && q != 0 && d != 0)
//		cout << "����ƫ���ϵ��" << endl;
//	cout << "��ϵ����:" << endl;
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
//	cout << "ɾ����ȹ�ϵ��ľ���Ϊ��" << endl;
//	for (i = 0; i < n; i++)
//	{
//		if (b[i][i] == 1)
//			b[i][i] = 0;
//		for (j = 0; j < n; j++)
//			cout << b[i][j] << " ";
//		cout << endl;
//	}
//	cout << "ɾ�����ݹ�ϵ��ľ���Ϊ��" << endl;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (b[i][j] == 1)
//			{
//				for (p = 0; p < n; p++)
//				{
//					if (b[j][p] == 1 && b[i][p] == 1)//�жϸ�ס��ϵ
//					{
//						b[i][p] = 0;
//					}
//				}
//			}
//		}
//	}
//	cout << "����չ����" << endl;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//			cout << b[i][j] << " ";
//		cout << endl;
//	}
//	cout << "��ס��ϵΪ��" << endl;
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
//		cout << "����ȫ�½磡,��СԪ�ǣ�" << i << endl;
//	do
//	{
//		int i = 4;
//		a[i] == 1;
//		i += n;
//		h++;
//	} while (i >= n * n);
//	if (h == n)
//		cout << "����ȫ�Ͻ磡,���Ԫ��" << j << endl;//�ж��н��
//	if (s == 1 && h == 1)
//	{
//		cout << "�ù�ϵ���н��" << endl;
//		cout << "�ù�ϵ���н��" << endl;
//	}
//	if (((i || j) >= j) && ((i || j) <= i))//�ж��в���
//		cout << "�ù�ϵ���в���" << endl;
//	return 0;
//}