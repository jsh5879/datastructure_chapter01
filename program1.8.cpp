//�ǽ�2
//program 1.8: Selection sort: �ǽ�
//�ϳ��� .cpp�� ����, �и��Ͽ� �� function�� .h�� ����� ���� �ǽ�
// selection sort�� quick sort�� �ǽ��ϴ� ���� �ʿ�
#include <iostream>
#include <stdlib.h>
#include "1.8.h"
using namespace std;


using namespace std;

void main()
{
	int a[5];
	int input;

	for (int i = 0; i < 5; i++)
	{
		cout << "The next item = ";
		cin >> input;
		a[i] = input;
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
		cout << "a[" << i << "] = " << a[i] << endl;

	SelectionSort(a, 5);
	for (int i = 0; i < 5; i++)
		cout << "a[" << i << "] = " << a[i] << endl;

	system("pause");
}
