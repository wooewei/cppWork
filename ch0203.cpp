#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;//C++�R�W�Ŷ�

int main()
{
	int temp;
	int color = 0x41; //16 �i���� 
	cout << "�п�J�ūסG";
	cin >> temp;
	//������ 
	if(temp>=25)
	{
		printf("\"�ҰʧN��!\"\n");
		printf("�n�ΪA��\n");
	}
	else
	{
		printf("�����N��!\n");
	}
	printf("%d\n",color);
	printf("%x\n",color);
	system("pause");
	return 0;
}

