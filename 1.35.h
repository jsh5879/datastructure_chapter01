#pragma once
//�ǽ�8
//Program 1.35 matrix muti

//�ǽ� �׽�Ʈ ���α׷� �����
//Add() ����
void Multiply(int **a, int **b, int **c, int m, int n, int p)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < p; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < n; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
}


