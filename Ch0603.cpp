#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;//C++�R�W�Ŷ�

int main()
{
	int fa[7]; //�ŧi�@���}�C
	fa[0]=75;
	cout << fa << endl;
	cout << fa[0] << endl;
	cout << &fa[0] << endl;
	cout << &fa[1] << endl;
	printf("----------\n");
	for(int i=0;i<7;i++)
	{
		cout << &fa[i] << endl;
	}

	system("pause");
	return 0;
}

