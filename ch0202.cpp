#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;//C++�R�W�Ŷ�
int main()
{
	char name[20] = "Hello"; //�ŧi c �r�� 
	//�ŧi���L���O
	int temp = 18;
	bool isOpen = true;
	
	//������ 
	if(isOpen)
	{
		printf("�ҰʧN��!\n");
		printf("�n�ΪA��\n");
	}
	else
	{
		printf("�����N��!\n");
	}
	isOpen = false;
	if(isOpen)
	{
		printf("�ҰʧN��!\n");
		printf("�n�ΪA��\n");
	}
	else
	{
		printf("�����N��!\n");
	}
	system("pause");
	return 0;
}

