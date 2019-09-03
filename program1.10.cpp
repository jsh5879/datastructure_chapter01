//program 1.10: C++ function for binary search
//BinarySearch()�� ȣ���ϴ� �ڵ�μ� selection sort() �Լ��� �׽�Ʈ�ϴ� ���α׷��� ����Ͽ� �ǽ�
#include <iostream>

int BinarySearch(int* a, const int x, const int n)
{
	int left = 0, right = n - 1;
	while (left <= right)
	{
		int middle = (left + right) / 2;
		if (x < a[middle]) right = middle - 1;
		else if (x > a[middle]) left = middle + 1;
		else return middle;
	}
	return -1;
}
