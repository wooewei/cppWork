#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;//C++�R�W�Ŷ�

int main()
{
	int  data[] = { 28,22,12,44,13,9,99};
	int len = sizeof(data)/4; //�}�C���� 
	//bubble sort
	for(int i=len-1;i>0;i--) //5�Ӥ����ɡA�~�j�����4�� i = 4 ~ 1
	{
		for(int j=0;j<i;j++)
		{
			if(data[j]>data[j+1])
			{
				int t=data[j]; /*�洫��ƳB�z*/
				data[j]=data[j+1];
				data[j+1]=t;
			}
		}
	}
	//��ܸ��
	for(int i=0;i<len;i++)
	{
		cout << data[i] << endl;
	}

	system("pause");
	return 0;
}

