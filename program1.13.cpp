//Program 1.13: Compute the product of the elements a[0:n-1]
//STL�� ȣ���ϴ� main()�� ���κ��� homework�� ����
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int Product(int* a, int n)
{
	int initVal = 1;
	return accumulate(a, a + n, initVal, multiplies<int>());
}

main()
{
	...
}
