//program 1.23: matrix addition with counting statements
//�ǽ�6
//ȭ�鿡�� ��� a[], b[]�� row, col�� ȭ�鿡�� �Է¹޴´�. 
//��� ���� �ڵ����� �ʱ�ȭ, ������� row, col, count ���� ����Ѵ�.
#include <iostream>
using namespace std;

int count = 0;
void Add(int** a, int** b, int** c, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		count++;
		for (int j = 0; j < n; j++)
		{
			count++;
			c[i][j] = a[i][j] + b[i][j];
			count++;
		}
		count++;
	}
	count++;
}
