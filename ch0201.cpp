#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;//C++�R�W�Ŷ�

int main()
{
	short var_1;
	int age = 18;
	printf("�ǥͪ��~��:%d\n",age);
	
	age = age + 3;
	printf("�T�~��ǥͪ��~��:%d\n",age);
	//�ŧi�r��
	char ch1 = 'a';
	char ch2 = 97;
	printf("%c\t%c\n",ch1,ch2); 
	
	ch2 = ch2 + 3;
	printf("%c\t%c\n",ch1,ch2); 
	//�ŧi�B�I�� 
	double f1 = 0.0185697;
	cout << "�B�I��:" << f1 << endl;
	
	
	system("pause");
	return 0;
}

