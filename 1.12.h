#pragma once

//�ǽ�4
//program 1.12, recursive permutation generator
// �迭 ���Ҹ� 3, 4, 5�� ������ �������Ѽ� ���� �ǽ�
#include <iostream>
#include "swap.h"
using namespace std;

void Permutations(char *a, const int k, const int m)
{
	if (k == m - 1)
	{
		for (int i = 0; i <= m; i++) cout << a[i] << "";
		cout << endl;
	}
	else
		for (int i = k; i < m; i++)
		{
			swap(a[k], a[i]);
			Permutations(a, k + 1, m);
			swap(a[k], a[i]);
		}

}
