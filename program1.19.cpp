//Program 1.19: program 1.17 with count statements added
//�����Ͽ� ����Ǵ� ������� �׽�Ʈ�ϴ� ���α׷� �ۼ� 
//count�ϴ� ���α׷��� time check�ϴ� ���α׷�
#include <iostream>
int count = 0;

float Sum(float* a, const int n)
{
	float s = 0;
	count++;
	for (int i = 0; i < n; i++)
	{
		count++;
		s += a[i];
		count++;
	}
	count++;
	count++;
	return s;
}
