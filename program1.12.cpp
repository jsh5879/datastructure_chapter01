//�ǽ�4
//program 1.12, recursive permutation generator
// �迭 ���Ҹ� 3, 4, 5�� ������ �������Ѽ� ���� �ǽ�

#include <iostream>
#include <stdlib.h>
#include "1.12.h"

using namespace std;

void main()
{
	cout << "programe1.5 12" << endl;
	char a[5];
	char input;
	for (int i = 0; i < 3; i++)
	{
		cout << "The next item = ";
		cin >> input;
		a[i] = input;
		cout << endl;
	}

	Permutations(a, 0, 3);

	system("pause");
}
